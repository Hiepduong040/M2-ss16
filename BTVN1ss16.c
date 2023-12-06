#include<stdio.h>
int main(){
	FILE *filePointer;
	char buffer[1000];
	filePointer = fopen("C:\\Users\\Admin\\Desktop\\bt01.txt","w");
	printf("Nhap noi dung ban muon ghi vao file:");
	fgets(buffer, sizeof(buffer), stdin);
	fputs(buffer, filePointer);
	fclose(filePointer);
	return 0;
}
