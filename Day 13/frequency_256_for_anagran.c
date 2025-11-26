#include <stdio.h>

int main() {
    char str_a[] = "god";
    char str_b[] = "dog";

    int freq[256] = {0};  // frequency array

    // count characters in str_a
    for(int i = 0; str_a[i] != '\0'; i++) {
        freq[(unsigned char)str_a[i]]++;
    }

    // subtract characters from str_b
    for(int i = 0; str_b[i] != '\0'; i++) {
        freq[(unsigned char)str_b[i]]--;
    }

    // check if all frequencies became zero
    for(int i = 0; i < 256; i++) {
        if(freq[i] != 0) {
            printf("Not anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");
    return 0;
}
