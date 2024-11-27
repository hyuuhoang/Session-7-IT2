#include <stdio.h>
int main(){
	int arr[5];
	printf("Moi ban nhap: \n");
	
	for(int i = 0;i<5;i++){
		printf("Phan tu thu %d\n",i+1);
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<5;i++){
		printf("arr[%d]=%d\n",i,arr[i]);
	}
	return 0;
}
