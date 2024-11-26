#include<stdio.h>
int main(){
	int a,b,UCLN,BCNN;
	printf("nhap so thu nhat: ");
	scanf("%d",&a);
	printf("nhap so thu hai: ");
	scanf("%d",&b);
    int temp=a*b;
	if(b==0){
	  printf("boi chung nho nhat khong xac dinh");
	  }else{
	  do{
	  	UCLN=b;
	  	b=a%b;
	  	a=UCLN;
	  	
		  }
		 
		 while(b!=0);
		  BCNN=(temp)/UCLN;
	  	printf("boi chung nho nhat cua 2 so la: %d",BCNN);
		  }
		  	
	  	
	return 0;
	}
