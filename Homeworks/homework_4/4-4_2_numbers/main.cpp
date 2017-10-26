#include <iostream>
#include <cstdlib>


void sorting(int* array,int size);
void merge(int*arraya, int* arrayb, int* arrayresult, int sizea, int sizeb, int size);


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

    sorting(arraya, sizea);
    sorting(arrayb, sizeb);


    int size = sizea + sizeb;
    int* arrayresult = new int[size];

    merge(arraya,arrayb,arrayresult,sizea,sizeb,size);

    for (int i = 0; i < size; i++)
    {
        std::cout << arrayresult[i];
    }
    delete[] arrayresult;
    delete[] arraya;
    delete[] arrayb;
}

void sorting(int* array, int size)
{
    for (int j = 0; j < size; j++) // сортировка по возрастанию
    {
        for (int i = 0; i < (size - 1); i++)
        {
            if (array[i]>array[i+1])
            {
                int a = array[i+1];
                array[i+1] = array[i];
                array[i] = a;
            }
        }
    }
}


void merge(int*arraya, int* arrayb, int* arrayresult, int sizea, int sizeb, int size)
{
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
}
