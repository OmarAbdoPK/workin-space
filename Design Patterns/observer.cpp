#include <iostream>
#include <vector>
#include <algorithm>

class Subject;
class Observer
{
public:
    virtual ~Observer() = default;
    virtual void Update(Subject &) = 0;
};

class Subject
{
public:
    virtual ~Subject() = default;

    void Attach(Observer &o)
    {
        observer.push_back(&o);
    }

    void Detach(Observer &o)
    {
        observer.erase(std::remove(observer.begin(), observer.end(), &o));
    }

    void Notify()
    {
        for (auto *o : observer)
        {
            o->Update(*this);
        }
    }

private:
    std::vector<Observer *> observer;
};

class ClockTimer : public Subject
{
public:
    void setTime(int hours, int minutes, int seconds)
    {
        this->hours = hours;
        this->minutes = minutes;
        this->seconds = seconds;

        Notify();
    }

    int GetHours() const { return this->hours; }

    int GetMinutes() const { return this->minutes; }

    int GetSeconds() const { return this->seconds; }

private:
    int hours;
    int minutes;
    int seconds;
};

class DigitalClock : public Observer
{
public:
    explicit DigitalClock(ClockTimer &s) : subject(s)
    {
        subject.Attach(*this);
    }

    ~DigitalClock()
    {
        subject.Detach(*this);
    }

    void Update(Subject &changedSubject) override
    {
        if (&changedSubject == &subject)
        {
            Draw();
        }
    }

    void Draw()
    {
        int hours = subject.GetHours();
        int minutes = subject.GetMinutes();
        int seconds = subject.GetSeconds();

        std::cout << "Digital time is " << hours << " : " << minutes << " : " << seconds << std::endl;
    }

private:
    ClockTimer &subject;
};

class AnalogClock : public Observer
{
public:
    AnalogClock(ClockTimer &s) : subject(s)
    {
        subject.Attach(*this);
    }

    ~AnalogClock()
    {
        subject.Detach(*this);
    }

    void Update(Subject &changedSubject) override
    {
        if (&changedSubject == &subject)
        {
            Draw();
        }
    }

    void Draw()
    {
        int hours = subject.GetHours();
        int minutes = subject.GetMinutes();
        int seconds = subject.GetSeconds();

        std::cout << "Digital time is " << hours << " : " << minutes << " : " << seconds << std::endl;
    }

private:
    ClockTimer &subject;
};

int main()
{
    ClockTimer time;

    DigitalClock digTime(time);
    AnalogClock anaTime(time);

    time.setTime(2, 14, 5);
}