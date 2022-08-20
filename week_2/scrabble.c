#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)

{
       char word[]="abc";
        int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

    //    (c>='A' && c<='Z') ? printf("yes"): printf("no");

    // for (c = 'A'; c <= 'Z'; ++c)
    //     printf("%d\n", (c - 'A') +1);
 
    // variables declaration
    int i,sum_of_word=0,number;
    char upper;

    //loop over the given string
    for(i=0;i<strlen(word);i++)
    {
        //convert to uppercase
        upper =tolower(word[i]);
        // check and use for only alphabets
        if(upper>='a' && upper<='z')
        {
            //find the position of the number in the alphabet
           number = (upper - 'a') +1;
            //use position as index to find the number in points array and add to sum
           sum_of_word += POINTS[number-1];
        }
    }
    printf("%d",sum_of_word);
}