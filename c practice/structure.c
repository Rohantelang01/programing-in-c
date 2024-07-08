#include <stdio.h>

struct structer{
    char name[40];
    int age ;
    char branch[40];

};

int main (){

struct structer s1 = {"rohan",5,"cs"};
struct structer s2 = {"Rakesh",23};
struct structer s3;

s3.age = 45;
printf("%s  %d  %s \n",s1.name,s1.age,s1.branch);
printf("%s  %d \n",s2.name,s3.age);
return 0;
}