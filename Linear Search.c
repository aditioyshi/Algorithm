#include<stdio.h>
int main()
{
    int arr[5],i,x;
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&x);
    int flag=0;
    for(i=0;i<5;i++){
        if(arr[i]==x){
            flag=1;
            break;
        }
    }

    if(flag==1){
        printf("Found");
    }
    else{
        printf("Not found");
    }
}
