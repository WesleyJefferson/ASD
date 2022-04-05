#include <stdio.h>
#include <stdlib.h>

/*int main()
{
    int i,jj //variabel biasa
    int *p; //variabel pointer
    p=&i; //p=i
    *p=5; //p=5
    j=i; //j=i

    printf ("%d %d %d",i,j,*p);
}*/

/*int main()
{
    int nilai[3], *petunjuk, *tes;
    nilai[0]=125;
    nilai[1]=345;
    nilai[2]=750;

    petunjuk=&nilai[0];
    tes=&nilai[2];

    printf ("Nilai %i ada di alamat memori %p\n", *petunjuk, petunjuk);
    printf ("Nilai %i ada di alamat memori %p\n", *tes, tes);
}*/

/*int main()
{
    int *p, a=25, b;
    p=&a;
    b=*p;

    printf("Nilai a=%d di alamat memori %p\n", a, p);
    printf("Nilai b=%d di alamat memori %p\n", b, p);
}*/

/*int main()
{
    int i,j;
    int *p;

    printf("%d%d\n",p, &i);

    p=&i;

    printf("%d%d\n", p, &i);
}*/

/*int main()
{
    int *p;
    printf("%d", *p); //hasilnya akan random karena tidak terdeklarasikan nilainya.
}*/

int main()
{
    int *p;
    p=(int*) malloc (sizeof(int));
    *p=10;

    printf("%d\n", *p);
    free(p);
}
