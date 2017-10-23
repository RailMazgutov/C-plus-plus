#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
int i;
int j;
int array[10][10];
for (j = 0; j < 10; j++)
{
    for (i = 0; i < 10; i++)
    {
        if (i == j)
        {
            array[i][j] = 1;
        }
        else
        {
            array [i][j] = 0;
        }
        std::cout << array[i][j];
    }
    std::cout << endl;
}


system ("pause");
    return 0;
}
