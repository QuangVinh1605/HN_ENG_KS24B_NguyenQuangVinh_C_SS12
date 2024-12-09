#include<stdio.h>
int checkPrime(int n){
	if(n<2){
		return false; 
		 
	} 
	for(int i=2;i<n;i++){
		if(n%i==0){
			return false; 
		} 
	}
	return n; 
}
int main(){
		int num1,num2; 
		printf("moi ban nhap vao so nguyen thu 1: ");
		scanf("%d",&num1);
		printf("moi ban nhap vao so nguyen thu 2: ");
		scanf("%d",&num2);
		
		if(checkPrime(num1)){
			printf("%d la so nguyen to",num1); 
		} else{
			printf("%d khong phai la so nguyen to",num1); 
		} 
		 printf("\n");
		if(checkPrime(num2)){
			printf("%d la so nguyen to",num2);
			 
		}else{
			printf("%d khong phai la so nguyen to",num2); 
		}
		return 0;  
		 
	} 
