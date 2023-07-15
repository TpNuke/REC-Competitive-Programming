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
    int n;
    scanf("%d",&n);
    int a=n,b=n;
    for(int i=2;i<n-1;i++){
        for(int j=2;j<n-1;j++){
            if(isPrime(i) && (isPrime(j))){
                if((i+j)==n){
                    if((i<a)||((i==a)&&(j<b))){
                        a=i;
                        b=j;
                    }
                }
            }
        }
    }
    printf("%d %d",a,b);
}
