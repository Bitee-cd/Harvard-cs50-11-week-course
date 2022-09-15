#include <stdio.h>
#include <stdlib.h>

int main (){

    // definition of array
    int array_[]={1,23,12,9,32,90,45};

    //definition of size of array
    int size = sizeof array_ / sizeof array_[0] ;

    //for loop to go through array
    for (int i = 0; i < size-1; i++)
    {
        // loop for second element
        for (int j=0; j < size - i - 1; j++)
        {
            // check if the element is greater than the next then swap
            if (array_[j] > array_[j+1])
            {
                int temp = array_[j];
                array_[j] = array_[j+1];
                array_[j+1]= temp;
            }
        }
    }

    //for loop to print sorted array
    for (int i = 0; i < size; i++ )
    {
        printf("%d\n", array_[i]);
    }
    return 0;
}