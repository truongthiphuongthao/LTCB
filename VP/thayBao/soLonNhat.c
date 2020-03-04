#include<stdio.h>
int theLargest(int a[]){
	int i;
	int max=a[0];
	for(i=0;i<3;i++){
		if(max<a[i]){
			max=a[i];
		}
	}
	return max;
}
int main(){
	int a[3];
	freopen("input.txt","r",stdin);
	int i;
	for(i=0;i<3;i++){
		scanf("%d",&a[i]);
	}
	printf("%d",theLargest(a));

}
