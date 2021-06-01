#include <stdio.h>
#define N 10
// INTERSECTION using 連結リスト data structure

struct cell
{
   int node;
   struct cell *next;
}NODE, *Nodep;

void intersection(struct cell A, struct cell B, struct cell C){
   struct cell *q;
   struct cell *c;

   // printf("");

   while (q != NULL){
      struct cell *r;
      while (r != NULL){
         c->node = q->node * r->node;
         r = r->next;
         c = c->next;
      }
      q = q->next;
   }



   return;
}


int main (int argc, char *argv[]) {
   return 0;
}