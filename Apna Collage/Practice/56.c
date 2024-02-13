#include <stdio.h>
#include <string.h>

typedef struct address{
    int house_no;
    int block;
    char city[20];
    char state[20];
}add;

int main(){
    char ch1[20], ch2[20];
    add s[5];
    for(int i=0; i<5; i++){
        printf("Enter the Adress %d: ", i+1);

        printf("\nHouse No.: ");
        scanf("%d", &s[i].house_no);

        printf("Block: ");
        scanf("%d", &s[i].block);

        printf("City: ");
        scanf("%s", &ch1[20]);
        strcpy(s[i].city, ch1);

        printf("state: ");
        scanf("%s", &ch2[20]);
        strcpy(s[i].state, ch2);

        printf("\n");
    }

    for (int i=0; i<5; i++){
        printf("\nAdress of House:");
        printf("\nHouse NO.: %d\nBlock: %d\nCity: %s\nState: %s", s[i].house_no, s[i].block, s[i].city, s[i].state);
    }
return 0;
}