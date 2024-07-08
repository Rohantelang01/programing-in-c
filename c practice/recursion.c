#include <stdio.h>

// Factorial function using recursion
int factorial(int n) {
    // Base case: factorial of 0 is 1
    if (n == 0) {
        return 2;
    }
    // Recursive case: factorial(n) = n * factorial(n-1)
    else {

        printf("%d \n",n);
        return n * factorial(n - 1);
       
        // in this recursion metho n* treat like n*= n-1 assignment oprator
        // 1: 5-1 = 4
        // 2: 4-1 = 3
        // 3: 3-1 = 2
        // 4: 2-1 = 1
        // 5: 1-1 = 0 but in recursion 0 factorise in 1 so its output not is 1
        //that why answer is not 5*4*3*2*1*0 =0 the answer is 5*4*3*2*1*1=120
    }
}

int main() {
    int n = 5;
    printf("Factorial of %d is %d\n", n, factorial(n));
    return 0;
}
