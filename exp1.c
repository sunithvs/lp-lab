#include <stdio.h>
#include <string.h>
int main(){
	char str[100];	
	int state=1;
	printf("Enter the input string");
	scanf("%s",str);
	int len = strlen(str);
	for(int i=0; i<len; i++){
		if(str[i]!='0' && str[i]!='1'){
			state=-1;
			break;		
		}
		if(state==1){
			state+= str[i]=='0';
		}
		else if(state==2){
			if(str[i]=='1')
				state-=1;			
			else
				state+=1;
		}
	}
	if(state==3)
		printf("The string is accepted");
	
	else if(state==-1)
		printf("The string is invalid");
	
	else
		printf("\nThe string not contains any substring 00\n");
	
}
