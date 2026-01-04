#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int x) {
    unsigned int rev = 0;
    int num = x;
    // int negative = false;
    if (x < 0 || !(x % 10) && x != 0){
        return false;
    };
    while (x){
        rev = rev * 10 + x % 10;
        x /= 10; 
    };

    return rev == num;
}
