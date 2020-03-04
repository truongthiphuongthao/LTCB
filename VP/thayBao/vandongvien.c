#include<stdio.h>
// Tim thanh tich cao nhat
float thanhTichCaoNhat(float arrVDV[]){
	float min=arrVDV[0];
	int i;
	for(i=0;i<3;i++){
		if(min>arrVDV[i]){
			min=arrVDV[i];
		}
	}
	return min;
}
// Tim thanh tich thap nhat
float thanhTichThapNhat(float arrVDV[]){
	float max=arrVDV[0];
	int i;
	for(i=0;i<3;i++){
		if(max<arrVDV[i]){
			max=arrVDV[i];
		}
	}
	return max;
}
int main(){
	float vdv1,vdv2,vdv3;
	int i;
	freopen("input.txt","r",stdin);
	scanf("%f %f %f",&vdv1,&vdv2,&vdv3);
	float arrVDV[3]={vdv1,vdv2,vdv3};
	printf("Thanh tich tot nhat: %.1f giay",thanhTichCaoNhat(arrVDV));
	printf("\nThanh tich thap nhat: %.1f giay",thanhTichThapNhat(arrVDV));
	int vdvQG, vdvTre;
	for(i=0;i<3;i++){
		if(arrVDV[i]==thanhTichCaoNhat(arrVDV)){
			vdvQG=i;
			break;
		}
	}
	for(i=0;i<3;i++){
		if(arrVDV[i]==thanhTichThapNhat(arrVDV)){
			vdvTre=i;
			break;
		}
	}
	printf("\nVDV thi dau quoc gia: %d",vdvQG+1);
	printf("\nVDV xuong voi doi tre: %d",vdvTre+1);
}
