

#include<stdio.h>
  #include<stdlib.h>
  struct stack{
  int size;
  int top;
  int *arr;
  };
  int isempty(struct stack *ptr){
  if(ptr->top == -1){
     return 1;
  }
  else{
    return 0;
  }
  }
  int isfull(struct stack *ptr){
  if(ptr->top == ptr->size - 1){
    return 1;
  }
  else{
    return 0;
  }

  }

 /* int push(struct stack *ptr,int val){
  if(isfull(ptr)){
    printf("Stack Overflow");
  }
  else{
    ptr->top++;
    ptr->top = val;
  }
  } */
  void push(struct stack* ptr, int val){
    if(isfull(ptr)){
        printf("Stack Overflow! Cannot push %d to the stack\n", val);
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

  int pop(struct stack *ptr){
  if(isempty(ptr)){
    printf("Stack underflow");
    return -1;
  }
  else{
    int val = ptr->arr[ptr->top];
    ptr->top--;
    return val;
  }

  }

  int main(){
  struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
  sp->size = 10;
  sp->top = -1;
  sp->arr = (int *)malloc(sp->size * sizeof(int));

  push(sp,61);
  push(sp,62);
  push(sp,63);
  push(sp,64);
  push(sp,65);
  push(sp,66);
  push(sp,67);
  push(sp,68);
  push(sp,69);
  push(sp,70);
  printf("%d\n",isempty(sp));
  printf("%d\n",isfull(sp));
  printf("\n");
   printf("Popped %d from the stack\n", pop(sp)); // --> Last in first out!
    printf("Popped %d from the stack\n", pop(sp)); // --> Last in first out!
    printf("Popped %d from the stack\n", pop(sp)); // --> Last in first out!

  return 0;

  }
