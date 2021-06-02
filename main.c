#include <stdio.h>
#include <stdlib.h>

#define SIZE 1000000

//Task 2----------------------------
typedef short bin;
int cursor = -1;
bin Stack[SIZE];

void push_Stack(bin n){
    Stack[++cursor]= n;
}

void pop_Stack(){
    while(cursor != -1){
        printf("%d ",Stack[cursor--]);
    }
}

void DecToBin(int number){
    while(number != 0){
       push_Stack(number%2);
       number /=2;
    }
    pop_Stack();
}

int main()
{
    int number;
    printf("Inprut decimal number: ");
    scanf("%d", &number);

    printf("Binary number is:      ");

    if(number == 0){
        printf("0");
    }
    if(number > SIZE){
        printf("Your number is very-very big!:)");
    }else{
        DecToBin(number);
    }
    printf("\n");

    return 0;
}

