#include <iostream>
#include <cstdlib>


void sorting(int* array,int size);
void merge(int* array, int size);

int main()
{
    setlocale(LC_ALL, "rus");

    std::cout << " введите размер массива " ;
    int size;
    std::cin >> size;
    std::cout << " введите элементы массива " ;
    int* array = new int[size];

    for (int i = 0; i < size; ++i)
    {
        std::cin >> array[i];
    }


merge(array, size);



}

void sorting(int* array, int size)
{
    for (int j = 0; j < size;++ j) // сортировка по возрастанию
    {
        for (int i = 0; i < (size - 1); ++i)
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


void merge(int* array, int size)
{
    int sizea = size/2;
    int sizeb = (size/2)+(size % 2);
    int* arraya = new int[sizea];
    int* arrayb = new int[sizeb];

    for (int i = 0; i < sizea; ++i)
    {
        arraya[i] = array[i];
        std::cout << arraya[i] << " ";
        std::cout << std::endl;
    }
    for (int i = sizea; i < (sizea+sizeb); ++i)
    {
        arrayb[i] = array[i];
        std::cout << arrayb[i] << " ";
        std::cout << std::endl;
    }
    int* arrayresult = new int[size];
    if ((sizea*sizeb) > 1)
    {
        merge(arraya, sizea);
        merge(arrayb, sizeb);
    }
    else
    {
     int c = 0;
     int d = 0;

        for (int i = 0; i < size; ++i)
        {

            if ((c == sizea) || (d == sizeb))
           {
              if (c == sizea)
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
        for (int i = 0; i < size; ++i)
        {
            std::cout << arrayresult[i] << " ";
        }
    }



    delete[] arrayresult;
    delete[] arraya;
    delete[] arrayb;
}
