#include <stdio.h>
int main(){
	int a=0, b, count=0, i=0;
    printf("Nhap phan tu cua mang: ");
    scanf("%d", &a);
    int num[a];
    printf("Nhap phan tu cua mang: ");
    do{
        while(i!=a){
            printf("Nhap phan tu cua mang: ");
            scanf("%d", &b);
                if(b%2!=0){
                    num[i]=b;
                    i++;
                    count++;
                }
        }
        
    }while(count!=a);
    for(int i=0;i<a;i++){
        printf("num[%d] = %d\n", i, num[i]);
    }
    return 0;
}
