#include <stdio.h>
#include <stdlib.h>

/*void main(){
    char nama [32];
    printf("Masukkan : ");
    scanf("%s", &nama);
    printf("\n%s", nama);
}*/

/*#include<stdio.h>

int main()
{
    int i, space, rows, star=0;
    printf("Enter the number of rows\n");
    scanf("%d",&rows);

    // printing one row in every iteration //
    for(i = 0; i < rows-1; i++)
    {
        // Printing spaces //
        for(space = 1; space < rows-i; space++) {
            printf(" ");
        }
        // Printing stars //
        for (star = 0; star <= 2*i; star++) {
            if(star==0 || star==2*i)
                printf("-");
            else
                printf(" ");
        }
        // move to next row //
        printf("\n");
    }
    // print last row //
    for(i = 0; i < rows-1; i++)
    {
        // Printing spaces //
        for(space = 1; space < rows-i; space++) {
            printf(" ");
        }
        // Printing stars //
        for (star = 0; star <= 2*i; star++) {
            if(star==0 || star==2*i)
                printf("-");
            else
                printf(" ");
        }
        return 0;
    for(i=0; i<2*rows-1; i++){
        printf("-");
    }
    }
}*/

#include<stdio.h>

int main() {
    int i, space, rows=7, star=0;

    // Printing upper triangle //
    for(i = 1; i <= rows; i++) {
        // Printing spaces //
        for(space = 1; space <= rows-i; space++) {
           printf(" ");
        }
        // Printing stars //
        while(star != (2*i - 1)) {
         if(star == 0 or star==2*i-2)
            printf("*");
            else
                printf(" ");
            star++;
        }
        star=0;
        // move to next row //
        printf("\n");
    }
    rows--;
    // Printing lower triangle //
    for(i = rows;i >= 1; i--) {
        /* Printing spaces */
        for(space = 0; space <= rows-i; space++) {
           printf(" ");
        }
        // Printing stars //
        star = 0;
        while(star != (2*i - 1)) {
         if(star == 0 or star==2*i-2)
                printf("*");
            else
                printf(" ");
            star++;
        }
        printf("\n");
    }

    return 0;
}
