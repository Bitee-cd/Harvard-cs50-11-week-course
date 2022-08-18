#include <stdio.h>
void main()
{     
    int i,number,j,k,l,m;
    number=8;
	  printf("The first 10 natural numbers are:\n");
    for (i = 0; i < number; i++) {
        for (j = 8; j > i; j--)
            printf(" ");
        for (k=1;k<=i;k++)
            printf("#");
        for (l=1;l<=2;l++)
            printf(" ");
        for(m=1;m<=i;m++)
            printf("#");
        printf("\n");
    }
}