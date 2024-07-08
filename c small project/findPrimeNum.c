#include <stdio.h>

int isPrime(int num){
 int i;
 int count = 0;
 if(num <= 1) return 0;
 for(i = 1; i <= num; i++){
    if(num % i == 0){
        count++;
        // printf("%d number of factor",count);
    }
 }
 if(count == 2){
    return 1;
 }
 else{
    return 0;
 }
}

int main(){
    int num;
    printf("Enter number\n");
    scanf("%d",&num);
    if(isPrime(num)){
        printf("%d it is prime number",num);
    }
    else{
        printf("%d its not a prime number", num);
    }
}