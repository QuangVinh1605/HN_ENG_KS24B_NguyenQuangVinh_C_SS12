#include<stdio.h>
int checkPerfect(int n){
	if(n<=1){
		return false;
	}
	int sum=0;
	for(int i=1;i<n;i++){
		if(n % i==0){
			sum+=i;
		}
	}if(sum%n==0){
		return true;
	}
	return n;

}
int main(){
	int num1,num2;
	printf("moi ban nhap vao so thu 1: ");
	scanf("%d",&num1);
	printf("moi ban nhap vao so thu 2: ");
	scanf("%d",&num2);
	
	if(checkPerfect(num1)){
		printf("%d la so hoan hao",num1);
	}else{
		printf("%d khong phai so hoan hao",num1);
	}
	printf("\n");
	if(checkPerfect(num2)){
		printf("%d la so hoan hao",num2);
		
	}else{
		printf("%d khong phai la so hoan hao",num2);
	}
	return 0;
} 
