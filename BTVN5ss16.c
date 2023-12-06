#include<stdio.h>
int main(){
	FILE *filePointer1, *filePointer2, *filePointer3;
	char a,b;
	
	filePointer1 = fopen("C:\\Users\\Admin\\Desktop\\bt01.txt","r");
	filePointer2 = fopen("C:\\Users\\Admin\\Desktop\\bt3.txt","r");
	filePointer3 = fopen("C:\\Users\\Admin\\Desktop\\bt05.txt","w");
	while (a != EOF && b != EOF){
		a = fgetc(filePointer1);
		if (a != EOF){
			fputc(a,filePointer3);
		}
		b= fgetc(filePointer2);
		if (b != EOF){
			fputc(b,filePointer3);
		}
	}
	return 0;
}
