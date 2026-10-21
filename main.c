#include <stdio.h>

int main(void) {
    int n;
    double result;

    scanf("%d", &n);
    result = n * 1.08;
    printf("%d\n", (int)result);

    return 0;
}