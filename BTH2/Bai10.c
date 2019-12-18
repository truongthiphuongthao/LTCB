#include<stdio.h>
int main(){
	long cscu,csmoi,csdien,stdmuc,stvdmuc,tong;
	printf("Chi so dien ke cu:");
	scanf("%ld",&cscu);
	printf("Chi so dien ke moi:");
	scanf("%ld",&csmoi);
	const int ttbao=1000;
	const int dmuc=50;
	const int gia=450;
	csdien=csmoi-cscu;
	int pdmuc,pvdmuc;
	// Phan vuot dinh muc
	if(csdien>dmuc){
		pdmuc=dmuc;
		pvdmuc=csdien-dmuc;
	}
	// So tien tra vuot dinh muc
	else{
		pvdmuc=0;
		pdmuc=csdien;
	}
	// Don gia vuot dinh muc
	int dgvdmuc;
	if(pvdmuc<=50){
		dgvdmuc=700;
	}
	else if(pvdmuc>50 && pvdmuc<100){
		dgvdmuc=910;
	}
	else if(pvdmuc>=100){
		dgvdmuc=1200;
	}
	// So tien dinh muc
	stdmuc=pdmuc*gia;
	// So tien vuot dinh muc
	stvdmuc=pvdmuc*dgvdmuc;
	// Tong
	tong=stdmuc+stvdmuc+ttbao;
	printf("So tien dinh muc:%ld",stdmuc);
	printf("\nSo tien vuot dinh muc:%ld",stvdmuc);
	printf("\nTong:%ld",tong);
	
}
