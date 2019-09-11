#include <iostream>
#include <cmath>
using namespace std;

struct Complex
{
    double real;
    double img;
    Complex operator+(const Complex& rhs) const;
    Complex operator+(double rhs) const;
    Complex operator-(const Complex& rhs) const;
    Complex operator-(double rhs) const;
    Complex operator*(const Complex& rhs) const;
    Complex operator*(double rhs) const;
    Complex operator/(const Complex& rhs) const;
    Complex operator/(double rhs) const;
    void output() const;
};

Complex Complex::operator+(const Complex& complex) const
{
    Complex result;
    result.real = real + complex.real;
    result.img = img + complex.img;
    return result;
}

Complex Complex::operator+(double rhs) const
{
    Complex result;
    result.real = real + rhs;
    result.img = img;
    return result;
}

Complex Complex::operator-(const Complex& complex) const
{
    Complex result;
    result.real = real - complex.real;
    result.img = img - complex.img;
    return result;
}

Complex Complex::operator-(double rhs) const
{
    Complex result;
    result.real = real - rhs;
    result.img = img;
    return result;
}

Complex Complex::operator*(const Complex& complex) const
{
    Complex result;
    result.real = (real*complex.real)-(img*complex.img);
    result.img = (img*complex.real) +(real*complex.img);
    return result;
}

Complex Complex::operator*(double rhs) const
{
    Complex result;
    result.real = real*rhs;
    result.img = img*rhs;
    return result;
}

Complex Complex::operator/(const Complex& complex) const
{
    Complex result;
    result.real = ((real*complex.real)+(img*complex.img))/(complex.real*complex.real+complex.img*complex.img);
    result.img = ((img*complex.real)-(real*complex.img))/(complex.real*complex.real+complex.img*complex.img);
    return result;
}

Complex Complex::operator/(double rhs) const
{
    Complex result;
    result.real = real/rhs;
    result.img = img/rhs;
    return result;
}

void Complex::output() const
{
    if(img >= 0)
    {
        cout << real << "+" << img << "i" << std::endl;
    }
    else
    {
        cout << real << "-" << std::abs(img) << "i" << std::endl;
    }
}

int main()
{
    Complex complex1 {2,2};
    Complex complex2 {3,3};
    Complex complex3 = complex1 + complex2;
    Complex complex4 = complex1 - complex2;
    Complex complex5 = complex1 * complex2;
    Complex complex6 = complex1 / complex2;
    std::cout << "result: ";
    complex3.output();
    complex4.output();
    complex5.output();
    complex6.output();
}
