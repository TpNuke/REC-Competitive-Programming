#include<stdio.h>
int isPrime(int n){
    for(int i=2;i<n/2;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int concate(int a,int b){
    if(b<10){
        return (a*10)+b;
    }
    else{
        return (a*100)+b;
        }
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n+1];
        int p[n+1];
        for(int i=1;i<=n;i++){
            a[i]=i;
            p[i]=1;
        }
        for(int i=2;i*i<n;i++){
            for(int j=1+i;j<=n;j++){
                if(j%i==0){
                    p[j]=0;
                }
            }
        }
        int lp[n+1];
        int k=0;
        for(int i=2;i<=n;i++){
            if(p[i]){
                lp[k]=a[i];
                k++;
            }
        }
        
        int c=0;
        for(int i=0;i<k;i++){
            for(int j=0;j<k;j++){
                int x=concate(lp[i],lp[j]);
                if(isPrime(x)){
                    c++;
                }
            }
        }
        printf("%d",c);
        
}
