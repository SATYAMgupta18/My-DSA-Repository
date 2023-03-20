#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node * next;
};

 void linkedlisttraversal(struct node * ptr){
    while(ptr != NULL){
        printf("Element : %d\n",ptr->data);
        ptr = ptr->next;
    }
}

struct node * deleteatfirst(struct node * head){
    struct node * ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

 struct node * deleteatindex(struct node * head,int index){
     struct node * p = head;
     int i=0;
     while(i != index-1){
         p = p->next;
         i++;
     }
     struct node * q = p->next;
     p->next = q->next;
     free(q);
     return head;
 }

 struct node * deleteatlast(struct node * head){
     struct node * p = head;
     struct node * q = head->next;
     while(q->next != NULL){
         p = p->next;
         q = q->next;
     }
     p->next = NULL;
     free(q);
     return head;
 }

 struct node * deletebyvalue(struct node * head,int value){
     struct node * p = head;
     struct node * q = head->next;
     while(q->data != value && q->next != NULL){
         p=p->next;
         q=q->next;
     }
     if(q->data == value){
         p->next = q->next;
         free(q);   }
         return head;

 }
int main(){
    struct node * head;
    struct node * second;
    struct node * third;
    struct node * fourth;

    head = (struct node *)malloc(sizeof(struct node));
     second = (struct node *)malloc(sizeof(struct node));
    third= (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

     head->data = 1;
     head->next = second;

     second->data = 6;
     second->next = third;

     third->data = 10;
     third->next = fourth;

     fourth->data = 76;
     fourth->next = NULL;


     linkedlisttraversal(head);
       printf("\n\n\n");
     /* head = deleteatfirst(head);
     linkedlisttraversal(head); */

    /* head = deleteatindex(head,2);
     linkedlisttraversal(head); */

     /* head = deleteatlast(head);
     linkedlisttraversal(head); */

     head = deletebyvalue(head,6);
     linkedlisttraversal(head);

}
