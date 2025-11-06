//same array are not 


#include <stdio.h>

int main() {
    int a[3] = {1, 2, 3};
    int b[3] = {3, 2, 1};
    int size = 3;
    int count = 0;

    for (int i = 0; i < size; i++) {
        int found = 0; // track if a[i] exists in b
        for (int j = 0; j < size; j++) {
            if (a[i] == b[j]) {
                found = 1; // match found
                break;
            }
        }
        if (found == 1) {
            count++; // a[i] is in b
        } else {
            break; // if any element missing, stop early
        }
    }

    if (count == size) {
        printf("Arrays have the same elements (any order).\n");
    } else {
        printf("Arrays do not have the same elements.\n");
    }

    return 0;
}




