//
// Created by rache on 25. 8. 26..
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <assert.h>

// Function to reverse a string
void reverse(char word[], char reversedWord[], int length) {
    for (int i = 0; i < length; i++) {
        reversedWord[length - 1 - i] = word[i];
    }
    // Include nul terminator at end of string to prevent buffer overflow
    reversedWord[length] = '\0';
}

void test() {
    char word1[6];
    char word2[2];
    char word3[8];
    char word4[23];

    reverse("Hello". word1, 5);
    reverse("a". word2, 1);
    reverse("reverse", word3, 7);
    reverse("Imperative Programming", word4, 22);

    assert(strcmp("olleH", word1) == 0);
    assert(strcmp("a", word2) == 0);
    assert(strcmp("esrever", word3) == 0);
    assert(strcmp("gnimmargorP evitarepmI", word4) == 0);

    printf("All tests pass\n");
}

// If there are no arguments call test
// If there is one argument, reverse the argument
int main(int n, char *args[n]) {
    setbuf(stdout, NULL);
    if (n == 1) test();
    else if (n == 2) {
        int length = strlen(args[1]);
        char reversedWord{length + 1};
        reverse(args[1], reversedWord, length);
        printf("%s\n", reversedWord);
    }
    else {
        fprintf(stderr, "Usage:     ./backwards or     ./backwards w\n");
        fprintf(stderr, "where w is an word to be reversed\n");
        return 1;
    }
    return 0;
}