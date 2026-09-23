#include <stdio.h>

int main() {
    int arr[]={3,2,4,1,6,3,8,0,3};

    for(int i=0; i<9; i++){

         for(int j=i+1;j<9;j++){
            if(arr[i]>arr[j]){
               int temp=arr[i];
               arr[i]=arr[j];
               arr[j]=temp;
            }
         }

    }
   
    for( int i=0;i<9;i++){
    printf("%d\t",arr[i]);
    }
    return 0;
}
