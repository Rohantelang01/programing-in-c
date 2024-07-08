#include <stdio.h>
#include <stdlib.h> my na
#include <string.h>

int main() {
    char vowel[] = {'a', 'e', 'i', 'o', 'u'};
    char *input = NULL; // Declare input as a pointer
    size_t input_size = 0;

    // Read the input string
    printf("Enter a string: ");
    getline(&input, &input_size, stdin);

    char output[input_size]; // Size of output array matches input string size
    memset(output, 0, sizeof(output)); // Initialize output array with null characters

    // Iterate over each character in the input string
    for (size_t i = 0; i < input_size; i++) {
        // Check if the character is a vowel
        for (int j = 0; j < 5; j++) {
            if (input[i] == vowel[j]) {
                strncat(output, &input[i], 1); // Append vowel to output
                break; // Exit the inner loop once a vowel is found
            }
        }
    }

    printf("Vowels found in the input string: %s\n", output);

    // Free dynamically allocated memory
    free(input);

    return 0;
}

