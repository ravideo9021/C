#include<stdio.h>

void abc();
int *ptr;

int main()
{

   int i, *p = &i;
   abc();

   return 0;
}

void abc(){
    int i=0;
    ptr = &i;
    ptr++;
    *ptr= 3;
    printf("%d", i);
}
