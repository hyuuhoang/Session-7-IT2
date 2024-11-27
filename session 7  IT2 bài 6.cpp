#include <stdio.h>

int main(){
	
	int arr[5]={2,43,23,65,45};
	 
	for(int i=0;i<5; i++){
		if(arr[i]%2==0){
			printf("Gia tri chan co trong mang tang them 2 don vi la: %d\n", arr[i] + 2);
		}
		if(arr[i]%2!=0){
			printf("Gia tri le co trong mang tang them 3 don vi la: %d\n", arr[i] + 3);
		}
	}
	return 0; 
}
