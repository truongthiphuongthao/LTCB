#include<stdio.h>
#include<string.h>
int main(){
    float lt,th1,th2,th3,th4,dtb;
    scanf("%f %f %f %f %f",&lt,&th1,&th2,&th3,&th4);
    dtb=(lt+th1+th2+th3+th4)/5;
    if(dtb<4.0){
    	printf("Diem so: %.1f",dtb);
        printf("\nDiem chu: F");
    }
    else if(dtb>=4.0 && dtb<4.5){
    	printf("Diem so: %.1f",dtb);
        printf("\nDiem chu: D");
    }
    else if(dtb>=4.5 && dtb<5.0){
    	printf("Diem so: %.1f",dtb);
        printf("\nDiem chu: D+");
    }
    else if(dtb>=5.0 && dtb<6.0){
    	printf("Diem so: %.1f",dtb);
        printf("\nDiem chu: C");
    }
    else if(dtb>=6.0 && dtb<7.0){
    	printf("Diem so: %.1f",dtb);
        printf("\nDiem chu: C+");
    }
    else if(dtb>=7.0 && dtb<8.0){
    	printf("Diem so: %.1f",dtb);
        printf("\nDiem chu: B");
    }
    else if(dtb>=8.0 && dtb<9.0){
    	printf("Diem so: %.1f",dtb);
        printf("\nDiem chu: B+");
    }
    else{
    	printf("Diem so: %.1f",dtb);
        printf("\nDiem chu: A");
    }
    
    
}
