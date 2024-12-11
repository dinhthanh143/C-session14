#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
	char string[100]="Hello kitty";
	char temp[100];
	int i;
	int size=strlen(string);
	int j=size-1;	
	for(i=0;i<size/2;i++){
		temp[0]=string[j];
		string[j]=string[i];
		string[i]=temp[0];
		j--;
		
}

for(i=0;i<strlen(string);i++){
 printf("%c ", string[i]);	
}

   return 0;
}

