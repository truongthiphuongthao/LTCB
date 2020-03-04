#include<stdio.h>
int kiemTraNamNhuan(int y){
	if(y%400==0 || (y%4==0 && y%100!=0)){
		return 1;
	}
	return 0;
}
void ngayThu(int d, int m ,int y){
	int tongNgay;
	int sttNgay;
	if(m==1){
		tongNgay=0;
		sttNgay=tongNgay+d;
	}
	else if(m==2){
		tongNgay=31;
		sttNgay=tongNgay+d;
	}
	else if(m==3){
		if(kiemTraNamNhuan(y)){
			tongNgay=60;
			sttNgay=tongNgay+d;
		}
		else {
			tongNgay=59;
			sttNgay=tongNgay+d;
		}     
	}
	else if(m==4){
		if(kiemTraNamNhuan(y)){
			tongNgay=91;
			sttNgay=tongNgay+d;
		}
		else {
			tongNgay=90;
			sttNgay=tongNgay+d;
		}     
	}
	else if(m==5){
		if(kiemTraNamNhuan(y)){
			tongNgay=121;
			sttNgay=tongNgay+d;
		}
		else {
			tongNgay=120;
			sttNgay=tongNgay+d;
		}     
	}
	else if(m==6){
		if(kiemTraNamNhuan(y)){
			tongNgay=152;
			sttNgay=tongNgay+d;
		}
		else {
			tongNgay=151;
			sttNgay=tongNgay+d;
		}     
	}
	else if(m==7){
		if(kiemTraNamNhuan(y)){
			tongNgay=182;
			sttNgay=tongNgay+d;
		}
		else {
			tongNgay=181;
			sttNgay=tongNgay+d;
		}     
	}
	else if(m==8){
		if(kiemTraNamNhuan(y)){
			tongNgay=213;
			sttNgay=tongNgay+d;
		}
		else {
			tongNgay=212;
			sttNgay=tongNgay+d;
		}     
	}
	else if(m==9){
		if(kiemTraNamNhuan(y)){
			tongNgay=244;
			sttNgay=tongNgay+d;
		}
		else {
			tongNgay=243;
			sttNgay=tongNgay+d;
		}     
	}
	else if(m==10){
		if(kiemTraNamNhuan(y)){
			tongNgay=274;
			sttNgay=tongNgay+d;
		}
		else {
			tongNgay=273;
			sttNgay=tongNgay+d;
		}     
	}
	else if(m==11){
		if(kiemTraNamNhuan(y)){
			tongNgay=305;
			sttNgay=tongNgay+d;
		}
		else {
			tongNgay=304;
			sttNgay=tongNgay+d;
		}     
	}
	else if(m==12){
		if(kiemTraNamNhuan(y)){
			tongNgay=335;
			sttNgay=tongNgay+d;
		}
		else {
			tongNgay=334;
			sttNgay=tongNgay+d;
		}     
	}
	printf("%d",sttNgay);
}
int main(){
	int d, m, y;
	scanf("%d %d %d",&d,&m,&y);
	ngayThu(d,m,y);
}
