
#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node * next;
};

void linkedlisttraversal(struct node* ptr){
while(ptr != NULL){
    printf("Element : %d\n",ptr->data);
    ptr = ptr->next;
}

}

struct node * insertionatfirst(struct node * head,int data){
struct node * ptr = (struct node *)malloc(sizeof(struct node));
ptr->next = head;
ptr->data = data;
return ptr;
};

struct node * insertatindex(struct node * head,int data,int index){
struct node * ptr = (struct node *)malloc(sizeof(struct node));
struct node * p = head;
int i=0;
while(i != index-1){
    p = p->next;
    i++;
}
ptr->next = p->next;
    p-> next = ptr;
    ptr->data = data;
    return head;
}

struct node * insertatend(struct node * head,int data){
struct node * ptr = (struct node *)malloc(sizeof(struct node));
ptr->data = data;
struct node * p = head;
while(p->next != NULL){
    p = p->next;
}
p->next = ptr;
ptr->next = NULL;
return head;


};

struct node * insertafternode(struct node * head,struct node * prevnode,int data){
struct node * ptr=(struct node *)malloc(sizeof(struct node));
ptr->data = data;
ptr->next = prevnode->next;
prevnode->next = ptr;
return head;

};



int main(){
struct node * head;
struct node * second;
struct node * third;
struct node * fourth;

//Allocate memory for nodes in heap
head = (struct node *)malloc(sizeof(struct node));
second = (struct node *)malloc(sizeof(struct node));
third = (struct node *)malloc(sizeof(struct node));
fourth = (struct node *)malloc(sizeof(struct node));

// Link first and second node
head->data = 7;
head->next = second;

//Link second and third node
second->data = 18;
second->next = third;

//Link third and fourth node
third->data = 41;
third->next = fourth;

// Terminate the list at the fourth node
fourth->data = 66;
fourth->next = NULL;

linkedlisttraversal(head);
printf("\n\n");
 // head = insertionatfirst(head,56);
printf("\n\n");
 // head = insertatindex(head,99,2);
 printf("\n\n");
 // head = insertatend(head,12);
 printf("\n\n");
 head = insertafternode(head,third,78);
linkedlisttraversal(head);

return 0;
}
