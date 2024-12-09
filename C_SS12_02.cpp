#include <stdio.h>
 void inracacphantutrongmang(int arr[], int size){
 	for(int i=0;i<size;i++){
	 
 	printf("arr[%d]=%d \t",i+1,arr[i]);
 }
}
 int main(){
 	int arr[5]={1,3,5,7,9};
 	int size= sizeof (arr)/sizeof (arr[1]);
 	printf("cac phan tu trong mang la: ");
 	inracacphantutrongmang(arr,5);
 	return 0;
 	
 	
 }
