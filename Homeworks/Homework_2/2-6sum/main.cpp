#include <iostream>
#include <cstdlib>


int main()
{
int array[3][3];
int sum = 0 ;
std::cout << " enter nine numbers " ;
for ( int j = 0; j < 3; ++j)
{
    for ( int i = 0; i < 3; ++i)
    {

        std::cin >> array[i][j];
        if ((i + j) % 2 == 0)
        {
            if (array[i][j] > 5)
            {
                if (array[i][j] % 3 != 0)
                {
                    sum += array[i][j];
                }
            }
        }
    }
}

std::cout << sum;
    system("pause");
    return 0;
}
