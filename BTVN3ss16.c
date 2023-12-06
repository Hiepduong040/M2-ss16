#include<stdio.h>
int main(){
	FILE *filePointer;
	int row;
	char buffer[100];
	filePointer = fopen("C:\\Users\\Admin\\Desktop\\bt3.txt", "w");
	printf("So dong cua file la:");
	scanf("%d",&row);
	for(int i = 0; i < row ; i++)
	{
		printf("Nhap noi dung dong %d\n",i);
		scanf("%s",&buffer);
		fprintf(filePointer,"%s\n",buffer);
	}
		fclose(filePointer);
		filePointer = fopen("C:\\Users\\Admin\\Desktop\\bt3.txt", "r");
		fread(buffer,1,sizeof(buffer),filePointer);
		printf("Noi dung file la:\n%s",buffer);
		fclose(filePointer);
	return 0;
}
