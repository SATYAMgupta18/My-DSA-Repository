#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct queue{
int size;
int f;
int r;
int *arr;
};
int isempty(struct queue *q){
if(q->r==q->f){ return 1; }
else{ return 0; }
}
int isfull(struct queue *q){
if(q->r == q->size-1){
    return 1;
}
else{ return 0; }
}
void enqueue(struct queue *q,int value){
if(isfull(q)){
    printf("Queue is full");
}
else{
    q->r++;
    q->arr[q->r]=value;
}
}
int dequeue(struct queue *q){
    if(isempty(q)){ printf("Queue is empty"); }
    else{ q->f++;
    return q->arr[q->f];
}
}
int main(){
struct queue q;
q.size=100;
q.f=q.r=-1;
q.arr=(int *)malloc(q.size*sizeof(int));
/* if(isempty(&q)){
    printf("Queue is empty");
} */
enqueue(&q,12);
enqueue(&q,99);
printf("Dequeuing value %d\n",dequeue(&q));
printf("Dequeuing value %d",dequeue(&q));
/* if(isempty(&q)){
    printf("Queue is empty");
} */
return 0;
}
