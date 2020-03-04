#include<stdio.h>
int main(){
  int cscu,csmoi,csdien;
  long sotien;
  freopen("input.txt","r",stdin);
  scanf("%d %d",&cscu,&csmoi);
  csdien=csmoi-cscu;
  if(csdien>=0 && csdien<=50){
      sotien=csdien*1549;
  }
  else if(csdien>=51 && csdien<=100){
  	  sotien=50*1549+(csdien-50)*1600;
  }
  else if(csdien>=101 && csdien<=200){
  	  sotien=50*1549+50*1600+(csdien-100)*1858;
  }
  else if(csdien>=201 && csdien<=300){
  	  sotien=50*1549+50*1600+100*1858+(csdien-200)*2340;
  }
  else if(csdien>=301 && csdien<=400){
  	  sotien=50*1549+50*1600+100*1858+100*2340+(csdien-300)*2615;
  }
  else if(csdien>=401){
  	  sotien=50*1549+50*1600+100*1858+100*2340+100*2615+(csdien-400)*2701;
  }
  printf("%d Kwh: %ld VND",csdien,sotien);
  
}
