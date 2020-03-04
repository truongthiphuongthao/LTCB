#include<stdio.h>
int main(){
	int n,gio,phut,giay,ngay;
	freopen("input.txt","r",stdin);
	scanf("%d",&n);
	giay=n%60;
	phut=(n/60)%60;
	gio=(n/3600)%24;
	ngay=(n/3600)/24;
	if(ngay>=1){
		printf("%d days %02d:%02d:%02d",ngay,gio,phut,giay);
	}
	else{
		printf("%02d:%02d:%02d",gio,phut,giay);
	}
	
	
}
