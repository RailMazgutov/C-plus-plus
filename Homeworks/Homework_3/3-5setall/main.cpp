#include <iostream>
#include <cstdlib>

void setall(int* array,int size, int value);

int main()
{
    int array[4];

    setall(array, 4, 5);

    for (int i = 0; i < 4; i++)
    {
        std::cout << array[i];
    }

    system("pause");
    return 0;
}

void setall(int* array,int size,int  value)
{
    for (int i = 0; i < size; i++)
        {
            array[i] = value;
        }
}
