#include<stdio.h>
int main(){
	int mm,yy;
	printf("Nhap thang:");
	scanf("%d",&mm);
	printf("Nhap nam:");
	scanf("%d",&yy);
	switch(mm){
		case 1: printf("Thang co 31 ngay"); break;
		case 2: 
		    if((yy%400==0)||((yy%4==0) && (yy%100!=0))){
		    	printf("Thang co 29 ngay");
			}
			else{
				printf("Thang co 28 ngay");
			}
			break;
		case 3: printf("Thang co 31 ngay"); break;
		case 4: printf("Thang co 30 ngay"); break;
		case 5: printf("Thang co 31 ngay"); break;
		case 6: printf("Thang co 30 ngay"); break;
		case 7: printf("Thang co 31 ngay"); break;
		case 8: printf("Thang co 31 ngay"); break;
		case 9: printf("Thang co 30 ngay"); break;
		case 10: printf("Thang co 31 ngay");break;
		case 11: printf("Thang co 30 ngay"); break;
		case 12: printf("Thang co 31 ngay");break;
		default:
			printf("Khong hop le");
			
	}
	
}
