#include <stdio.h>
#include "helpers.c"
#define N 100
#define B 10000


enum yn {yes, no};
int main (int argc, char *argv[]) {
   int y[N][B], b=11;
   int k, p=5, n;
   enum yn first = no;
   for (k=0; k<n; k++){
   for (p=0; p<=b; p++){
      y[k][p] = 0;
   }
   }
   print_arr_arr(y, n, b+1);
   printf("first :>> %d\n", first);
   return 0;
} 