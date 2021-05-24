
#include <stdio.h>
#include "../../first.c"
#define N 100
#define B 10000

enum yn {yes, no};

enum yn dpssum(int *a, int b, int n);

int main (int argc, char *argv[]) {
   enum yn ans;
   int a[N]={3,7,5,8,2}, b=11, n=5;
   ans = dpssum(a, b, n);
   printf("ans :>> %d\n", ans);
   return 0;
}

void print_arr_arr(int *A, int size0, int size1){
   for (size_t i = 0; i < size0; i++)
   {
      for (size_t j = 0; j < size1; j++)
      {
         printf("%d  ", A[i][j]);
      }
      printf("\n");
   }
   return;
}

enum yn dpssum(int *a, int b, int n)
{
   int y[N][B];
   int k, p;

   for (k=0; k<n; k++)for (p=0; p<=b; p++)
         y[k][p] = 0;
         y[0][0] = 1;
         if(a[0]<=b){
            y[0][a[0]] = 1;
         }

   print_arr_arr(y, 5, 12)
   
   for (p=0; p<= b; p++){
      if (y[k-1][p] == 1){
         y[k][p] = 1;
      }
      else if (p - a[k]>=0 && y[k-1][p-a[k] == 1]){
         y[k][p] = 1;
      }
      if (y[n-1][b]==1) {
      return(yes);
      }else{
         return(no);
      }
      
   }

}