#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node * next;
};

void clinkedlisttraversal(struct node * head){
struct node * ptr = head;
do{
    printf("Element : %d\n",ptr->data);
    ptr = ptr->next;
}while(ptr != head);

}

struct node * insertatfirst(struct node * head,int data){
struct node * ptr = (struct node *)malloc(sizeof(struct node));
ptr->data = data;
struct node * p = head->next;
while(p->next != head){
    p=p->next;
}
p->next = ptr;
ptr->next = head;
head = ptr;
return head;
}
int main (){
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
fourth->next = head;

clinkedlisttraversal(head);
printf("\n");
head = insertatfirst(head,1);
clinkedlisttraversal(head);

    return 0;}
}
