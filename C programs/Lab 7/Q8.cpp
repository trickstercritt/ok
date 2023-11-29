#include <stdio.h>
#include <string.h>

void reverseString(char *);

int main() {
    char str1[] = "To err is human...";
    char str2[] = "But to really mess things up...";
    char str3[] = "One needs to know C...";

    char *s[] = {str1, str2, str3};

    int i;

    for (i = 0; i < sizeof(s) / sizeof(s[0]); i++) {
        reverseString(s[i]);
        printf("Reversed String %d: %s\n", i + 1, s[i]);
    }

    return 0;
}

void reverseString(char *str) {
    int length = strlen(str);
    int start = 0;
    int end = length - 1;

    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}

