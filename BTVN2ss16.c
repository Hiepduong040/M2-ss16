#include<stdio.h>
int main(){
	int *filePointer;
	char buffer[50];
	filePointer = fopen("C:\\Users\\Admin\\Desktop\\bt01.txt","r");
	fread(buffer, 1, sizeof(buffer), filePointer);
	printf("Du lieu doc duoc tu tep tin: %s", buffer);
	fclose(filePointer);
}
