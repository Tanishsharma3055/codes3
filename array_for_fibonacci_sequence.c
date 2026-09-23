#include <stdio.h>

int main() {
    int n;
    printf("Enter the number upto which you want the fibonnci series: ");
    scanf("%d",&n);
    int fib[n];
    
    for( int i=2;i<n;i++){
      fib[0]=0;
      fib[1]=1;
      fib[i]=fib[i-1]+fib[i-2];
    }

    for( int i=0;i<n;i++){
        printf("%d\t",fib[i]);
    }

    
    return 0;
}
