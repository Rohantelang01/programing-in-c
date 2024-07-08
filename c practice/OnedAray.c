#include <stdio.h>
int main()
{
    int array[] = {25, 45, 33, 45, 34};
    printf("%d \n", array[3]);
    // output 45
    array[3] = 4;
    printf("%d \n", array[3]);
    //output 4\
    // array evulate by useing for loop
    for (int i = 0; i < 5; i++)
    {
        printf("%d \n", array[i]);
    };
    // output 45 25,45,33,45,34
    printf("array 2 data \n");

    int array2[6];
    array2[0] = 4;
    array2[1] = 3;
    array2[2] = 5;
    array2[3] = 4;
    array2[5] = 5;
    printf("%d \n", array2[5]);
    // output 5
    printf("%d \n", array2[6]);
    // output 25
    printf("%d \n", array2[3]);
    // output 4
    printf("%d \n", array2[4]);
    // output 2003337837
}