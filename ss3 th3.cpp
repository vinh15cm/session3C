#include<stdio.h>
#include<math.h>
int main(){
	int number;
	printf("Nhap vao mot so nguyen:");
	scanf("%d", &number);
	int square = pow(number,2);
	printf("Binh phuowng so nguyen:%d\n",square);
}
