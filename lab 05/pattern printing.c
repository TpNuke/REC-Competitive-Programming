#include<stdio.h>
#include<string.h>

// int sum(int n)
// {
//     return n*(n-1)/2;
// }
void pattern(int N)
{
    int V=0,P=0,c=0,init;
    char str[100]="**";
    for(int i=0;i<N;i++)
    {
        c=0;
        if(i>0)
        {
            printf("%s",str);
            strcat(str,"**");
        }
        for(int j=i;j<N;j++)
        {
            if(i>0)
            {
                c++;
            }
            printf("%d",++V);
            printf("%d",0);
        }
        if(i==0)
        {
            int S=(V-1)*V;
            P=V+S+1;
            init=P;
        }
        init=init-c;
        P=init;

        for(int k=i;k<N;k++)
        {
            printf("%d",P++);

            if(k!=N-1)
            {
                printf("%d", 0);
            }
        }
        printf("\n");
    }
}


int main(){
    int t;
    scanf("%d",&t);
    int c=1;
    while(c<=t){
        printf("Case #%d\n",c);
        int n;
        scanf("%d",&n);
        pattern(n);
        c++;
    }
}
