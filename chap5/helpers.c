#include <stdio.h>
#define N 100
#define B 10000

void print_arr_arr(int A[N][B], int size0, int size1){
   int i, j;
   for ( i = 0; i < size0; i++)
   {
      for ( j = 0; j < size1; j++)
      {
         printf("%d  ", A[i][j]);
      }
      printf("\n");
   }
   return;
}