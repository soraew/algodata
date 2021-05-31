#include <stdio.h>
#include "helpers.c"
#define N 100
#define B 10000


void print_arr_arr(int y[N][B], int size0, int size1){
   int i, j;
   for ( i = 0; i < size0; i++)
   {
      for ( j = 0; j < size1; j++)
      {
         printf("%d  ", y[i][j]);
      }
      printf("\n");
   }
return;
}

int ssum(int *a, int b, int n){
   int y[N][B];
}

int main (int argc, char *argv[]) {
   int n = 5, b = 11, *a={3, 7, 5, 8, 2};
   // print_arr_arr(y, n, b+1);
   printf("first :>> %d\n", first);
   return 0;
} 