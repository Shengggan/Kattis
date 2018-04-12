/* Author: Sheng Kuang Hou
 * Date  : Apr 12, 2018
 * https://open.kattis.com/problems/hissingmicrophone
 * Easy
 */

#include <stdio.h>
#include <string.h>


int main(){

    char str[30];
    char substr[] = "ss";

    scanf("%s", str);

    if(strstr(str, substr) != NULL) {
        printf("hiss\n");
    } else {
        printf("no hiss\n");
    }

	return 0;
}

