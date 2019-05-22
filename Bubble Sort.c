#include<stdio.h>
int main()
{
    int i ,j,n,temp;
    scanf("%d",&n);
    int A[n];
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    for(j=1;j<n;j++){
        for(i=0;i<n-j;i++){
            if(A[i]>A[i+1]){
                temp = A[i];
                A[i] = A[i+1];
                A[i+1] = temp;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d ",A[i]);
    }
}
