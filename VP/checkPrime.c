#include<stdio.h>
#include<math.h>
int ktNguyenTo(int n){
	int dem;
	int i;
	if(n<=1){
		return 0;
	}
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int n;
	printf("Nhap n:");
	scanf("%d",&n);
	if(ktNguyenTo(n)){
		printf("So nguyen to");
	}
	else{
		printf("Khong phai so nguyen to");
	}
}
