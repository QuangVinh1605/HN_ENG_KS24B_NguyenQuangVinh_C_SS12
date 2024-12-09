#include<stdio.h>
int timsolonnhat(int arr[],int size){
	int max=arr[0];
	for(int i=0;i<size;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	return max;
}
int main(){
	int arr[5]={3,6,4,5,7};
	int size= sizeof (arr)/sizeof (arr[1]);
	int max=timsolonnhat(arr,5);
	printf("so lon nhat trong mang la: %d ",max);
	
	return 0;
} 
