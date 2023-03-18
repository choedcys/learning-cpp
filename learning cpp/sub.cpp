#include<stdio.h>
#include"header.h"

bool isEmpty(){
    if(top == -1)
        return 1;
    else
        return 0;
}
bool isFull(){
    if(top % STACK_SIZE == 9)
        return 1;
    else
        return 0;
}
int insert(int pos, int value){
    int *temp;
    if(pos > top){
        printf("Cannot execute pop because index exceed STACK RANGE\n");
        return -1;
    }
    else if(isFull()){
        printf("Full STACK\n");
        temp = new int[STACK_SIZE*size];

        for(int i = 0 ; i < (top + 1) ; i++)
            temp[i] = stack[i];
        stack = new int[STACK_SIZE*(size+1)];

        for(int i = 0 ; i < pos ; i++)
            stack[i] = temp[i];
        stack[pos] = value;
        for(int i = pos+1 ; i < top+2 ; i++)
            stack[i] = temp[i-1];

        size++;
        top++;
        printf("Insert Completed!\n");
        delete [] temp;
        return 1;
    }
    else{
        printf("Enough Space\n");
        temp = new int[top-pos];
        for(int i = pos ; i < top+1 ; i++){
            temp[i-pos] = stack[i];
        }
        stack[pos] = value;
        for(int i = pos+1 ; i < top+2 ; i++){
            stack[i] = temp[i-pos-1];
        }
        top++;
        printf("Insert Completed!\n");
        delete []temp;
        return 1;
    }
}

int pop(int index){
    int val;
    if(isEmpty()){
        printf("Cannot execute pop becaseof Empty STACK\n");
        return -1;
    }
    else if(top < index){
        printf("Cannot execute pop because index exceed STACK RANGE\n");
        return -1;
    }
    else{
        val = stack[index];
        for(int i = index ; i < top+1 ; i++){
            stack[i] = stack[i+1];
        }
        if(top%10 == 0){
            size--;
            int *temp = new int[STACK_SIZE*(size)];
            for(int i = 0 ; i < top ; i++){
                temp[i] = stack[i];
            }
            stack = new int[STACK_SIZE*(size)];
            for(int i = 0 ; i < top ; i++){
                stack[i] = temp[i];
            }
            delete []temp;
        }
        top--;
        return val;
    }
}

void append(int item){
    int *temp;

    if(isFull()){
        printf("Full STACK\n");
        temp = new int[(STACK_SIZE*size)];

        for(int i = 0 ; i < (top + 1) ; i++)
            temp[i] = stack[i];
        stack = new int[(STACK_SIZE*(size+1))];

        for(int i = 0 ; i < (top + 1) ; i++)
            stack[i] = temp[i];
        stack[++top] = item;

        size++;
        delete[]temp;
    }
    else
        stack[++top] = item;
}
void printStack(){
    printf("현재 스택 상태: ");
    for(int i = 0 ; i < top+1 ; i++){
        printf("%d ",stack[i]);
    }
    printf("\n 스택의 크기: %d",STACK_SIZE*size);
    printf("\n\n");
}
