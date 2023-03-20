#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stack{
int top;
int size;
char *array;
};

int isempty(struct stack *ptr){
if(ptr->top == -1){
    return 1; }
    else{
        return 0; }
}

int isfull(struct stack *ptr){
if(ptr->top == ptr->size-1){
    return 1; }
    else{
        return 0; }
    }

int stacktop(struct stack *ptr){
return ptr->array[ptr->top]; }

void push(struct stack *ptr,char value){
    if(isfull(ptr)){ printf("Stack Overflow"); }
    else{
        ptr->top++;
        ptr->array[ptr->top]=value;
    }
}

char pop(struct stack *ptr){
if(isempty(ptr)){ printf("Stack Underflow");
    return -1;
}
else{
    char value=ptr->array[ptr->top];
    ptr->top--;
    return value;
}
}

int precedence(char ch){
if(ch=='*'||ch=='/'){ return 3; }
else if(ch=='+'||ch=='-'){ return 2; }
else{ return 0; }
}

int isoperator(char ch){
if(ch=='+'||ch=='-'||ch=='*'||ch=='/'){ return 1; }
else{ return 0; }
}

char *infixtopostfix(char *infix){
struct stack *sp=(struct stack *)malloc(sizeof(struct stack));
sp->size=10;
sp->top=-1;
sp->array=(char *)malloc(sp->size * sizeof(char));
char *postfix=(char *)malloc((strlen(infix)+1) * sizeof(char));
int i=0;
int j=0;
while(infix[i]!='\0'){
    if(!isoperator(infix[i])){
        postfix[j]=infix[i];
        j++;
        i++;
    }
    else{
        if(precedence(infix[i])>precedence(stacktop(sp))){
            push(sp,infix[i]);
            i++;
        }
        else{
            postfix[j]=pop(sp);
            j++;
        }
    }
}
while(!isempty(sp)){
    postfix[j]=pop(sp);
    j++;
}

postfix[j]='\0';
return postfix;
}

int main(){
    char *infix="a*b";
    printf("Postfix is %s",infixtopostfix(infix));
    return 0;
}

