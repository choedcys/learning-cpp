#define STACK_SIZE 10

int *stack;
int top = -1;
int size = 1;

void printStack();



bool isEmpty();
bool isFull();
int insert(int pos, int value);
int pop(int index);
void append(int item);
