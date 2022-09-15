#include <stdio.h>
#include <stdlib.h>

int main()
{
    //definition of array
    int array_m[]={23,6,21,34,75,20,31,14};

    //definition of size of array
    int size = sizeof array_m/ sizeof array_m[0];

    //for loop to go through array
    for (int i = 0; i < size-1; i++)
    {
        int smallest = i;
        // loop through the inner array, find smallest and swap
        for (int j = i+1; j<size - i-1; j++)
        {
            if (array_m[j] < array_m[smallest])
            {
                smallest = j;
            }
        }
        int temp = array_m[smallest];
        array_m[smallest]= array_m[i];
        array_m[i]=temp;

    }

    //loop through sorted array and print out
    for(int i = 0; i < size; i++)
    {
        printf("%d\n",array_m[i]);
    }


    return 0;
}