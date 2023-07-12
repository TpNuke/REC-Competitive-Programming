#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n][n];
    int v=1;
    for(int i=0;i<n/2;i++){
        for(int j=i;j<n-i-1;j++){
            a[i][j]=v;
            v++;
        }
        for(int j=i;j<n-i-1;j++){
            a[j][n-1-i]=v;
            v++;
        }
        for(int j=n-1-i;j>i;j--){
            a[n-1-i][j]=v;
            v++;
        }
        for(int j=n-i-1;j>i;j--){
            a[j][i]=v;
            v++;
        }
    }
    if(n%2!=0){
        a[n/2][n/2]=v;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
