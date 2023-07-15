#include<stdio.h>

int isPrime(int n){
    for(int i=2;i<n/2;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int t;
    scanf("%d",&t);
    while(t>0){
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
        int count=0;
        for(int i=2;i<=n;i++){
            if(p[i]){
                lp[k]=a[i];
                k++;
            }
        }
        for(int i=1;i<k;i++){
            int sum=0;
            for(int j=0;j<i;j++){
                sum+=lp[j];
                if(sum==lp[i]){
                    count++;
                }
            }
        }
        printf("%d\n",count);
        t--;
    }
}
