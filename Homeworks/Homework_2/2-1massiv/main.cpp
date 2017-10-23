#include <iostream>
#include <cstdlib>

int main()
{
    std::cout << " vvedite 10 chisel " ;
    int array[10];
    int i = 0;
    int summa = 0;
    float srednee;
    int naib;
    int naim;

    for (i = 0; i < 10; i++)
    {
        std::cin >> array[i];
        summa = summa + array[i];
        if (i == 0)
        {
            naib = array[i];
            naim = array[i];
        }
        else
        {
            if (array[i] > naib)
            {
                naib = array[i];
            }
            if (array[i] < naim)
            {
                naim = array[i];
            }
        }
    }

    srednee = summa/10.0;

    std::cout << summa << std::endl;
    std::cout << srednee << std::endl;
    std::cout << naib << std::endl;
    std::cout << naim << std::endl;
    for (i = 9; i >= 0; i--)
    {
        std::cout << array[i];
    }

    system("pause");
    return 0;
}
