#include <stdio.h>
#include<string.h>

int palindrome(char c[]){
    for(int i=0,j=strlen(c)-1;i<j;i++,j--){
        if(c[i]!=c[j]){
            return 0;
        }
    }
    return 1;
}

int leftshift(char c[]){
    int t=strlen(c);
    char tem[strlen(c)];
    for(int i=0;i<strlen(c);i++){
        tem[i]=c[i];
        printf("%c",tem[i]);
    }
    printf("\n");
    int rot=0;
    char s[strlen(tem)];
    if(palindrome(tem)){
                return rot;
            }
    while(t>0){
        for(int i=0;i<strlen(tem)-1;i++){
            s[i]=tem[i+1];
        }
        s[strlen(tem)-1]=tem[0];
        for(int i=0;i<strlen(c);i++){
            printf("%c",s[i]);
        }
        printf("\n");
        rot++;
        printf("rot update-%d\n",rot);
        if(palindrome(s)){
            return rot;
        }
        else{
            for(int i=0;i<strlen(c);i++){
                tem[i]=s[i];
            }
        }
        t--;
    }
     return -1;
}

int rightshift(char c[]){
    int t=strlen(c);
    int rot=0;
    char tem[strlen(c)];
    for(int i=0;i<strlen(c);i++){
        tem[i]=c[i];
        printf("%c",tem[i]);
    }
    printf("\n");
    if(palindrome(tem)){
                return rot;
            }
    char s[strlen(c)];
    while(t>0){
    for(int i=strlen(tem)-1;i>0;i--){
        s[i]=tem[i-1];
    }
    s[0]=tem[strlen(tem)-1];
    rot++;
    if(palindrome(s)){
        return rot;
    }
    for(int i=0;i<strlen(c);i++){
        tem[i]=s[i];
    }
    t--;
    }
    return -1;
}

int main()
{
    char c[100];
    scanf("%ss",c);
    // printf("rs-%d\n",leftshift(c));
    // printf("rs-%d\n",rightshift(c));
    printf("%d",palindrome("cbabc"));
    return 0;
}
