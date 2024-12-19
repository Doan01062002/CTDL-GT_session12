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
	
	int min = arr[0];
	for(int i=1; i<n; i++){
		if(arr[i] < min){
			min = arr[i];
		}
	}
	
	printf("\nPhan tu nho nhat trong mang la: %d", min);
	
	return 0;
}
