#include <stdio.h>
#include "helpers.c"
#define N 100
#define B 10000

enum yn {yes, no};

enum yn dpssum(int *a, int b, int n);

int main (int argc, char *argv[]) {
   enum yn ans;
   int a[N]={3,7,5,8,2}, b=11, n=5;
   // int a[N] = {3, 7, 8, 12, 13, 18}, b = 27, n=6;
   ans = dpssum(a, b, n);
   printf("ans :>> %d\n", ans);
   return 0;
}

enum yn dpssum(int *a, int b, int n)
{
   int y[N][B];
   int k, p;

   for (k=0; k<n; k++){
      for (p=0; p<=b; p++){
         y[k][p] = 0;
      }
   }
   y[0][0] = 1;
   if(a[0]<=b){
      y[0][a[0]] = 1;
   }
   for (k=0; k<n; k++){
      printf("\n");
      for (p=0; p<= b; p++){
         if (y[k-1][p] == 1){
            y[k][p] = 1;
         }
         else if (p - a[k]>=0 && y[k-1][p-a[k]] == 1){
            y[k][p] = 1;
         }
      }
   print_arr_arr(y, n, b+1);
   }
   if (y[n-1][b]==1){
      printf("\nyes\n");
      return(yes);
   }else{
      return(no);
   }
}