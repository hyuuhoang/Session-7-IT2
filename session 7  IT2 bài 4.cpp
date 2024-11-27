#include <stdio.h>
int main(){
	int n,arr[n];
	
	printf("Hay nhap vao so phan tu cua mang: ");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		printf("Phan tu thu %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	
	for(int i=0;i<n;i++){
		printf("%d\n",arr[i]);
	}
	return 0;\
}
