#include <stdio.h>
#include <string.h>
#include<ctype.h>
int main(){
	char str[100];	
	int state=0;
	printf("Enter the input string");
	scanf("%s",str);
	int len = strlen(str);
	for(int i=0; i<len; i++){
		if(str[i]!='_' && !isalnum(str[i])){
			state=-1;
			break;		
		}

		if(state==0){

			if( str[i]=='_' || isalpha(str[i]) ) 
					state+=1 ;
		}
	}
	if(state==1)
		printf("The string is  valid identifier");
	
	else if(state==-1)
		printf("The string is invalid");
	
	else
		printf("\nThe string not a valid identifier\n");
	
}
