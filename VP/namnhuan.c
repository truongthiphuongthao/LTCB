#include<stdio.h>
int main(){
	int nam;
	scanf("%d",&nam);
	if(nam%400==0 ||(nam%4==0 && nam%100!=0))
	{
		
		printf("%d is a leap year",nam);
	} 
	else 
	{
		printf("%d is not a leap year",nam);
	}
	
}
