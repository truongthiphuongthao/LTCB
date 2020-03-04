#include<stdio.h>
int timMin(int a, int b){
	int min = a;
	if(a>b){
		min=b;
	}
	return min;
}
int main(){
	int a,b,min;
	scanf("%d %d",&a,&b);
	// Tim min hai so a va b
	min=timMin(a,b);
	while(1){
		if(min%a==0 && min%b==0 && min!=0){
			if(min<0)
			{	
				printf("%d",-min);
			}
			else{
				printf("%d",min);
			}
			break;
		}	
		min++;
	}

}
