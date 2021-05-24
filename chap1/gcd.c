#include <stdio.h>


int gcd(int a0, int a1);
int main (int argc, char *argv[]) {
   int a0, a1, temp;
   printf("a0:");
   scanf("%d", &a0);
   printf("\na1:");
   scanf("%d", &a1);

   printf("\ntemp :>> %d\n", gcd(a0, a1));
   return 0;
}


int gcd(int a0, int a1){
   int a, b, temp, tmp;

   if (a0 > a1){//make a1 the bigger int
   temp = a0;
   a0 = a1;
   a1 = temp;
   }
   a = a1; b = a0;
   
   while (b != 0)
   {
      tmp = a%b;
      a = b;
      b = tmp;
      printf("a :>> %d\n", a);
   }
   return a;
   
}
