#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t>0){
        int n;char x;
        scanf("%d %c",&n,&x);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(x=='W'){
                    if((i+j)%2==0){
                    printf("W");
                    }
                    else{
                        printf("B");
                    }
                    
                }
                else{
                    if((i+j)%2==0){
                        printf("B");
                    }
                    else{
                        printf("W");
                    }
                }
            }
            printf("\n");
        }
        
        t--;
        }
}
