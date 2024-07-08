#include <stdio.h>
int main(){
    int array[5] = { 3,5,6,6,6,};
   
    // sizeof method use for chake length of array
    printf("%lu \n",sizeof(array));
    // outpute 20 because the sizeof operator returns 
    //the size of a type in bytes.
    /** %lu format specifier is used for printing an unsigned long
      integer. It is commonly used with the sizeof operator when
     *  you want to print the size (in bytes) of a data type, 
     * variable, or array.  */
    int length = sizeof(array) / sizeof(array[0]);
    printf("%d \n",length);
    // output 5 
    int i;
    for (i = 0 ; i < length; i++){
        printf("%d \n",array[i]);
        // output 3,5,6,6,6,
        // in c this is right way to iterate array
    };

}