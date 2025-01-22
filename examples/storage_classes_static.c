#include <stdio.h>

int main() {
        int x = 12;
        static int *intptr;
        static char ar[5] = "Fred";

       intptr = &x;

       printf("intptr = %d\nar[5] = %s\n", *intptr, ar);

       return 0;

}

