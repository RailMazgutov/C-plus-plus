#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

struct Complex
{
    int x;
    int y;
};

Complex sum(const Complex& number1, const Complex& number2);
Complex sub(const Complex& number1, const Complex& number2);
Complex mul(const Complex& number1, const Complex& number2);
Complex div(const Complex& number1, const Complex& number2);
void output(const Complex& number);


int main()
{
    Complex number1 {1,1};
    Complex number2 {2,2};
    Complex sum = sum(number1,number2);
    Complex sub = sub(number1,number2);
    Complex mul = mul(number1,number2);
    Complex div = div(number1,number2);
    output(sum);
    output(sub);
    output(mul);
    output(div);

    system("pause");
    return 0;
}



Complex sum(const Complex& number1, Complex& number2)
{
    Complex sum;
    sum.x = number1.x + number2.x;
    sum.y = number1.y + number2.y;
    return sum;
}

Complex sub(const Complex& number1, const Complex& number2)
{
    Complex sub;
    sub.x = number1.x - number2.x;
    sub.y = number1.y - number2.y;
    return sub;
}

Complex mul(const Complex& number1,const Complex& number2)
{
    Complex mul;
    mul.x = (number1.x*number2.x) - (number1.y*number2.y);
    mul.y = (number1.y*number2.x) + (number1.x*number2.y);
    return mul;
}

Complex div(const Complex& number1,const Complex& number2)
{
    Complex div;
    div.x = ((number1.x*number2.x) + (number1.y*number2.y))/((number2.x*number2.x)+ (number2.y*number2.y));
    div.y = ((number1.y*number2.x) - (number1.x*number2.y))/((number2.x*number2.x)+ (number2.y*number2.y));
    return div;
}

void output(const Complex& number)
{
    if(number.y >= 0)
    {
    cout << number.x << "+i" << number.y << std::endl;
    }
    else
    {
    cout << number.x << "-i" << abs(number.y) << std::endl;
    }
}
