/*
A pointer is a variable that stores the memory address of another variable as its value.

A pointer variable points to a data type (like int) of the same type, and is created with the * operator.

The address of the variable you are working with is assigned to the pointer:*/

#include <stdio.h>
int main(){
int age = 58;
int* ptr  = &age;
int* ptr2 = &age;// A poimter variable with the naem ptr, type store tje address of age
// output the value of age (58)
printf("%d\n", age);
printf("%p\n", &age);
printf("%p\n",ptr2);
printf("%p\n",ptr2);
/*Dereference
In the example above, we used the pointer variable to get the memory address of a variable (used together with the & reference operator).

You can also get the value of the variable the pointer points to, by using the * operator (the dereference operator):
*/
 printf("%d\n", *ptr);
  
return 0;
}

/*
Note that the * sign can be confusing here, as it does two different things in our code:

When used in declaration (int* ptr), it creates a pointer variable.
When not used in declaration, it act as a dereference operator.
Good To Know: There are two ways to declare pointer variables in C:

int* myNum;
int *myNum;
Notes on Pointers

Pointers are one of the things that make C stand out from other programming languages, like Python and Java.

They are important in C, because they allow us to manipulate the data in the computer's memory. This can reduce the code and improve the performance. If you are familiar with data structures like lists, trees and graphs, you should know that pointers are especially useful for implementing those. And sometimes you even have to use pointers, for example when working with files.

But be careful; pointers must be handled with care, since it is possible to damage data stored in other memory addresses.

*/