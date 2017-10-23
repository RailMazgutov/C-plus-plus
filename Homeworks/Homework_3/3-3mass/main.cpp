#include <iostream>
#include <cstdlib>

void puzirek(int* array,int size);

int main()
{
    std::cout << " enter 4 numbers " ;
    int array[4];
    for (int i = 0; i < 4; i++)
    {
        std::cin >> array[i];
    }
    puzirek(array,4);

    for (int i = 0; i < 4; i++)
    {
        std::cout << array[i];
    }

    system("pause");
    return 0;
}

void puzirek(int* array,int size)
{
    for (int j = 0; j < size - 1; j++) // сортировка по возрастанию
    {
        for (int i = 0; i < size; i++)
        {
            if (array[i]>array[i+1])
            {
               int c = array[i+1];
               array[i+1] = array[i];
               array[i] = c;
            }
         }
    }
}
