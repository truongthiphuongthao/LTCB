#include<stdio.h>
int main(){
   int n,so1,so2,so3,sum,tich,i, j, k;
   for(i=100;i<1000;i++){
   	    so1=i%10;
        so2=(i/10)%10;
        so3=(i/100);   
        sum=so1+so2+so3;
        tich=so1*so2*so3;
	   if(sum==tich){
	   	   printf("%d\t",i);
	   	  
	   }
	}
	
	
//	for (i=1; i<=9;++i)
//		for (j=0;j<=9;++j)
//			for (k=0; k<=9;++k) if (i*j*k==i+j+k) printf ("%d ", i*100+j*10+k);
}
 

