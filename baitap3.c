# include <stdio.h>
int main(){
	int number,i,sum=0;
	printf("nhap mot so: ");
	scanf("%d",&number);
	if(number>0){
		for(i=1;i<=number;i++){
        sum=sum+i;
		}
        	printf("tong tat ca cac so ti mot den %d là: %d\n",i,sum);
	}else{
			printf("ko hop le");
	     }
	return 0;
	}
