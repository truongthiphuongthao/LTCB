#include<stdio.h>
#include<string.h>
void reverse(char s[]){
	s=strrev(s);
}
int main(){
   char str[500];
   int len;
   fgets(str,500,stdin);
   len = strlen(str);
   if (str[len-1]=='\n') 
  {
     len--;
     str[len]='\0';
  }
   reverse(str);
   puts(str);
}
