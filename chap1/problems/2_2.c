#include <stdio.h>
#define N 100

struct cell
{
   int node;
   struct cell *next;
};

void preorder(int k, struct cell **S);

int main (int argc, char *argv[]) {
   // struct cell *S[N];
   int root;

   struct cell *S[N] = {1, 3, 6, NULL, NULL, NULL, 8, NULL, NULL, NULL};
   root = 0;
   // printf("*S :>> %p\n", S);

   printf("preorder = ");
   preorder(root, S);
   printf("\n");
   return 0;
}

void preorder(int k, struct cell **S)
{
   struct cell *q;

   printf("k :>> %d\n", k);
   q = S[k];
   while(q != NULL){
      preorder(q->node, S);
      q = q -> next;
   }
   return;
}