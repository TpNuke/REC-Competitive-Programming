#include <stdio.h>
#include<string.h>
int main()
{
    char c[100];
    scanf("%s",c);
    int n=strlen(c);
    int p=1;
    for(int i=0;i<n;i++){
        if(i<=n/2)
            printf("%*s",i,"");
        if(i>n/2)
            printf("%*s",n-1-i,"");
        if(i<=n/2)    
            printf("%c",c[i]);    
        else
            printf("%c",c[n-1-i]);
        if(i<n/2)
            printf("%*s",(n-2)-2*i,"");
        else if(i>(n/2)){
            printf("%*s",(2*p)-1,"");
            p++;
        }
        if(i<n/2)
            printf("%c",c[n-1-i]);
        else if(i>(n/2)){
            printf("%c",c[i]);
        }
        printf("\n");
        
    }
    return 0;
}
