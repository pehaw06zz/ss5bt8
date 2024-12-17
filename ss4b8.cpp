#include<stdio.h>
int main(){
    int a,b,c;
	printf("nhap so canh a:");
	scanf("%d",&a);
	printf("nhap so canh b:");
	scanf("%d",&b);
	printf("nhap so canh c:");
	scanf("%d",&c);
	if(a > 0 && b > 0 && c > 0 && (a + b> c) && (a + c> b) && (b +c > a)) {
		printf("la 3 canh tam giac.\n");
	}else{
		printf("khong phai la 3 canh tam giac.\n");
	}
	return 0;
}
