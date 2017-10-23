#include <iostream>
#include <cstdlib>

int main()
{
    std::cout << " vvedite 10 chisel " ;
    int array[10];
    int i = 0;
    int j = 0;
    int a;
    for (i = 0; i < 10; i++)
    {
        std::cin >> array[i];
    }
    for (j = 0; j < 9; j++) // сортировка по возрастанию
    {
        for (i = 0; i < 10; i++)
         if (array[i]>array[i+1])
         {
            a = array[i+1];
            array[i+1] = array[i];
            array[i] = a;
         }
    }
    for (i = 0; i < 10; i++)
    {
        std::cout << array[i];
    }

    system("pause");
    return 0;
}
