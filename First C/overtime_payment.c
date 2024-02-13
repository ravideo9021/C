#include<stdio.h>
int main(){
int w,o,p;
for(int i=0;i<10;i++)
{
    printf("worked hours %d",w);
    scanf("%d",&w);
    o=w-40;
    p=o*12;
    printf("total over payment=%d",p);
}




}