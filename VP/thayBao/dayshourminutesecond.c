#include<stdio.h>
int main(){
    int n,day,hour,minute,second;
    scanf("%d",&n);
    second=n%60;
    minute=(n/60)%60;
    hour=(n/3600)%24;
    day=(n/3600)/24;
    if(day>=1){
        printf("%d days %02d:%02d:%02d",day,hour,minute,second);
    }
    else{
        printf("%02d:%02d:%02d",hour,minute,second);
    }
}
