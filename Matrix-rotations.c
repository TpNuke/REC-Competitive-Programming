#include<stdio.h>

void rotate(int n,int a[n][n],int ang){
    ang=(ang/90)%4;
    while(ang>0){
        int temp[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            temp[j][n-i-1]=a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            a[i][j]=temp[i][j];
        }
    }
    ang--;
}

int main(){
    int n;
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int totrot=0;
    scanf("\n");
    char c;
    while(1){
        scanf("%c",&c);
        if(c=='A'){
            int ang;
            scanf("%d\n",&ang);
            rotate(n,a,ang);
            totrot+=ang;
        }
        else if(c=='Q'){
            int k,l;
            scanf("%d %d\n",&k,&l);
            printf("%d\n",a[k-1][l-1]);
        }
        else if(c=='U'){
            int x,y,z;
            scanf("%d %d %d\n",&x,&y,&z);
            int rot=(360-(totrot%360));
            rotate(n,a,rot);
            a[x-1][y-1]=z;
            rotate(n,a,totrot);
        }
        else{
            break;
        }
    }
}    
