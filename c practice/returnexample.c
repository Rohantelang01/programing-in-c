#include <stdio.h>

float function(float f_value){
    return 5.0/9.0*f_value -32.0;
}
int main(){
    float f_value = 98.69;
    float result = function(f_value);
    printf("fahrenheit is :%.2f\n",f_value);
    printf("celcius is : %2.f\n", result);
    return 0 ;
}