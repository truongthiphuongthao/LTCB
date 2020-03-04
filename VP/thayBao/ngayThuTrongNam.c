#include<stdio.h>
// Kiem tra nam nhuan
int kiemTraNamNhuan(int y){
	if(y%400==0 ||(y%4==0 && y%100!=0)){
		return 1;
	}
	return 0;
}
int main(){
	int d,m,y;
	freopen("input.txt","r",stdin);
	scanf("%d %d %d",&d,&m,&y);
	
	
}
