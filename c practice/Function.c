#include <stdio.h>

void myfunction(){
    printf("it is work\n");
};
void myname(char name[],int age){
    printf("My name is %s\n and my age is %d\n",name,age);
};
void myloop(int mynumbers[],int lenght){
    
    int i;
    for(i = 0 ; i < lenght ; i++){
        printf("%d \n",mynumbers[i]);
    };
}
int main(){
    myfunction();
    myfunction();
    myname("rohan",54);
    myname("rakesh",56);
    /*Parameters and Arguments
Information can be passed to functions as a parameter. Parameters act as variables inside the function.

Parameters are specified after the function name, inside the parentheses. You can add as many parameters as you want, just separate them with a comma:
*/
// Loop using functtion
int mynumbers[] = {3,4,4,2,4};
int lenght = sizeof(mynumbers)/ sizeof(mynumbers[0]);
/*this length we can not declare inside function becauseProblem:
When passing an array to a function, using sizeof(array)/sizeof(array[0]) to 
determine the length inside the function doesn't work as expected. This is because
 the array parameter decays into a pointer, and sizeof gives the size of the pointer,
  not the original array.*/
myloop(mynumbers,lenght);

    return 0;
}