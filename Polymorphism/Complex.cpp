#include <iostream>

class Complex
{
    public:
        Complex(float real=0, float imag=0) : mReal(real), mImag(imag)
        {}

        friend std::ostream& operator<<(std::ostream& output, Complex const& complex);

        Complex operator+(Complex const& obj)
        {
            this->mReal = this->mReal + obj.mReal;
            this->mImag = this->mImag + obj.mImag;

            return *this;
        }

        void setReal(float rl)
        {
            this->mReal = rl;
        }

        float getReal()
        {
            return this->mReal;
        }

        void setImg(float img)
        {
            this->mImag = img;
        }

        float getImg()
        {
            return this->mImag;
        }
    private:
        float mReal;
        float mImag;
};

std::ostream& operator<<(std::ostream& output, Complex const& complex)
{
    std::cout << complex.mReal << " + i" << complex.mImag;
    return output;
}

int main()
{
    Complex c1(10, 5), c2(6.6, 9);
    c1.setReal(6);
    Complex c3 = c1 + c2;

    std::cout << c3 << std::endl;

    return 0;
}