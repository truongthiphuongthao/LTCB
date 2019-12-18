#include <stdio.h>
int main(){
    int r;
    float cv, s;
    const float Pi=3.14;
	printf("Nhap vao ban kinh hinh tron:");
	scanf("%d",&r);
	cv = 2*Pi*r;
	s = Pi*r*r;
	printf("CV = %f",cv);
	printf("\nDT = %f",s);
	
}
