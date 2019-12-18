#include<stdio.h>
int main(){
	float a,b;
	char ch;
	printf("\nChon (+ - * /):");
	scanf("%c",&ch);
	printf("Nhap a:");
	scanf("%f",&a);
	printf("\nNhap b:");
	scanf("%f",&b);
	switch(ch){
		case '+': 
		  printf("Ket qua:%f",(a+b));
		  break;
		case '-':
		    printf("Ket qua:%f",(a-b));
		  break;
	    case '*':
	    	printf("Ket qua:%f",(a*b));
	    	break;
	    case '/':
	    	printf("Ket qua:%f",(a/b));
	    	break;
	    default:
	    	printf("Khong hop le");
	}
	
}
