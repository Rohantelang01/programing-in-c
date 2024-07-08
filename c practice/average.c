#include <stdio.h>
int main(){
    float avg,total = 0;
    int ages[] = {48,86,45,75,85,56,45};
    int length = sizeof(ages) / sizeof(ages[0]);
    for(int i =0 ; i < length ; i++){
        total += ages[i];
    };
    avg = total / length;
    printf("Avarage is : %f", avg);
    }
