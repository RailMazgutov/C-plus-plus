#include <iostream>
#include <cstdlib>


int main()
{
 int array[7][6];
 int i;
 int j;
 for (j =0; j < 6; ++j)
    {
    for (i = 0; i < 7; ++i)
        {
        array[i][j] = j*7+i;
        std::cout << array[i][j] <<"  " ;
        }
    std::cout << std::endl;
    }

    system("pause");
    return 0;
}
