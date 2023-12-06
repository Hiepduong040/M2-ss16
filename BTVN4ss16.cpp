#include<stdio.h>
int main(){
	FILE *filePointer;
	char buffer[100];
	filePointer = fopen("C:\\Users\\Admin\\Desktop\\bt3.txt", "r");
	int row =1;
	int size = fread(buffer, 1, sizeof(buffer), filePointer);
	for(int i= 0; i< size; i++){
		if(filePointer == '/0'){
			row++;	
		}else{
			
		}
	}
		printf("so dong cua file la:%d\n", row);
}
