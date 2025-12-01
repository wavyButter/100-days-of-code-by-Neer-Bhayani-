#include <stdio.h>
#include <string.h>

void reverse(char *begin, char *end) {
    char temp;
    while (begin < end) {
        temp = *begin;
        *begin++ = *end;
        *end-- = temp;
    }
}

void reverseWords(char *s) {
    char *word_begin = s;
    char *temp = s;

    while (*temp) {
        if (*temp == ' ') {
            reverse(word_begin, temp - 1);
            word_begin = temp + 1;
        }
        temp++;
    }
    reverse(word_begin, temp - 1);
}

int main() {
    char s[] = "Hello world from C programming";
    reverseWords(s);
    printf("%s\n", s);
    return 0;
}
