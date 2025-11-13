#include <stdio.h>

int main() {
    int a[] = {1, 2, 1, 2,2};
    int n = 5;
    int visited[4] = {0};  // to mark already counted elements

    for (int i = 0; i < n; i++) {
        if (visited[i] == 1)
            continue;  // skip if already counted

        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                count++;
                visited[j] = 1; // mark as counted
            }
        }

        printf("Number %d occurs %d times\n", a[i], count);
    }

    return 0;
}
