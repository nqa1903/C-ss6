#include<stdio.h>
#include<math.h>
int main(){
	float a , b , c;
	printf("Nhap 3 so cua phuong trinh : ");
	scanf("%f %f %f",&a,&b,&c);
	if(a == 0){
		if( b == 0){
			if(c == 0){
				printf("Phuong trinh co vo so nghiem");
			}else{
				printf("Phuong trinh vo nghiem");
			}
		}else{
			printf("Phuong trinh co nghiem %.2f",-c/b);
		}
	}
	float delta = (b*b)- (4*a*c);
	if(delta < 0){
		printf("Phuong trinh vo nghiem");
	}else if(delta == 0){
		printf("Phuong trinh co nghiem kep : %.2f",-b/(2*a));
	}else{
		printf("Nghiem thu 1 cua phuong trinh la : %.2f \n",(-b+sqrt(delta))/(2*a));
		printf("Nghiem thu 2 cua phuong trinh la : %.2f \n",(-b-sqrt(delta))/(2*a));
	}
	return 0;
}
