#include<stdio.h>
int namNhuan(int y){
	if(y%400==0||(y%4==0 && y%100!=0)){
		return 1;
	}
	return 0;
}
void tongThuNam(int d, int m, int y){
	int tongNgay;
	int sttNgayTrongNam;
	switch(m){
		case 1: tongNgay=0;
		        sttNgayTrongNam=tongNgay+d;
		        break;
		case 2: 
				tongNgay=31;
		        sttNgayTrongNam=tongNgay+d;
		        break;
		case 3: if(namNhuan(y)){
			    tongNgay=60;
			    sttNgayTrongNam=tongNgay+d;
				}
				else{
					tongNgay=59;
					sttNgayTrongNam=tongNgay+d;
				}
				break;
		case 4: if(namNhuan(y)){
			    tongNgay=91;
			    sttNgayTrongNam=tongNgay+d;
				}
				else{
					tongNgay=90;
					sttNgayTrongNam=tongNgay+d;
				}
				break;
		case 5:if(namNhuan(y)){
			    tongNgay=121;
			    sttNgayTrongNam=tongNgay+d;
				}
				else{
					tongNgay=120;
					sttNgayTrongNam=tongNgay+d;
				}
				break;
		case 6: if(namNhuan(y)){
			    tongNgay=152;
			    sttNgayTrongNam=tongNgay+d;
				}
				else{
					tongNgay=151;
					sttNgayTrongNam=tongNgay+d;
				}
				break;
		case 7: if(namNhuan(y)){
			    tongNgay=182;
			    sttNgayTrongNam=tongNgay+d;
				}
				else{
					tongNgay=181;
					sttNgayTrongNam=tongNgay+d;
				}
				break;
		case 8:if(namNhuan(y)){
			    tongNgay=213;
			    sttNgayTrongNam=tongNgay+d;
				}
				else{
					tongNgay=212;
					sttNgayTrongNam=tongNgay+d;
				}
				break;
		case 9:if(namNhuan(y)){
			    tongNgay=244;
			    sttNgayTrongNam=tongNgay+d;
				}
				else{
					tongNgay=243;
					sttNgayTrongNam=tongNgay+d;
				}
				break;
		case 10:if(namNhuan(y)){
			    tongNgay=274;
			    sttNgayTrongNam=tongNgay+d;
				}
				else{
					tongNgay=273;
					sttNgayTrongNam=tongNgay+d;
				}
				break;
		case 11:if(namNhuan(y)){
			    tongNgay=305;
			    sttNgayTrongNam=tongNgay+d;
				}
				else{
					tongNgay=304;
					sttNgayTrongNam=tongNgay+d;
				}
				break;
		case 12:if(namNhuan(y)){
			    tongNgay=335;
			    sttNgayTrongNam=tongNgay+d;
				}
				else{
					tongNgay=334;
					sttNgayTrongNam=tongNgay+d;
				}
	}
	printf("%d",sttNgayTrongNam);
}
int main(){
	int d,m,y;
	freopen("input.txt","r",stdin);
	scanf("%d %d %d",&d,&m,&y);
	tongThuNam(d,m,y);
}
