#include <stdlib.h>

void rand_string(char *str, size_t size) {
    const char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    
    for (size_t i = 0; i < size; i++) {
        int key = rand() % (int)(sizeof(letters) - 1);
        str[i] = letters[key];
    }

    str[size] = '\0';  // marks the end of the word
}