#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n/2;i++){
        for(int j=i;j<n-i-1;j++){
            printf("%d ",a[i][j]);
        }
        for(int j=i;j<n-i-1;j++){
            printf("%d ",a[j][n-1-i]);
        }
        for(int j=n-1-i;j>i;j--){
            printf("%d ",a[n-1-i][j]);
        }
        for(int j=n-i-1;j>i;j--){
            printf("%d ",a[j][i]);
        }
    }
    if(n%2!=0){
        printf("%d",a[n/2][n/2]);
    }
}
