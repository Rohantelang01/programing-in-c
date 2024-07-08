#include <stdio.h>
int main(){
    int ages[] = {
        34,56,25,74,83,24,643,32,10
    };
    int lowestage = ages[0];
    int length = sizeof(ages) / sizeof(ages[0]);
    for(int i = 0 ; i > length ; i++){
        if(lowestage < ages[i]){
           lowestage = ages[i];
        };
       
    };
    printf("lowest age : %d", lowestage);
}