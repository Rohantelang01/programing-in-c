#include <stdio.h>
#include <stdio.h>
//The void keyword, used in the previous examples, indicates that the function should not return a value. If you want the function to return a value, you can use a data type (such as int or float, etc.) instead of void, and use the return keyword inside the function:
int mynumber(int x,int y, int z){
    return x + y * z;
};
int main(){
    printf("%d\n",mynumber(4,4,4));
    return 0;
}