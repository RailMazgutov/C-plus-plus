#include <iostream>
#include <cstdlib>

int secondary(int a,int b,int c);

int main()
{
    int one;
    int two;
    int three;
    std::cout << "enter three numbers";
    std::cin >> one >> two >> three;
    int value = secondary(one,two,three);
    std::cout << value;
    system("pause");
    return 0;
}

int secondary(int a,int b,int c)
{
if (a > b)
{
    if (b > c)
    {
        return b;
    }
    if (c > a)
    {
        return a;
    }
}
else
{
    if (b < c)
    {
        return b;
    }
    return c;
}
}
