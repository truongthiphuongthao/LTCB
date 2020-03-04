#include<stdio.h>
// Kiem tra nam nhuan
int kiemTraNamNhuan(int y){
	if(y%400==0 ||(y%4==0 && y%100!=0)){
		return 1;
	}
	return 0;
}
void ngayMai(int d, int m, int y){
	int demNgay=0;
	int ngayMax;
	switch(m){
		case 1: case 3: case 5: case 7: case 8: case 10:
			ngayMax=31;
			if(d>=ngayMax){
				d=1;
				++m;
			}
			else{
				++d;
			}
			break;
		case 2:
			if(kiemTraNamNhuan(y)){
				ngayMax=29;
				if(d>=ngayMax){
					d=1;
					++m;
				}
				else{
					++d;
				}
			}
			else{
				ngayMax=28;
				if(d>ngayMax){
					d=1;
					++m;
				}
				else{
					++d;
				}
			}
			break;
		case 4: case 6: case 9: case 11:
			ngayMax=30;
			if(d>=ngayMax){
				d=1;
				++m;
			}
			else{
				++d;
			}
			break;
		case 12:
			ngayMax=31;
			if(d>=ngayMax){
				d=1;
				m=1;
				++y;
			}
			else{
				++d;
			}
	}
	printf("%02d/%02d/%d",d,m,y);
}
int main(){
	int d,m,y;
	freopen("input.txt","r",stdin);
	scanf("%d %d %d",&d,&m,&y);
	ngayMai(d,m,y);
	
}
