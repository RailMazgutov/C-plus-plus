#include <iostream>
#include <cstdlib>

void exchange(int* a, int* b);

int main()
{
    int value1;
    int value2;
    std::cout << "enter two numbers";
    std::cin >> value1 >> value2;
    exchange( &value1 , &value2 );
    std::cout << value1 << value2;
    system("pause");
    return 0;
}

void exchange (int* a, int* b)
{

    int c = *a;
    *a = *b;
    *b = c;
}
