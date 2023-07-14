#include<stdio.h>
#include<string.h>

int isPalindrome(char c[]){
    for(int i=0;i<=strlen(c)/2;i++){
        if(c[i]!=c[strlen(c)-1-i]){
            return 0;
        }
    }
    return 1;
}

int leftshift(char l[]){
    int rot=0;
    if(isPalindrome(l)){
        return 0;
    }
    int n=strlen(l);
    char ss[n];
    int co=n-1;
    while(co>0){
    for(int i=0;i<n-1;i++){
        ss[i]=l[i+1];
    }
    ss[n-1]=l[0];
    ss[n]='\0';
    rot+=1;
    if(isPalindrome(ss)){
        return rot;
    }
    strcpy(l,ss);
    co--;
    }
    return -1;
    
}


int rightshift(char r[]){
    int rot=0;
    if(isPalindrome(r)){
        return 0;
    }
    int n=strlen(r);
    char kk[n];
    int co=n-1;
    while(co>0){
        for(int i=1;i<n;i++){
            kk[i]=r[i-1];
        }
        kk[0]=r[n-1];
        kk[n]='\0';
        rot+=1;
        if(isPalindrome(kk)){
            return rot;
        }
        strcpy(r,kk);
        co--;
    }
    return -1;
    
}


int main(){
    int t;
    scanf("%d",&t);
    while(t>0){
        char c[300];
        scanf("%s",c);
        int n=strlen(c);
        char l[n];
        char r[n];
        strcpy(l,c);
        strcpy(r,c);
        int ln=leftshift(l);
        int rn=rightshift(r);
            printf("%d\n",ln<rn ? ln : rn);
        // printf("%d  %d \n",ln,rn);
        
        
        t--;
    }
}
