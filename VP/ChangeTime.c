#include<stdio.h>
int main(){
	int n,gio,phut,giay;
	do{
		printf("Nhap n:");
	    scanf("%d",&n);	 
	}while(n>86399);
	 if(n<60){
		gio=00;
		phut=00;
		giay=n;
		printf("%02d:%02d:%02d",gio,phut,giay);
		}
		if(n>=60 && n<3600){
			gio=00;
			phut=n/60;
			giay=n%60;
			printf("%02d:%02d:%02d",gio,phut,giay);
		}
		if(n>=3600){
			gio=n/3600;
			phut=n%3600;
			if(phut>60){
				int phutsau=phut/60;
				giay=phut%60;
				printf("%02d:%02d:%02d",gio,phutsau,giay);
			}
			else{
				giay=phut;
				phut=00;
				printf("%02d:%02d:%02d",gio,phut,giay);
			}
		}
	
		
}
