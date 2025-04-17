#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n; //declare int named 'n'
    int sum = 0;


    scanf("%d",&n); //input int for size of array from stdin

    int *arr = (int*)malloc(n * sizeof(int)); //create a dynamic int array for variable amount of memory

    for (int i =0; i<n; i++) {
        scanf("%d ", &arr[i]);
        sum += arr[i];
    }

    printf("%d",sum);

    free(arr); //frees up memory after use
    return 0;
}
