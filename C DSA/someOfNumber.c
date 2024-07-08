#include <stdio.h>

int sumOfDigits(int number) {
    int sum = 0;
    while (number != 0) {
        sum += number % 10;
        printf("this is  first %d\n",number);
        printf("this is  sum  %d\n",sum);
        number /= 10;
        printf("this is  secund %d\n",number);
    }
    return sum;
}

int main() {
    int input;
    printf("Enter a number: ");
    scanf("%d", &input);

    int result = sumOfDigits(input);
    printf("The sum of digits of %d is %d.\n", input, result);

    return 0;
}
