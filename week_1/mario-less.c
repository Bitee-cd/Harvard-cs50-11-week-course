#include <stdio.h>
void main()
{     
    //definition of integers
    int i,number,j,k,l,m;
    //idealy supposed to get integer from user using the get_int function of cs50
    number=4;
	
    //start loop for iterating the numbers for each line(row)
    for (i = 1; i <= number; i++) 
    {
        //loop for iterating the first empty spaces in a line
        for (j = number; j > i; j--)
            printf(" ");
        //loop for printing the first block of #
        for (k=1;k<=i;k++)
            printf("#");
        //loop for printing the middle divider spaces
        for (l=1;l<=2;l++)
            printf(" ");
        //loop for printing the next block of #    
        for(m=1;m<=i;m++)
            printf("#");
        // go to the next line
        printf("\n");
    }
}