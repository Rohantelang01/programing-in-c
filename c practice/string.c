#include <stdio.h>
int main(){
    char string[] = "hello world";
    printf("%s \n", string);
    // another way to create string

char string2[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'}; 
printf("%s", string2);
// sring spacial charector
char txt[] = "We are rh so-called \"Vikings\" ";
char txt2[] = "it's my \\fualt";
printf("%s\n", txt);
printf("%s\n", txt2);

}

