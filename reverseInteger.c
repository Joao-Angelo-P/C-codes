#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>


int reverse(int x){
    bool negavite = false;
    int rev = 0;

    if (x < INT32_MIN + 1) {
        return 0;
    }

    if (x > INT32_MAX - 1) return 0;

    if (x < 0){
        x *= -1;
        negavite = true;
    }

    while(x){
        int aux = x % 10;
        //if (rev * 10 - aux > INT32_MAX) return 0; // silent integer overflow
        if (rev > (INT32_MAX - aux)/10) return 0;
        //printf("%d", rev);
        rev = (rev * 10) + aux;
        x /= 10;
    }

    if (negavite){
        return rev * -1;
    }else{
        return rev;
    }

}
