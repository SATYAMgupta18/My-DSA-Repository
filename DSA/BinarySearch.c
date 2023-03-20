#include<stdio.h>
int linearsearch(int arr[],int size,int element){
for(int i=0;i<size;i++){
    if(arr[i] == element){return i;}
}
return -1;
}

int binarysearch(int arr[],int size,int element){
int mid,high,low;
low = 0 ;
high = size-1 ;
while(low<=high){
    mid = (high+low)/2 ;
if(arr[mid] == element){
   return mid;}
   if(arr[mid]<element){
    low = mid+1;
   }
   else{
    high = mid-1;
   }
}
return -1;
}
int main(){
int arr[] = {1,3,5,10,28,54,67,89};
int element = 54;
int size = sizeof(arr)/sizeof(int) ;
int index = binarysearch(arr,size,element);
printf("The element %d is found at index %d",element,index);
return 0;
}
