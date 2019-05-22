#include<stdio.h>
int main()
{
    int first,last,mid,x,flag=0,n;
    scanf("%d",&n);
    int i,A[n];
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    scanf("%d",&x);
    first = 0;
    last = n-1;
    while(first<last){
        mid = (first+last)/2;
        if(x==A[mid]){
            flag = 1;
            break;
        }
        else{
            if(x>A[mid]){
                first = mid+1;
            }
            else{
                last = mid-1;
            }
        }
    }
    if(flag == 1){
        printf("Found");
    }
    else{
        printf("Not found");
    }
}
