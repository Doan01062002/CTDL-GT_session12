#include<stdio.h>

int main(){
	int n;
	
	do{
		printf("Vui long nhap so luong phan tu voi n>0: ");
		scanf("%d", &n);
	}while(n<0);
	
	int arr[n];
	
	printf("\nNhap cac phan tu cho mang: \n");
	for(int i=0; i<n; i++){
		printf("Phan tu thu %d: ", i+1);
		scanf("%d", &arr[i]);
	}
	
	int flag = 0;
	for(int i=0; i<n/2; i++){
		if(arr[i] == arr[n-i-1]){
			printf("Cap doi xung: (%d,%d) \n", arr[i], arr[n-i-1]);
			flag = -1;
		}
	}
	
	if(!flag){
		printf("Khong co phan tu doi xung trong mang");
	}
	
	return 0;
}
