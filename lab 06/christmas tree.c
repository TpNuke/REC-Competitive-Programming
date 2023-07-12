#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t>0){
        int n;
        scanf("%d",&n);
        if(n<=1){
            printf("You cannot generate Christmas tree\n");
        }
        else if(n>20){
            printf("Tree is no more\n");
        }
        else{
            printf("%*s",n,"");
                printf("*\n");
                for(int i=0;i<n-1;i++){
                    for(int j=1;j<=n-i;j++){
                        printf("%*s",(n-j),"");
                        for(int k=1;k<=2*j+1;k++){
                            printf("*");
                        }
                        printf("\n");
                    }
                }
            for(int c=0;c<2;c++){
                printf("%*s",n,"");
                printf("*\n");
            }
        }
        t--;
    }
}
