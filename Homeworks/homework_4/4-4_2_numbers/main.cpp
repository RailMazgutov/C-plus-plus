#include <iostream>
#include <cstdlib>


int main()
{
    std::cout << " enter two numbers " ;
    int sizea;
    int sizeb;
    std::cin >> sizea >> sizeb;

    int* arraya = new int[sizea];
    int* arrayb = new int[sizeb];

    std::cout << " enter the number of the first array " ;
    for (int i = 0; i < sizea; i++)
    {
        std::cin >> arraya[i];
    }
    std::cout << " enter the number of the second array " ;
    for (int i = 0; i < sizeb; i++)
    {
        std::cin >> arrayb[i];
    }

    for (int j = 0; j < sizea; j++) // сортировка по возрастанию
    {
        for (int i = 0; i < (sizea - 1); i++)
         if (arraya[i]>arraya[i+1])
         {
            int a = arraya[i+1];
            arraya[i+1] = arraya[i];
            arraya[i] = a;
         }
    }
    for (int j = 0; j < sizeb; j++) // сортировка по возрастанию
    {
        for (int i = 0; i < (sizeb - 1); i++)
         if (arrayb[i]>arrayb[i+1])
         {
            int b = arrayb[i+1];
            arrayb[i+1] = arrayb[i];
            arrayb[i] = b;
         }
    }


    int size = sizea + sizeb;
    int* arrayresult = new int[size];

    int c = 0;
    int d = 0;
    for (int i = 0; i < size; i++)
    {

        if ((c > sizea) || (d > sizeb))
        {
            if (c > sizea)
            {
                arrayresult[i] = arraya[d];
                d += 1;
            }
            else
            {
                arrayresult[i] = arrayb[c];
                c += 1;
            }
        }
        else
        {

            if (arraya[c] > arrayb[d])
            {
                arrayresult[i] = arrayb[d];
                d += 1;
            }
            else
            {
                arrayresult[i] = arraya[c];
                c += 1;
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        std::cout << arrayresult[i];
    }

}


