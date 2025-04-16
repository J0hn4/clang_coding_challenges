#include <stdio.h>
#include <string.h>
#define MAX_LIMIT 20
int main()
{
   char str[MAX_LIMIT];
   fgets(str, MAX_LIMIT, stdin);
   size_t len = strlen(str)-1;
   char reverse[len];

   for (int i = len; i >= 0; i--) {
     printf("%c",str[i]);
  }

   printf("\n");

   return 0;
}
