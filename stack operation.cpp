#include <stdio.h>
#define MAX_SIZE 10
int stack[MAX_SIZE], top = -1;
void push(int value)
 {
  if (top == MAX_SIZE - 1)
   {
    printf("Stack is full\n");
    return;
  }
  top++;
  stack[top] = value;
  printf("Pushed %d onto the stack\n", value);
}
void pop()
 {
  if (top == -1) 
  {
    printf("Stack is empty\n");
    return;
  }
  int value = stack[top];
  top--;
  printf("Popped %d from the stack\n", value);
}

void peek() 
{
  if (top == -1) 
  {
    printf("Stack is empty\n");
    return;
  }
  int value = stack[top];
  printf("Top element of the stack is %d\n", value);
}
int main() 
{
  push(1);
  push(2);
  push(3);
  peek();
  pop();
  peek();
  push(4);
  peek();
  return 0;
}