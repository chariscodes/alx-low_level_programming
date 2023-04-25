#include <stdio.h>

int main() {
    int a = 0, b = 1, c, n, i;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 1; i <= n; ++i) {
        printf("%d, ", a);
        if (i == 1) {
            continue;
        }
        else if (i == 2) {
            c = 1;
        }
        else {
            c = a + b;
            a = b;
            b = c;
        }
    }

    return 0;
}

