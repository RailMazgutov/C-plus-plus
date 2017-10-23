#include <iostream>
#include <cstdlib>

int findMaxElement(int* array,int size);

int main()
{
    std::cout << " enter 4 numbers " ;
    int array[4];
    for (int i = 0; i < 4; i++)
    {
        std::cin >> array[i];
    }
    int vivodmaxelement = findMaxElement( array,4);

        std::cout << vivodmaxelement;


    system("pause");
    return 0;
}

int findMaxElement(int* array,int size)
{    int maxelement = array[1];
        for (int i = 0; i < size; i++)
        {
            if (array[i] > maxelement)
            {
                  maxelement = array[i];
            }
         }
    return maxelement;
}
