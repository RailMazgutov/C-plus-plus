#include <iostream>
#include <cstdlib>

int main()
{
    std::cout << " vvedite 20 chisel " ;
    int array[20];
    int i = 0;
    for (i = 0; i < 20; i++)
    {
        std::cin >> array[i];
        if (i % 2 == 0)
            {
             array[i] /= 2.0;
            }
        else
        {
            array[i] /= 3.0;
        }
    }
    for (i = 0; i < 20; i++)
    {
        std::cout << array[i];
    }


    system("pause");
    return 0;
}
