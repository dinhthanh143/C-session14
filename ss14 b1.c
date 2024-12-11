#include<stdio.h>
#include<string.h>
int main(){
char string[100];

printf("moi nhap chuoi: ");
fgets(string,sizeof(string)/sizeof(char),stdin);
int size=strlen(string);
printf("%s\n do dai:%d", string,size);
   return 0;
}

