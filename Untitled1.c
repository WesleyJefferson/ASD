#include <stdio.h>
#include <stdlib.h>


struct node{
    int data;
    struct node* next;
};
struct node *head;

void awal()
{
    //isi data di node awal
    struct node* ptr;
    int item;

    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr==NULL)
    {
        printf("OVERFLOW");
    }
    else
    {
        printf("Masukkan data:");
        scanf("%d", &item);
        ptr -> data = item;
        ptr -> next = head;
        head = ptr;
        printf("\n data berhasil di simpan di NODE awal!");
    }
    system("cls");
}

void akhir()
{
    //isi data akhir
    struct node* ptr, *temp;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node));

    if (ptr==NULL)
    {
        printf("OVERFLOW");
    }
    else
    {
        printf("Masukkan data: ");
        scanf("%d", &item);
        ptr ->data = item;

        if (head==NULL)
        {
            ptr->next = NULL;
            head=ptr;
            printf("Berhasil simpan ke NODE!");
        }
        else
        {
            temp = head;
            while (temp->next !=NULL)
            {
                temp = temp->next;
            }
            temp->next = ptr;
            ptr->next = NULL;
            printf("Berhasil simpan NODE akhir!");
        }
    }
}

void sembarang()
{
    //isi data sembarang
    struct node* ptr, *temp;
    int item, loc, i;
    ptr = (struct node *)malloc(sizeof(struct node));

    if (ptr==NULL)
    {
        printf("OVERFLOW");
    }
    else
    {
        printf("Masukkan data: ");
        scanf("%d", &item);
        ptr ->data = item;
        printf("Mau simpan di lokasi berapa?");
        scanf("%d", &loc);
        temp = head;
        for(i=0; i<loc; i++)
        {
            temp = temp->next;
            if(temp==NULL)
            {
                printf ("Tidak bisa simpan datamu!");
                return;
            }
        }
        ptr->next = temp->next;
        temp->next = ptr;
        printf("NODE berhasil disimpan!\n");
    }
}

void cetak()
{
    //isi data yang di cetak
    struct node *ptr;
    int item, i=0, flag;
    ptr = head;
    if(ptr == NULL)
    {
        printf("Listnya kosong bossskuhhh");
    }
    else
    {
        pritnf("Cetak isi list...");
        while(ptr !=NULL)
        {
            pritnf ("\n%d", ptr ->data);
            ptr = ptr -> next;
        }
        printf("\n\n");
    }
}

int main ()
{
    int pilihan = 0;
    while(pilihan !=5);
    {
        printf("****** Menu Latihan Linked List******");
        printf("\n=====================================");
        printf("\n1. Input data di awal \n2. Input data di akhir \n3. Input data sembbarang \n4. Lihat data dalam llinked LIst \n5.KELUAR");
        printf("Pilihanmu: ");
        scanf("%d", &pilihan);

        switch(pilihan)
        {
        case 1:
            awal();
            break;
        case 2:
            akhir();
            break;
        case 3:
            sembarang();
            break;
        case 4:
            cetak();
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("Masukkan pilihan yang benar");
        }
    }
}
