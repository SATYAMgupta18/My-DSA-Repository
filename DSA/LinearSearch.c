#include<stdio.h>
int searchindex(int arr[],int size,int element){
for(int i=0;i<size;i++){
    if(arr[i] == element){return i;}
}
return -1;
}
int main(){
int arr[] = {1,3,99,10,8,4,67,89};
int element = 4;
int size = sizeof(arr)/sizeof(int) ;
int index = searchindex(arr,size,element);
printf("The element %d is found at index %d",element,index);
return 0;
}
