/* Author: Sheng Kuang Hou
 * Date  : Jan 19, 2018
 * https://open.kattis.com/problems/bijele
 * Easy
 */


#include <stdio.h>
#include <stdlib.h>

int main() {

    int nrKings, nrQueens, nrRooks, nrBishops, nrKnights, nrPawns;
	scanf("%d %d %d %d %d %d", &nrKings, &nrQueens, &nrRooks, &nrBishops, 
       &nrKnights, &nrPawns);
       
	nrKings = 1 - nrKings;
	nrQueens = 1 - nrQueens;
	nrRooks = 2 - nrRooks;
	nrBishops = 2 - nrBishops;
	nrKnights = 2 - nrKnights;
	nrPawns = 8 - nrPawns;
	
	printf("%d %d %d %d %d %d", nrKings, nrQueens, nrRooks, nrBishops, 
        nrKnights, nrPawns);

	return 0;
}