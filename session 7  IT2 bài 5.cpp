#include <stdio.h>
int main(){
	int n;
	int arr[5];
	
	for(int i=0;i<5;i++){
		printf("Phan tu thu %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	
	for(int i=0;i<5;i++){
		if(arr[i]>arr[0]){
			arr[i]=arr[0];
			printf("So lon nhat %d",&arr[0]);
		}
		
		else if(arr[i]<arr[0]){
			arr[i]=arr[0];
			printf("So nhho nhat %d",&arr[0]);
		}
	}
	
	
	return 0;
}
