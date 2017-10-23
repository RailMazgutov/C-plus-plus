#include <iostream>
#include <cstdlib>

int main()
{
    std::cout << " vvedite 10 chisel " ;
    int array[10];
    int i = 0;
    for (i = 0; i < 10; i++)
    {
        std::cin >> array[i];
        if (i % 2 == 0)
            {
             array[i] = array[i]/2.0;
            }
        if (array[i] % 5 == 0)
            {
             array[i] = 0;
            }
    }

    for (i = 0; i < 10; i++)
    {
        std::cout << array[i];
    }


    system("pause");
    return 0;
}
