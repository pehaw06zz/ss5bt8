#include<stdio.h>
int UCNN(int a,int b){
	while(b !=0){
		int temp =b;
		b=a%b;
		a=temp;
		}
		return a;
    }
    int BCNN(int a ,int b){
    	return (a*b)/ UCNN(a,b);
	}
int main(){
	int a,b;
	printf("nhap so nguyen a: \n");
	scanf("%d",&a);
	printf("nhap so nguyen b: \n");
	scanf("%d",&b);
	if(a<=0||b<=0){
		printf("vui long nhap so nguyen \n");
		return 1;
	}
	int bcnn=BCNN(a,b);
	printf("UCLN cua %d va %d la: %d\n",a,b,bcnn);
	
	
	return 0;
}
