#include<stdio.h>
char line[100];
int main (){
	int T;
	FILE * fin = fopen("input.txt", "r");
	fscanf(fin, "%d\n", &T);
	printf("�AŪ��FT: %d\n", T); 
return 0;
} 
