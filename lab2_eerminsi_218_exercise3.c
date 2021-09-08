#include <stdio.h>
#include <ctype.h>
int main(){
	char var;
	printf("Enter a character: ");
	scanf("%c", &var);
	
	if(isalnum(var)){
		printf("%c is alphanumeric", var);
	}
	else{
		printf("%c is not alphanumeric", var);
	}
	return 0;
}
