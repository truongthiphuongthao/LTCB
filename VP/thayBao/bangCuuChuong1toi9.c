#include<stdio.h>
void hienThiCuuChuong(){
	int i,j,k;
	for(i=1;i<=3;i++){
		for(j=1;j<=10;j++){
			for(k=1;k<=3;k++){
				int index=(i-1)*3+k;
				printf("%2d x %2d = %2d   ",index,j,j*index);
		 }
		 printf("\n");
		}
		printf("\n");
	}
}
int main(){
	hienThiCuuChuong();
}
