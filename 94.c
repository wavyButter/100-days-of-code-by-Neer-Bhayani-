#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char sentence[] = "Hello Kurnool, welcome to programming in C";
    char *token;
    char longest[100] = "";
    int maxLength = 0;
    
    // Get the first token
    token = strtok(sentence, " ");

    while (token != NULL) {
        int len = strlen(token);
        if (len > maxLength) {
            maxLength = len;
            strcpy(longest, token);
        }
        token = strtok(NULL, " ");
    }

    printf("Longest word: %s\n", longest);
    return 0;
}
