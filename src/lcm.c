#include <stdio.h>

/*
    algorithm to determine Least Common Multiple (LCM) of 2 numbers:

    1) start
    2) input a, b
    3) (a > b)
        1) yes: LCM = a, goto step 4
        2) no : LCM = b
    4) (LCM % a == 0) AND (LCM % b == 0)
        1) yes: print LCM, goto step 5
        2) no : LCM = LCM - 1, repeat step 4
    5) end
*/

int main() {
    int a, b, LCM;

    printf("input a, b: ");
    scanf("%d, %d", &a, &b);

    if (a > b) {
        LCM = a;
    } else {
        LCM = b;
    }

    for (int i = 0; i < a; i++) {

        if (LCM % a == 0 && LCM % b == 0) {
            printf("LCM: %d\n", LCM);
            break;
        } else {
            LCM++;
        }
        
    }
    
    return 0;
}