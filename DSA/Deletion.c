#include<stdio.h>
void display(int arr[],int size){
for(int i=0;i<size;i++){
    printf("%d",arr[i]);
}
}
int indexdeletion(int arr[],int size,int index){
if(index>=size){
        return -1; }
for(int i=index;i<size-1;i++){
    arr[i]=arr[i+1];
}
return 1;
}
int main(){
int arr[100]={1,2,4,5,6};
int size=5,index=2,capacity=100;
display(arr,size);
printf("\n");
indexdeletion(arr,size,index);
size -= 1;
display(arr,size);
return 0;
}
