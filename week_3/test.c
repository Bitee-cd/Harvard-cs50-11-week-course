#include <stdio.h>
int main(void){
    int number ;
    int array[7] = {2,4,5,2,4,2,2};

    int min =2;
    for (int i = 0;i<7;i++)
    {
        if (array[i] != min)
        {
            number = array[i];
            break;
        }
        
    }
    printf("%i \n",number);
for (int i = 0;i<7;i++)
    {
    if ((array[i] != min) )
    {

      if(array[i] != number)
        {
        printf("number not correct\n");
        printf("%i",array[i]);
        break;
        }
        
    }
    }
    return 0;
}