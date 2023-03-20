#include <stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int *arr;
};

int isempty(struct stack *ptr){
    if(ptr->top == -1)
    return 1;
    else
    return 0;
}
int isfull(struct stack *ptr){
    if(ptr->top == ptr->size-1){
    return 1;
    }
    else{
    return 0;
}
}
void push(struct stack *ptr,int value){
    if(isfull(ptr)){
    printf("Stack Overflow");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = value;
    }

}
int pop(struct stack *ptr){
    if(isempty(ptr)){
        printf("Stack Underflow");
        return -1;
    }
    else{
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }

}

int peek(struct stack *sp,int i){
    int arrind = sp->top - i + 1 ;
    if(arrind < 0){
        printf("Position is not validate");
        return -1;
    }
    else{
        return sp->arr[arrind];
    }

}

int main(){
    struct stack *sp=(struct stack *)malloc(sizeof(struct stack));
    sp->top = -1;
    sp->size = 10;
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    printf("%d\n",isempty(sp));
     printf("%d\n",isfull(sp));
     push(sp,51);
     push(sp,52);
     push(sp,53);
     push(sp,54);
     push(sp,55);
     push(sp,56);
     push(sp,57);
     push(sp,58);
     push(sp,59);
     push(sp,60);
     printf("%d\n",isempty(sp));
     printf("%d\n",isfull(sp));

     printf("Popped %d from the stack\n",pop(sp));

      for(int j=0;j < sp->top+1;j++){
         printf("The value at index %d is %d\n",j,peek(sp,j));

    return 0;
}
