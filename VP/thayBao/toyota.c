#include<stdio.h>
int main(){
    float km,sotien;
    scanf("%f",&km);
    if(km<=0.5){
        sotien=11500;
    }
    else if(km>0.5 && km<30){
        sotien=11500+(km-0.5)*14500;
    }
    else{
        sotien=11500+29.5*14500+(km-30)*11600;
    }
    printf("%.2f km = %.2f VND",km,sotien);
}
