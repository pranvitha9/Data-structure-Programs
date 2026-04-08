#include <stdio.h>
#include <stdlib.h>

int main()
{
 int a[10],n,i,j,min,temp;
 printf("Enter number of elements:");
 scanf("%d",&n);
 printf("Enter elements:\n");
 for(i=0;i<n;i++){
    scanf("%d",&a[i]);
 }
 //selection sort
 for(i=0;i<n-1;i++){
    min=j;
    for(j=i+1;j<n;j++){
        if(a[j]<a[min]){
            min=j;
        }
    }
    //swap
    temp=a[i];
    a[i]=a[min];
    a[min]=temp;
 }
 printf("Sorted array:\n ");
 for(i=0;i<n;i++){
    printf("%d",a[i]);
 }
 return 0;
}
