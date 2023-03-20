#include<stdio.h>
void display(int arr[],int size){
for(int i=0;i<size;i++){
    printf("%d",arr[i]);
}
}
int indexinsertion(int arr[],int size,int capacity,int element,int index){
if(size>=capacity){
        return -1; }
for(int i=size-1;i>=index;i--){
    arr[i+1]=arr[i];
}
arr[index]=element;
return 1;
}
int main(){
int arr[100]={1,2,4,5,6};
int size=5,element=3,index=2,capacity=100;
display(arr,size);
printf("\n");
indexinsertion(arr,size,capacity,element,index);
size += 1;
display(arr,size);
return 0;
}
