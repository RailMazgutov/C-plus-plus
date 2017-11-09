#include <iostream>
#include <cstdlib>

int factorial (int number);

int main()
{
    std::cout << "enter the number";
    int number;
    std::cin >> number;

    number = factorial(number+1);
    std::cout << number << " ";

    system("pause");
    return 0;
}


int factorial(int number)
{
    if (number == 1)
    {
        return number;
    }
    number -= 1;
    number = number * factorial(number);
    return number;

}
