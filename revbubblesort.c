#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int n=5;
for (int i=0;i<5;i++){
    printf("%d ",arr[i]);
}
//bubble sort
for (int i=0;i<n-1;i++){
    for (int j=0;j<=n-2;j++){
        if(arr[j+1]>arr[j]){
            int temp=arr[j+1];
            arr[j+1]=arr[j];
            arr[j]=temp;
        }
    }
}
printf("\n");
for (int i=0;i<5;i++){
    printf("%d ",arr[i]);
}

return 0;
}
