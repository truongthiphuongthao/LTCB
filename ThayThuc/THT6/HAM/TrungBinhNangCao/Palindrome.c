#include<stdio.h>
int isPalindrome(int n){
	int digit, reverse = 0;
	int number = n;
	while(number!=0){
		digit = number%10;
		reverse = reverse*10+digit;
		number = number/10;
	}
	if(reverse!=n){
		return 0;
	}
	else return 1;
}
int main(){
//		if (isPalindrome(12344321))
//	  printf("YES");
//	else  printf("NO");
//printf("%d", isPalindrome(2));
printf("%d", isPalindrome(123));
//printf("%d", isPalindrome(11));
}
