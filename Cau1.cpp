#include<stdio.h>

int main(){
	int number;
	int odd_sum = 0;
	printf("Nhap lan luot 5 so nguyen \n");
	for(int i = 1 ; i <= 5 ; i++){
		printf("Nhap so thu %d : ",i);
		scanf("%d",&number);
		if(number % 2 != 0){
			odd_sum += number;
		}
	}
	printf("Tong cac so le la : %d",odd_sum);
	return 0;
}
