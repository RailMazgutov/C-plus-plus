#include <iostream>
#include <cstdlib>

void puzirek(int* array,int size);

int main()
{
    std::cout << " enter the number of elements in the array " ;
    int size;
    std::cin >> size;
    std::cout << " enter " << size << " numbers of array " << std::endl;
    int *array = new int[size];
    for (int i = 0; i < size; i++)
    {
        std::cin >> array[i];
    }
    puzirek(array,size);

    for (int i = 0; i < size; i++)
    {
        std::cout << array[i];
    }
    delete array;

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
