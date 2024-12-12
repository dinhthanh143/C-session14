#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
char string[100]="hello kitty";
int size=strlen(string);
char temp;
int i;
printf("moi nhap ki tu: ");
scanf("%c", &temp);
int count=0;
for(i=0;i<size;i++){
	if (string[i]==temp){
		count++;
	}
}


printf("ki tu xuat hien %d lan trong chuoi", count);

   return 0;
}

