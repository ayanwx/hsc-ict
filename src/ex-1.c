#include <stdio.h>

// take 3 numbers as input from user and print their sum
int main() {
    int n1, n2, n3, sum;

    printf("input 1st number: ");
    scanf("%d", &n1);

    printf("input 2nd number: ");
    scanf("%d", &n2);

    printf("input 3rd number: ");
    scanf("%d", &n3);

    sum = n1 + n2 + n3;

    printf("\n%d + %d + %d = %d\n", n1, n2, n3, sum);
}