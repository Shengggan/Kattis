/* Author: Sheng Kuang Hou
 * Date  : Jan 19, 2018
 * https://open.kattis.com/problems/dicegame
 * Easy
 */


#include <stdio.h>
#include <stdlib.h>

int main() {

    int g1, g2, g3, g4, gSum, e1, e2, e3, e4, eSum;
	scanf("%d %d %d %d", &g1, &g2, &g3, &g4);
	scanf("%d %d %d %d", &e1, &e2, &e3, &e4);

	gSum = g1+g2+g3+g4;
	eSum = e1+e2+e3+e4;

	if(gSum > eSum) {
        printf("Gunnar");
	} else if (eSum > gSum) {
        printf("Emma");
	} else{
        printf("Tie");
	}

	return 0;
}
