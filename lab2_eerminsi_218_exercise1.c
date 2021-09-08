#include <stdio.h>

int main(){
	int num;
	printf("Enter an integer: ");
	scanf("%d", &num);

	if(num%5==0 && num%7==0){
		printf("%d is the multiple", num);
	}
	else{
		printf("%d is not the multiple", num);
	}
	return 0;
}
