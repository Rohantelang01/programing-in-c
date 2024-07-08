#include <stdio.h>
#include <string.h>

int findVowels(char name[], char vowels[], int length) {
    for (int i = 0; i < strlen(name); i++) {
        for (int j = 0; j < length; j++) {
            if (name[i] == vowels[j]) {
                printf("%c \n", name[i]);
            }
        }
    }
    return 0;
}

void main(){
    char name[30];
    printf("Enter Your Name\n");
    scanf("%s", &name);
   char vowels[] = {'a','e','i','o','u','\0'};
   int length = sizeof(vowels);
   findVowels(name,vowels,length);
  
}
