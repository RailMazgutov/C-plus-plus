#include <iostream>
#include <cstdlib>

double* memory(int size);
void filling(double* array,int size);
void display(double* array,int size);
void clear(double* array);

int main()
{
    double *array;
    std::cout << " enter the number of elements in the array " ;
    int size;
    std::cin >> size;

    array = memory(size);
    filling(array,size);
    display(array,size);
    clear(array);


    system("pause");
    return 0;
}

double* memory(int size)
{
    double* array = new double[size];
    return array;
}

void filling(double* array,int size)
{
    for (int i = 0; i < size; i++)
    {
        array[i] = 3;
    }
}

void display (double* array,int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << array[i];
    }
}

void clear(double* array)
{
    delete[] array;
}
