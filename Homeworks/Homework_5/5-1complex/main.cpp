#include <iostream>
#include <cstdlib>

using namespace std;

struct Complex
{
    int x;
    int y;
};

void sum(const Complex& number1, const Complex& number2);
void sub(const Complex& number1, const Complex& number2);
void mul(const Complex& number1, const Complex& number2);
void div(const Complex& number1, const Complex& number2);


int main()
{
    Complex number1 {2,2};
    Complex number2 {1,1};
    sum(number1,number2);
    sub(number1,number2);
    mul(number1,number2);
    div(number1,number2);
    return 0;
}



void sum(const Complex& number1, const Complex& number2)
{
    Complex sum;
    sum.x = number1.x + number2.x;
    sum.y = number1.y + number2.y;
    cout << sum.x << "+i" << sum.y << std::endl;
}

void sub(const Complex& number1, const Complex& number2)
{
    Complex sub;
    sub.x = number1.x - number2.x;
    sub.y = number1.y - number2.y;
    cout << sub.x << "+i" << sub.y << std::endl;
}

void mul(const Complex& number1, const Complex& number2)
{
    Complex mul;
    mul.x = (number1.x*number2.x) - (number1.y*number2.y);
    mul.y = (number1.y*number2.x) + (number1.x*number2.y);
    cout << mul.x << "+i" << mul.y << std::endl;
}

void div(const Complex& number1, const Complex& number2)
{
    Complex div;
    div.x = ((number1.x*number2.x) + (number1.y*number2.y))/((number2.x*number2.x)+ (number2.y*number2.y));
    div.y = ((number1.y*number2.x)-(number1.x*number2.y))/((number2.x*number2.x)+ (number2.y*number2.y));
    cout << div.x << "+i" << div.y << std::endl;
}
