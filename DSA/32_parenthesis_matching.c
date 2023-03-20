#include <stdio.h>
#include<stdlib.h>

struct stack{
    int top;
    int size;
    char *arr;
};
int isempty(struct stack *ptr){
    if(ptr->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
int isfull(struct stack *ptr){
    if(ptr->top==ptr->size-1){
        return 1;
    }
    else{
        return 0;
}
}
/* void push(struct stack* ptr, char val){
    if(isFull(ptr)){
        printf("Stack Overflow! Cannot push %d to the stack\n", val);
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
} */
void push(struct stack *ptr,char value){
    if(isfull(ptr)){
        printf("Stack Overflow");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=value;
    }
}
/* char pop(struct stack* ptr){
    if(isEmpty(ptr)){
        printf("Stack Underflow! Cannot pop from the stack\n");
        return -1;
    }
    else{
        char val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
} */
char pop(struct stack* ptr){
    if(isempty(ptr)){
        printf("Stack Underflow");
        return -1;
    }
    else{
        char value=ptr->arr[ptr->top];
        ptr->top--;
        return value;
    }
}
/* int parenthesisMatch(char * exp){
    // Create and initialize the stack
    struct stack* sp;
    sp->size = 100;
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));


    for (int i = 0; exp[i]!='\0'; i++)
    {
        if(exp[i]=='('){
            push(sp, '(');
        }
        else if(exp[i]==')'){
            if(isEmpty(sp)){
                return 0;
            }
            pop(sp);
        }
    }

    if(isEmpty(sp)){
        return 1;
    }
    else{
        return 0;
    }

} */
int parenthesismatching(char * a){
    struct stack *p;
    p=(struct stack *)malloc(sizeof(struct stack));
    p->size=100;
    p->top=-1;
    p->arr=(char *)malloc(p->size * sizeof(char));

    for(int i=0; a[i]!='\0'; i++){
        if(a[i]=='('){
            push(p,'(');
        }
        else if(a[i]==')'){
            if(isempty(p)){
                return 0;
        }
        pop(p);
    }
}
if(isempty(p)){ return 1; }
else{ return 0; }
}
int main() {
   char *a = "(3*7)+(7*3))";
   if(parenthesismatching(a)){
       printf("Parenthesis is Matching");
   }
   else{
       printf("Parenthesis is not Matching");
   }

    return 0;
}
