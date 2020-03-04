#include<stdio.h>
int kiemTraNamNhuan(int y){
	if(y%400==0 ||(y%4==0 && y%100!=0)){
		return 1;
	}
	return 0;
}
// Kiem tra ngay thang nam hop le
int kiemTraHopLe( int d, int m, int y){
	int ngayMax;
	if(y<1)
	{
	 return 0;
	}
	if(m<1 || m>12)
	{  
	 return 0;
	}	
	if(d<1){
		return 0;
	}
	else{
		switch(m){
			case 1:case 3: case 5: case 7: case 8: case 10: case 12:
		   		ngayMax=31;
		   		break;
		    case 4: case 6: case 9: case 11:
				ngayMax=30;
				break;
            case 2:
				if(y%400==0||(y%4==0 && y%100!=0)){
					ngayMax=29;
				}
				else{
					ngayMax=28;
				}
				 break;
		}
	}
	if(d>ngayMax){
		return 0;
	}
	return 1;
}
int main(){
	int d,m,y;
	freopen("input.txt","r",stdin);
	scanf("%d %d %d",&d,&m,&y);
	if (kiemTraHopLe(d,m,y)){
		printf("YES");
	}
	else{
		printf("NO");
	}
}
