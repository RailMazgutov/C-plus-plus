#include <iostream>
#include <cstdlib>


void sorting(int* array,int size);
void merge(int*arraya, int* arrayb, int* arrayresult, int sizea, int sizeb, int size);


int main()
{
    setlocale(LC_ALL, "rus");

    std::cout << " введите размер массива " ;
    int size;
    std::cin >> size;
    std::cout << " введите элементы массива " ;
    int* array = new int[size];

    for (int i = 0; i < size; i++)
    {
        std::cin >> array[i];
    }

    int sizea;
    int sizeb;
    if (size % 2 == 0)
    {
         sizea = (size/2);
         sizeb = sizea;
    }
    else
    {
        sizea = (size/2);
        sizeb = sizea + 1;
    }

    int* arraya = new int[sizea];
    int* arrayb = new int[sizeb];
    for (int i = 0; i < sizea; i++)
    {
        arraya[i] = array[i];
    }
    for (int i = sizea; i < size; i++)
    {
        arrayb[i-sizea] = array[i];
    }

    sorting(arraya, sizea);
    sorting(arrayb, sizeb);


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
