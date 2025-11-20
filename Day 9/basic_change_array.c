#include <stdio.h>

void changeArray(int *p) {
    p[0] = 999;   // change first element
}

int main() {
    int arr[3] = {10, 20, 30};

    changeArray(arr);

    printf("%d", arr[1]);   // Output: 999
}
