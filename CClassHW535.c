#include <stdio.h>

unsigned long long int fibonacci(unsigned int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    unsigned long long int prev2 = 0; // F(0)
    unsigned long long int prev1 = 1; // F(1)
    unsigned long long int current = 0;

    for (unsigned int i = 2; i <= n; i++) {
        current = prev1 + prev2;
        prev2 = prev1;
        prev1 = current;
    }

    return current;
}

int main() {
    unsigned int n;
    printf("Enter n: ");
    scanf("%u", &n);

    printf("Fibonacci(%u) = %llu\n\n", n, fibonacci(n));

    printf("--- Testing max Fibonacci on this system ---\n");
    unsigned long long int f0 = 0, f1 = 1, fn;
    unsigned int count = 1;

    while (1) {
        fn = f0 + f1;
        if (fn < f1) {
            printf("Largest index without overflow: n = %u\n", count);
            printf("Largest Fibonacci value: %llu\n", f1);
            break;
        }
        f0 = f1;
        f1 = fn;
        count++;
    }

    return 0;
}