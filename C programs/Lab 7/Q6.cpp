#include <stdio.h>
#include <string.h>

void replaceString(char *str[], int size, const char *str1, const char *str2);

int main() {
    char *str[] = {
        "We will teach you how to...",
        "Move a mountain",
        "Level a building",
        "Erase the past",
        "Make a million",
        "...all through C!"
    };

    int size = sizeof(str) / sizeof(str[0]);

    char str1[100];
    char str2[100];

    printf("Enter the string to be replaced: ");
    scanf("%99s", str1);  // Limit input to 99 characters to avoid buffer overflow

    printf("Enter the replacement string: ");
    scanf("%99s", str2);  // Limit input to 99 characters to avoid buffer overflow

    replaceString(str, size, str1, str2);

    // Print the modified strings
    for (int i = 0; i < size; i++) {
        printf("%s\n", str[i]);
    }

    return 0;
}

void replaceString(char *str[], int size, const char *str1, const char *str2) {
    for (int i = 0; i < size; i++) {
        char *found = strstr(str[i], str1);
        while (found) {
            size_t len1 = strlen(str1);
            size_t len2 = strlen(str2);

            // Check if the replacement exceeds the original length
            if (len2 > len1) {
                fprintf(stderr, "Error: Replacement string is longer than the original.\n");
                return;
            }

            // Replace str1 with str2 in the current string
            memmove(found + len2, found + len1, strlen(found + len1) + 1);
            memcpy(found, str2, len2);

            // Search for the next occurrence of str1 in the modified string
            found = strstr(found + len2, str1);
        }
    }
}

