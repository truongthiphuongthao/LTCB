#include<stdio.h>
int kth_digit(int n, int k){
	if (k == 0)
		return n % 10;
	return kth_digit (n / 10, k - 1);
}
int main(){
	int n;
	printf ("%d ", kth_digit(1123, 2));
}
