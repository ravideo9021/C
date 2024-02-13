#include<stdio.h>
void hindi();
void english();

int main(){
    printf("Type h or e: ");
    char ch;
    scanf("%c", &ch);
    if(ch=='h'){
        hindi();
    }
    
    else if(ch=='e'){
        english();
    }
    else{
    printf("Mc bola tha na 'e' ya 'h' likh");
    }
    return 0;
}

void hindi(){
    printf("tum amir admi banega");
}
void english(){
    printf("You are going to be rich");
}

