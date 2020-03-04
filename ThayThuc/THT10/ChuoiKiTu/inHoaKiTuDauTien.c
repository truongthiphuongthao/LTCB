#include<stdio.h>
#include<string.h>
// vd dai HOC CaN tHo
//    Dai HOC CAN THO
void inHoaKiTuDau(char s[]){
	int i=1;
	if(s[0]!=' ' && s[0]>='a' && s[0]<='z'){
		s[0]=s[0]-32;
    }
    else{
    	s[0]=s[0];
	}
	printf("%s",s);
}
int main(){
	char s[501];
//	scanf("%[^\n]s",s);
    gets(s);
	inHoaKiTuDau(s);
}
