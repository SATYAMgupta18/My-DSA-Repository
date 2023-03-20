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

return 0;
}

