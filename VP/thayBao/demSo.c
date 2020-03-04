#include<stdio.h>
int demSo(int n){
    int count=0;
    if(n==0){
    	count=1;
	}
    while(n!=0){
        n=n/10;
        count++;
    }
    return count;
}
int main(){
    int n;
    freopen("input.txt","r",stdin);
    scanf("%d",&n);
    printf("Number of digits: %d",demSo(n));
}
    
