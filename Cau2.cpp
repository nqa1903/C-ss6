#include<stdio.h>

int main(){
	int number;
	int count_even = 0;
	int count_odd = 0;
	printf("Nhap vao 5 so nguyen : \n");
	for(int i = 1 ; i <= 5 ; i++){
		printf("Nhap so thu %d : ",i);
		scanf("%d",&number);
		if(number % 2 == 0){
			count_even++;
		}else{
			count_odd++;
		}
	}
	printf("Co %d so chan va %d so le",count_even,count_odd);
	return 0;
}
