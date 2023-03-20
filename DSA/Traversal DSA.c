#include<stdio.h>
void display(int arr[],int n){
for(i=0,i<n,i++){
printf("%d",arr[i]);
}
}
int main(){
int arr[100]={1,2,3,4};
display(arr,4);
return 0;
}
