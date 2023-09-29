#include <stdio.h>
#include <string.h>
int main(){
	char str[100];	
	int state=0;
	printf("Enter the input string");
	scanf("%s",str);
	int len = strlen(str);
	for(int i=0; i<len; i++){
		if(str[i]!='a' && str[i]!='b' && str[i]!='c'){
			state=-1;
			break;		
		}
		if(state==0){
			state+= str[i]=='a';
		}
		else if(state==1){
			if(str[i]=='b')
				state+=1;			
			else if(str[i]=='c')
				state-=1;
		}
		else if(state==2){
			if(str[i]=='b')
				state-=2;			
			else if(str[i]=='c')
				state+=1;
			else 
				state-=1;
		}
	}
	if(state==3)
		printf("The string is accepted");
	
	else if(state==-1)
		printf("The string is invalid");
	
	else
		printf("\nThe string not contains any substring abc\n");
	
}
