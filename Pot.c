/* Author: Sheng Kuang Hou
 * Date  : March 25, 2018
 * https://open.kattis.com/problems/pot
 * Easy
 */

#include <stdio.h>
#include <stdlib.h>

int ipow(int base, int exp);

int main(){

    int n, a, pwrOf, base;
    int sum = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &a);

        base = a / 10;
        pwrOf = a % 10;
        sum += ipow(base, pwrOf);
    }

    printf("%d", sum);

    return 0;
}

int ipow(int base, int exp) {
    int result = 1;
    while (exp) {
        if (exp & 1) {
            result *= base;
        }
        exp >>= 1;
        base *= base;
    }

    return result;
}
