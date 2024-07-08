#include <stdio.h>
int main () {
    char fullName[40];
    printf("Enter your full name");
    fgets(fullName,sizeof(fullName),stdin);
    printf("your full Name%s",fullName);
    return 0;
}