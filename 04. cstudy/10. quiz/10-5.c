#include <stdio.h>

int isPrime(int n) {
    if (n <= 1)
        return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

void printPrimeNumbers(int num) {
    int count = 0, numPrime = 2;

    while (count < num) {
        if (isPrime(numPrime)) {
            printf("%d ", numPrime);
            count++;
        }
        numPrime++;
    }

    printf("\n");
}

int main() {
    printPrimeNumbers(10);

    return 0;
}
