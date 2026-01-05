#include <stdio.h>
#include <stdbool.h>


bool isPowerOfTwo(int n) {
    // int(signed) -> 32 bit; max input is 2**31 - 1
    int resto;

    //if (n == 1) return true;

    if (n <= 0) return false;

    while (n > 1){
        resto = n % 2;
        if (resto) return false;
        n /= 2;
    }

    return true;
    
}
