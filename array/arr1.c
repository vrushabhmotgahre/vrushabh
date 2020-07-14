#include <stdio.h>
int main()
{
        int i,j,temp,n;
        int arr[10];
        printf("enter the number upto which the array should be reversed\n");
        scanf("%d",&n);
        printf("enter the elements of an array\n");
        for(i=0;i<10;i++)
        {
                scanf("%d",&arr[i]);
                printf("%d\t",arr[i]);
        }
        for(i=0,j=n-1;i<j;i++,j--)
        {
                if(i<=n)
                {
                        temp=arr[i];
                        arr[i]=arr[j];
                        arr[j]=temp;
                }
        }
        printf("\nafter revresing the array :");
        for(i=0;i<10;i++)
        {
                printf("%d\t",arr[i]);
        }
}


