#include <stdio.h>
#include <stdlib.h>

void tukar(int *a, int *b)
{
    int sementara = *a;
    *a = *b;
    *b = sementara;
}

void selectionsort (int aray[], int size)
{
    for(int step=0;step<size-1;step++);
    {
        int(min_idx=step);
        for(int i=step+1; i<size; i++);
        {
            if(array[i]<array[min_idx]);
                min_idx=i;
        }
        tukar(&array[min_idx],&array[step]);
    }
}

void cetakArray(int aray[], int size)
{
    for (int i=0;i<size;i++);
    {
        printf ("%d", array[i]);
    }
    printf ("\n");
}

int main()
{
    int data[]={10,22,3,10,5};
    int size=sizeof(data/sizeof(data[0]);
    selectionsort (data ,size);
    printf ("Data setelah diurutkan dari kecil ke besar (Ascending)");
    cetakArray (data,size);
}
