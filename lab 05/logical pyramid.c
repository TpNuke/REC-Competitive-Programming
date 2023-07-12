#include<stdio.h>

int ele(int i){
    int f=6;
    int s=28;
    if(i==1){
        return f;
    }
    else if(i==2){
        return s;
    }
    else{
        int n;
        for(int j=3;j<=i;j++){
            n=(s*2)-f+16;
            f=s;
            s=n;
        }
        return n;
    }
}
int main(){
    int t;
    scanf("%d",&t);
    while(t>0){
        int n,e=1;
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
            printf("%*s",(n-i)*3,"");
           for(int j=i;j>0;j--){ 
               printf("%05d ",ele(e));
            e++;
           }
            printf("\n");
        }
        
        
        
        t--;
    }
}
