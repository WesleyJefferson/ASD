#include<stdio.h>
#include<string.h>
#include<conio.h>
#define MAX_STACK 3

typedef struct
{
    int top;
    char data[3][3];
}STACK;

STACK tumpuk;

void inisialisasi()
{
    tumpuk.top = -1;
}

int isFull()
{
    if(tumpuk.top == MAX_STACK -1)
        return 1;
    else
        return 0;
}

int isEmpty()
{
    if(tumpuk.top == -1)
        return 1;
    else
        return 0;
}

void push(char d[3])
{
    tumpuk.top++;
    strcpy(tumpuk.data[tumpuk.top], d);
}

void pop()
{
    printf("Data yang diambil = %s\n", tumpuk.data[tumpuk.top]);
    tumpuk.top--;
}

void tampil()
{
    for(int i=tumpuk.top; i>=0; i--)
    {
        printf("Data: %s\n", tumpuk.data[i]);
    }
}

void clear()
{
    tumpuk.top = -1;
}

int main()
{
    int pilihan;
    inisialisasi();
    char dt[3];
    do
    {
        printf("1. PUSH\n");
        printf("2. POP\n");
        printf("3. CETAK ISI DATA STACK\n");
        printf("4. HAPUS ISI DATA STACK\n");
        printf("5. EXIT\n");
        printf("Pilihan anda: ");
        scanf("%d", &pilihan);

        switch(pilihan)
        {
            case 1: if(isFull() !=1)
            {
                printf("Data yag ingin disimpan = ");
                scanf("%s", dt);
                push(dt);
            }
            else
                printf("Array STACK sudah penuh!\n");
            break;

            case 2: if(isEmpty() !=1)
                pop();
            else
                printf("Masih kosong");
            break;

            case 3: if(isEmpty() !=1)
                tampil();
            else
                printf("Masih kosong");
            break;

            case 4: clear();
                printf("Array STACK sudah kosong");
            break;
        }
        getch();
    }
    while(pilihan !=5);
        printf("Keluar dari program!\n");

    getch();
}
