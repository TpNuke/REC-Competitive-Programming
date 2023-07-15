#include<stdio.h>
#include<stdlib.h>
int isPrime(int n){
    if(n==1){
        return 0;
    }
    for(int i=2;i<n/2;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int isNOG(int n){
    while(1){
        int sum=0;
        while(n>0){
            sum+= (n%10)*(n%10);
            n/=10;
        }
        if(sum==1){
            return 1;
        }
        else if(sum==4){
            return 0;
        }
        else{
            n=sum;
        }
    }
}
int main(){
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    if(x<1 || y<1 || z<1 || x>y){
    printf("Invalid Input");
        return 0;
    }
    int a[100];
    for(int i=0;i<100;i++){
        a[i]=0;
    }
    int c=0;
    for(int i=x;i<=y;i++){
        if(isPrime(i) && isNOG(i)){
            a[c]=i;
            c++;
        }
    }
    if(z>(c-1))
        printf("No number is present at this index");
    else
        printf("%d",a[z-1]);
        
 }
