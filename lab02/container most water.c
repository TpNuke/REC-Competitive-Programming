#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int left=0,right=n-1,max=1;
    while(left<right){
        int w=right-left;
        int h;
        if(a[left]<a[right]){
            h=a[left];
            left++;
        }
        else{
            h=a[right];
            right--;
        }
        int ar=w*h;
        if(ar>max){
            max=ar;
        }
    }
    printf("%d",max);
}
