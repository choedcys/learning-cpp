
#include<stdio.h>
#include<stdlib.h>
#define STACK_SIZE 10
void printStack();

int *stack;
int top = -1;
int size = 1;

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

void insert(int pos, int value){
    int *temp;
    if(pos > top){
        printf("Cannot execute pop because index exceed STACK RANGE\n");
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
        free(temp);
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
        free(temp);
    }



}

int pop(int index){//사이즈도 줄여야함
    int val;
    if(isEmpty()){
        printf("Cannot execute pop becaseof Empty STACK\n");
        return -1;
    }
    else if(top < index+1){
        printf("Cannot execute pop because index exceed STACK RANGE\n");
        return -1;
    }
    else{
        val = stack[index];
        for(int i = index ; i < top+1 ; i++){
            stack[i] = stack[i+1];
        }
        top--;
        if(top%10 == 0){
            printf("실행됨");
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
        return val;
    }
}

void push(int item){
    int *temp;

    if(isFull()){
        printf("Full STACK\n");
        temp = (int*)malloc((STACK_SIZE*size)*sizeof(int));

        for(int i = 0 ; i < (top + 1) ; i++)
            temp[i] = stack[i];
        stack = (int*)malloc((STACK_SIZE*(size+1))*sizeof(int));

        for(int i = 0 ; i < (top + 1) ; i++)
            stack[i] = temp[i];
        stack[++top] = item;

        size++;
        free(temp);
    }
    else
        stack[++top] = item;
}

void printStack(){
    for(int i = 0 ; i < top+1 ; i++){
        if(i % 10 == 0)
            printf("\n");
        printf("%d ",stack[i]);
    }
    printf("\n\n");
}

int main(){
    int i;
    //stack = (int*)malloc(STACK_SIZE*sizeof(int));
    stack = new int[STACK_SIZE];
    for(i = 0 ; i < 14 ; i++)
        push(i+1);
    printStack();
    for(i = 0 ; i < 7 ; i++){
        printf("POP Data[%d] = %d >>>> %d\n",i+1,pop(i),size);
        printStack();
    }

    free(stack);

}










