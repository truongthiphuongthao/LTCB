#include<stdio.h>
#include<string.h>
int main(){
	freopen("input.txt","r",stdin);
	char c;
	float lt, th1, th2, th3, th4,dtb;
	scanf("%c",&c);
	scanf("%f %f %f %f %f",&lt,&th1,&th2,&th3,&th4);
	printf("%c",c);
	printf("\nLy thuyet: %.2f",lt);
    printf("\nThuc hanh 1: %.2f",th1);
    printf("\nThuc hanh 2: %.2f",th2);
    printf("\nThuc hanh 3: %.2f",th3);
    printf("\nThuc hanh 4: %.2f",th4);
//    (LT + (TH1 + TH2 + TH3 + TH4)/4)/2
    dtb=(lt+(th1+th2+th3+th4)/4)/2;
    printf("\nTrung binh: %.2f",dtb);
}
