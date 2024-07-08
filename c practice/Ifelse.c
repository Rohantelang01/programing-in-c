#include <stdio.h>
#include <string.h>
int main(){
    char name[] = "Rohan";
    int i = 0;
    do{
    printf("%c\n",name[i]);
    i++;
    }
    while(i<strlen(name));

}
