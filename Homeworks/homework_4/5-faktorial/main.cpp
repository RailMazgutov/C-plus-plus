#include <iostream>
#include <cstdlib>

void factorial (int number, int fact);

int main()
{
    std::cout << "enter the number";
    int number;
    std::cin >> number;

    factorial(number, number);
    std::cout << number << " ";

    system("pause");
    return 0;
}


void factorial(int number, int fact)
{
    if (fact == 1)
    {
        std::cout << number << " " << std::endl;
        return;
    }
    fact -= 1;
    number = number*fact;
    factorial(number,fact);

}
