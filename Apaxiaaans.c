/* Author: Sheng Kuang Hou
 * Date  : Jan 10, 2018
 * https://open.kattis.com/problems/apaxiaaans
 * Easy
 */


#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c[251];
    fgets(c,251,stdin);
    int len = strlen(c);
    for(int i = 0; i < len; i++){
        if(c[i] != c[i-1]){
            printf("%c", c[i]);
        }
    }

    return 0;
}
