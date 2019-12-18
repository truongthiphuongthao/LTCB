#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int split (char s[], char arr[][100]) {
	
	int slen = strlen (s);
	int i = 0, j = 0;
	int last = 0;
	int cnt = 0;
	for (i=0;i<=slen;++i) {
		if (s[i] == ' ' || i == slen) {
			int idx = 0;
			for (j = last; j < i; j++) {
				arr[cnt][idx++] = s[j]; 
			}
			arr[cnt][idx] = 0;
			last = i+1;
			++cnt;
		}
	}
	return cnt;
}
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
    char arrS[10][100];
    // Nguyen minh long
    // minh
    int n = split (s_pres, arrS);
    for (i=0;i<n;++i) printf ("%s", arrS[i]);
    
// Tach tu

}

   
