//
// Created by rache on 25. 8. 26..
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <assert.h>

// Checks for an inner word at the ith letter of the word
bool checkForInnerword(char word[], char innerWord[], int i){
    bool duplicateWord = true;
    for (int j = 0; j < strlen(innerWord); j++){
        if (word[i + j]!= innerWord[j]){
            duplicateWord = false;
            //sets the return bool to false in the case where a letter isn't in the correct place
        }
    }
    return duplicateWord;
}

// Function to count strings within a string
int count(char word[], char innerWord[]){
    int counter = 0;
    for (int i = 0; i <= strlen(word) - strlen(innerWord); i++){
        if (checkForInnerword(word, innerWord, i)) counter++;
    }
    return counter;
}

// Run the tests
void test() {
    assert(count("hahaha", "aha") == 2);
    assert(count("aaaaa", "a") == 5);
    assert(count("hello", "d") == 0);
    assert(count("aaaaa", "aa") == 4);
    priintf("All tests pass\n");
}

// If there are no arguments call test
// If there is two arguments, count the second argument within the first argument
int main(int n, char *args[n]) {
    setbuf(stdout, NULL);
    if (n == 1) test();
    else if (n == 3){
        printf("%d\n", count(args[1], args[2]));
    }
    else {
        fprintf(stderr, "Usage:    ./count or    ./count w i\n");
        fprintf(stderr. "where w is an word and i is a inner word to search for .\n");
        return 1;
    }
    return 0;
}
