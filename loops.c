#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main()
{
    int a, b;
    scanf("%d\n%d", &a, &b);

  	// Complete the code.
    char *str[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    for ( int i = a ; i <= b ; i++ ) {
        if (i > 0 && i < 10) {
            int indexint = i - 1;
            printf("%s\n", str[indexint]);
        }
        if (i > 9) {
            if ( i % 2 == 0) {
                printf("even\n");
            }
            else {
                printf("odd\n");
            }
        }
    }

    return 0;
}
