#include<stdio.h>
int main(){
	int a,b;
	printf("nhap so thu nhat: ");
	scanf("%d",&a);
	printf("nhap so thu hai: ");
	scanf("%d",&b);
	
	while(a!=b){
		if(a>b){
			a=a-b;
		}else{
			b=b-a;
		}	
}
	printf("uoc chung lon nhat cua 2 so la: %d",a);
	
	return 0;
	}
