#include <iostream>
#include <cstdlib>

int* memory(int size);
void enter(int* array,int size);
void comparing(int* array,int size);

int main()
{
    std::cout << " enter the number of elements in the array " ;
    int size;
    std::cin >> size;

    int *array = memory(size);
    enter(array,size);
    comparing(array,size);


    system("pause");
    return 0;
}

int* memory(int size)
{
    int* array = new int[size];
    return array;
}

void enter(int* array,int size)
{
    std::cout << " enter the elements of the array " ;
    for (int i = 0; i < size; i++)
    {
        std::cin >> array[i];
    }
}

void comparing (int* array,int size)
{
    std::cout << " enter the number for comparison " ;
    int comparison;
    std::cin >> comparison;
    int result = 0;
    for (int i = size+1; i > 0; i--)
    {

        if (array[i-1] == comparison)
        {
            result = i;
        }
    }
    if (result == 0)
    {
        std::cout << "no matches";
    }
    else
    {
        std::cout << result;
    }
    delete[] array;
}


