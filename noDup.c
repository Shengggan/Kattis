/* Author: Sheng Kuang Hou
 * Date  : Jan 23, 2018
 * https://open.kattis.com/problems/nodup
 * Easy
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){

	char buf[80];
	char* words[40];
	int i = 0, wordCount = 0, j;

	fgets(buf,80,stdin);

	char *token = strtok(buf, " ");

	while(token != NULL) {
		words[i++] = token;
		wordCount++;
        token = strtok(NULL, " \n");
	}

	for (i = 0; i < wordCount; i++) {
		for (j = i+1; j < wordCount; j++) {
			if (strcmp(words[i],words[j]) == 0) {
				printf("no\n");
				exit(0);
			}
		}
	}

	printf("yes\n");

	return 0;

}
