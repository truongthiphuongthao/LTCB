#include<stdio.h>
// Kiem tra ngay hop le
int kiemTraHopLe(int ngay,int thang, int nam){
//	// Thang co 31 ngay
	if(thang==1 || thang ==3 || thang ==7 || thang ==8 || thang ==10|| thang==12){
		if(ngay==31){
			return 1;
		}
		else if(ngay<31){
			return 2;
		}
	}
	// Thang co 30 ngay
	if(thang==4 || thang ==6 || thang==9 || thang==11){
		if(ngay==30){
			return 1;
		}
		else if(ngay<30){
			return 2;
		}
	}
	// Thang co 28 va 29 ngay
	if(thang==2) {
//		printf ("Checked ");
		int mxNgay = kiemTraNamNhuan(nam);
//		printf ("%d ", mxNgay);
		if (mxNgay >= ngay) {
			if (mxNgay == 29) {
				return 2;
			} 
			return 1;
		} else
			return 0;
//		if(kiemTraNamNhuan(nam)==29){
//			return 1;
//		}
//		
//		else if(kiemTraNamNhuan(nam)==28){
//			return 2;
//		}	
	}
	return 0;
}
// Kiem tra nam nhuan cua thang 2
int kiemTraNamNhuan(int nam){
	int ngay;
	if((nam%400==0)||(nam%4==0 && nam%100!=0)){
		ngay=29;
	} else {
		ngay=28;
	}
	
	return ngay;
}
	
void ngayMai(int ngay, int thang, int nam){
	switch(thang){
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		   if	(kiemTraHopLe(ngay,thang,nam)==1){
		   		ngay=1;
		   		++thang;
		   		printf("%d - %d - %d",ngay,thang,nam);
		   }
		   else if(kiemTraHopLe(ngay,thang,nam)==2){
		   	    ++ngay;
		   	    printf("%d - %d - %d",ngay,thang,nam);    
		   }
			else{ 
			    printf("Khong hop le");
			    
			}		
			break;
		case 4: case 6: case 9: case 11:
			 if	(kiemTraHopLe(ngay,thang,nam)==1){
		   		ngay=1;
		   		++thang;
		   		printf("%d - %d - %d",ngay,thang,nam);
		   }
		   else if(kiemTraHopLe(ngay,thang,nam)==2){
		   	    ++ngay;
		   	    printf("%d - %d - %d",ngay,thang,nam);
		   }
			else{ 
			    printf("Khong hop le");
			}
			break;
		case 2:
			
			if(ngay>29){
				printf("Khong hop le");
			}
		  	else if(kiemTraHopLe(ngay,thang,nam)==1){
				ngay++;
				if (ngay > 28) {
					ngay = 1;	
					++thang;
				}
				
				printf("%d - %d - %d",ngay,thang,nam);
			} else if(kiemTraHopLe(ngay,thang,nam)==2){
				ngay++;
				if (ngay > 29) {
					ngay = 1;	
					++thang;
				}
				printf("%d - %d - %d",ngay,thang,nam);
			} else {
				printf ("Ngay nhap vao khong hop le");    	
			}
			break;
	}
}
int main(){
	int ngay,thang,nam;
	printf("Nhap ngay:");
	scanf("%d",&ngay);
	printf("\nNhap thang:");
	scanf("%d",&thang);
	printf("\nNhap nam:");
	scanf("%d",&nam); 
	ngayMai(ngay,thang,nam);
}
