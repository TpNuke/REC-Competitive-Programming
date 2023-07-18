#include<stdio.h>
#include<string.h>
#include<limits.h>

void leftshift(char a[]){
    char c=a[0];
    for(int i=0;i<strlen(a)-1;i++){
        a[i]=a[i+1];
    }
    a[strlen(a)-1]=c;
    a[strlen(a)]='\0';
}

int main(){
    int n;
    scanf("%d",&n);
    char a[n][100];
    for(int i=0;i<n;i++) scanf("%s",a[i]);
    int min=INT_MAX;int sum;
    for(int i=0;i<n;i++)
    {
        sum=0;
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                char temp[100];
                strcpy(temp,a[j]);
                for(int k=0;k<n;k++)
                {
                    if(strcmp(temp,a[i])==0)
                        break;
                    leftshift(temp);
                    sum++;
                }
                if(strcmp(temp,a[i])!=0)
                {
                    printf("-1");
                    return 0;
                }
            }
        }
        if(sum<min) min=sum;
    }
    printf("%d",sum);
}
