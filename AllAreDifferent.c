#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int k=abs(i-j)+abs(arr[i]-arr[j]);
            if(k>=max)max=k;
        }
    }
    printf("%d",max);
    //  Insert your code here.
    
    return 0;
}
