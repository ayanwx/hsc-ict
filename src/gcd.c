#include <stdio.h>

/*
    algorithm to determine Greatest Common Divisor (GCD) of 2 numbers:

    1) start
    2) input a, b
    3) (a < b)
        1) yes: GCD = a, goto step 4
        2) no : GCD = b
    4) (a % GCD == 0) AND (b % GCD == 0)
        1) yes: print GCD, goto step 5
        2) no : GCD = GCD - 1, repeat step 4
    5) end
*/

int main() {
    int a, b, gcd;

    printf("input a, b: ");
    scanf("%d, %d", &a, &b);

    if (a < b) {
        gcd = a;
    } else {
        gcd = b;
    }

    for (int i = 0; i < b; i++) {

        if (a % gcd == 0 && b % gcd == 0) {
            printf("GCD: %d\n", gcd);
            break;
        } else {
            gcd--;
        }
        
    }
    
    return 0;
}