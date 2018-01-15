/* Author: Sheng Kuang Hou
 * Date  : Jan 15, 2018
 * https://open.kattis.com/problems/cold
 * Easy
 */
 
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, size;
    int count = 0;
    scanf("%d", &size);

    int *arr = malloc(size * sizeof(int));
    for(i=0; i<size; i++) {
        scanf("%d", &(arr[i]));
        if(arr[i] < 0) {
            count++;
        }
    }
    
    printf("%d", count);
    free(arr);
    
    return 0;
}
