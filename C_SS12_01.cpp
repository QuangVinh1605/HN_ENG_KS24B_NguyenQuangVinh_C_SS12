#include <stdio.h>
	int tinhtong(int a, int b){
		return a+b; 
	} 
	 int main(){
	 	int x,y; 
	 	printf("moi ban nhap so thu nhat: ");
		 scanf("%d",&x);
		 printf("moi ban nhap so thu 2: ");
		 scanf("%d",&y);
		 int tong=tinhtong(x,y);
		 printf("tong cua %d vA %d la: %d",x,y,tong);
		 return 0; 
	 } 
