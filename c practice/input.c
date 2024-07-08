#include <stdio.h>
#include <string.h>

int main()
{
  char string[20];
  int num;
  printf("Enter your number : ");
  scanf("%d", &num);
  printf("your number is : %d \n", num);
  printf("Enter your name: ");
  scanf("%s", string);
  /*Note: When working with strings in scanf(),
  you must specify the size of the string/array
   (we used a very high number, 30 in our example,
   but atleast then we are certain it will store enough
    characters for the first name), and you don't have to
    use the reference operator (&).*/

  printf("your name: %s\n", string);
  /*note :- when reading an integer (%d), you
  correctly use & before the variable (&num).
  and same like char float and dubble
  When reading a string (%s), you do not use &
   before the array name (string), as it
   represents the memory address of the array.
*/
  char fullname[30];
  printf("Enterr your full name :-");
  scanf("%s", fullname);
  printf("%s", fullname);
  /* in scanf when add  (whitespace, tabs, etc)
   as a terminating character, which means that
   it can only display a single word (even if you
    type many words). For example:
    type :- jhon due
    output :- jhon
    that whe when we get input string value we use fgets()*/
  // fgets() method
  char fullname2[30];
  printf("Enterr your full name \n:-");
  fgets(fullname2, sizeof(fullname2), stdin);
  printf("%s \n", fullname2);
  return 0;

