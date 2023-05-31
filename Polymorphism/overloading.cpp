#include <iostream>
#include <string>

class Complex
{
public:
    Complex(float mreal = 0, float mimaginary = 0) : real(mreal), imaginary(mimaginary)
    {
    }

    Complex operator+(const Complex &obj)
    {
        Complex temp;

        temp.real = real + obj.real;
        temp.imaginary = imaginary + obj.imaginary;

        return temp;
    }

    friend std::ostream &operator<<(std::ostream &output, Complex const &complex);

    void setReal(float rl)
    {
        this->real = rl;
    }

    float getReal()
    {
        return this->real;
    }
    void setImg(float img)
    {
        this->imaginary = img;
    }

    float getImg()
    {
        return this->imaginary;
    }

private:
    float real;
    float imaginary;
};

std::ostream &operator<<(std::ostream &output, Complex const &complex)
{
    output << complex.real << " + i" << complex.imaginary;

    return output;
}

int main()
{
    Complex complex1, complex2, result;

    Complex cd;

    Complex c1(5, 6);
    Complex c2(6, 77);
    Complex c3(0, 0);

    c2.setImg(9.0);

    c3 = c1 + c2;

    std::cout << c3;

    return 0;
}