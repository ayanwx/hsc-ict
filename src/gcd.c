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
    int a, b, GCD;

    printf("input a, b: ");
    scanf("%d, %d", &a, &b);

    if (a < b) {
        GCD = a;
    } else {
        GCD = b;
    }

    for (int i = 0; i < b; i++) {

        if (a % GCD == 0 && b % GCD == 0) {
            printf("GCD: %d\n", GCD);
            break;
        } else {
            GCD--;
        }
        
    }
    
    return 0;
}