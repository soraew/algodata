#include <stdio.h>

void intersection(int *A, int *B, int *C){
   int size = sizeof(A);
   int i;
   for (i = 0; i<size; i++){
      C[i] = A[i]*B[1];
   }
   return;
}

int print_array(int *array, int n){
    int i;
    for (i=0; i<n; i++){
        printf("%d\n", array[i]);
    }
    return 0;
}

int main (int argc, char *argv[]) {
   int A[100]={1, 0, 0, 1, 1, 1}, B[100]={0, 0, 0, 1, 1, 1}, C[100];

   intersection(A, B, C);
   print_array(C, sizeof(C));
   return 0;
}