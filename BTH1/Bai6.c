#include<stdio.h>
int main(){
	char c;
	printf("Nhap vao ki tu:");
	scanf("%c",&c);
	// In ra mã ascII cua ki tu do
	printf("Ma ASCII:%d",c);
	// In ra ki tu ke tiep cua no
	printf("\nMa ASCII:%d",c+1);
}
