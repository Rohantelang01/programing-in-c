#include <stdio.h>
#include <string.h>
int main(){
    char string[] = "rohan";
    // strlen method
    printf("%d \n",strlen(string));
    printf("%d\n",sizeof(string));
    
    // concat method
    char str1[20] = "hello";
    char str2[] = "world";
    // Concatenate str2 to str1 (the result is stored in str1)
  strcat(str1, str2);
  
  // Print str1
  printf("%s \n", str1);
  //strcpy method
  char str3[] = " welcome to my world" ;
  char str4[20];/*str4[20]; when we are declare varibel in c size
  delcaretion is important other wise throw error */
  strcpy(str4,str3);
  printf("%s\n", str4);
  //strcmp method this method compaire 2 sting varaible 
  //when 2 string are similer than result 0 other wise random number
  char str5[] = "hello";
  char str6[] ="hello";
  char str7[] ="hi";
  printf("%d\n",strcmp(str5,str6));
  printf("%d\n", strcmp(str6,str7));
  return 0;

}
/*strlen:

strlen is a function from the <string.h> library that calculates the length of a string (the number of characters before the null terminator \0).
It returns an integer representing the length of the string.
In your code:

c
Copy code
printf("%d \n", strlen(string));
This will print the length of the string "rohan," which is 5 characters.

sizeof:

sizeof is an operator in C that returns the size in bytes of the variable or type.
When used with an array, it returns the total size occupied by the array in memory.
In your code:

c
Copy code
printf("%d\n", sizeof(string));
This will print the size of the string array, including the null terminator and any padding, which is platform-dependent. On many systems, it will be 6 because "rohan" plus the null terminator \0 requires 6 bytes.

So, in summary, strlen gives you the length of the string, while sizeof gives you the total size occupied by the array, which includes the string and the null terminator. That's why you see a difference in values between the two.

Null terminator, jo `\0` (backslash-zero) ke roop mein likha jaata hai, ek special character hai jo strings ko represent karta hai C programming mein. Ye character string ke end ko indicate karta hai.

Kuch important points null terminator ke baare mein:

1. **String Representation:**
   - Strings in C are represented as arrays of characters, where the last character is always `\0` to mark the end of the string.
   - For example, the string "Hello" is represented as {'H', 'e', 'l', 'l', 'o', '\0'}.

2. **`strlen` Function:**
   - `strlen` function calculates the length of a string by counting characters until it encounters the null terminator.
   - The length of the string "Hello" is 5, and `strlen("Hello")` will return 5.

3. **`sizeof` Operator:**
   - When used with a string, `sizeof` includes the null terminator in the size calculation.
   - For example, `sizeof("Hello")` might be 6 on many systems (5 characters + 1 null terminator).

4. **String Input:**
   - When reading strings using `scanf` or similar functions, the null terminator is automatically added by these functions.

Example illustrating the importance of the null terminator:
```c
#include <stdio.h>

int main() {
    char greeting[] = "Hello";
    printf("Length of string: %d\n", strlen(greeting));
    printf("Size of array: %d\n", sizeof(greeting));

    return 0;
}
```

In this example, `strlen` will give the length of the string "Hello" (5), and `sizeof` will give the size of the array (6).
*/

