#include<stdio.h>
#include<stdlib.h>
#include"header.h"

int main(){
    int x,y;
    int a=0;
    stack = new int[STACK_SIZE];
    for(int i = 0 ; i < 10 ; i++){
        append(i+1);
    }
    printStack();
    while(a != 4){
        printf("++++++Menu++++++\n1. Append\n2. Pop\n3. Insert\n4. Quit Program\n==>");
        scanf("%d",&a);
        if(a==1){
            printf("Append할 숫자를 입력: ");
            scanf("%d",&x);
            append(x);
            printStack();
        }
        else if(a==2){
            printf("Pop할 인덱스를 입력: ");
            scanf("%d",&x);
            int temp = pop(x);
            if(temp != -1){
                printf("Pop(%d) = %d\n",x,temp);
                printStack();
            }
        }
        else if(a==3){
            printf("Insert할 인덱스를 입력: ");
            scanf("%d",&x);
            printf("Insert할 값을 입력: ");
            scanf("%d",&y);
            if(insert(x, y) != -1){
                printStack();
            }
            else{
                printStack();
            }
        }
        else{
            printf("잘못된 입력\n");
        }
    }
    delete[]stack;
}
