#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
	char s_pres[100],s_next[100];
	char s_res[100];
	int i,k;
	bool value;
	printf("Nhap chuoi thu nhat:");
	gets(s_pres);
	printf("Nhap chuoi thu hai:");
	gets(s_next);
	int dem=0;
    char arrS[100];
    // Nguyen minh long
    // minh
    
// Tach tu
   for(i=0;i<strlen(s_pres);i++){
   	    if(s_pres[i]==' '){
   	    	continue;	    	
		   }
		else{
			   arrS[i]=s_pres[i];
			printf("%s",arrS[i]);
		}
   	}
}

   
