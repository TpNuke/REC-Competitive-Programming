#include<stdio.h>
#include<string.h>

int main(){
    int t;
    scanf("%d",&t);
    if(t>0 && t<=1000){
        while(t>0){
            char p[27],s[101],mp[101];
            scanf("%s",p);
            scanf("%s",s);
            int n=strlen(s);
            for(int i=0;i<27;i++){
                mp[p[i]-'a']=i;
            }
            for(int i=0;i<n;i++){
                for(int j=0;j<n-i-1;j++){
                    if(mp[s[j]-'a']>mp[s[j+1]-'a']){
                        char t=s[j];
                        s[j]=s[j+1];
                        s[j+1]=t;
                    }
                }
            }
            printf("%s\n",s);
            t--;
        }
    }
}
