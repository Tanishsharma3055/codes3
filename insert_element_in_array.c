#include <stdio.h>

int main() {

    int n,num;
    int arr[6]={1,2,3,4,5};
    printf("Enter the number: ");
    scanf("%d",&num);
     printf("Enter the place: ");
    scanf("%d",&n);

    for(int i=5;i>=n;i--){
       arr[i]=arr[i-1];
    }

    arr[n-1]=num;

    for( int i=0;i<6;i++) {
        printf("%d\t",arr[i]);
    }
    
    return 0;
}
