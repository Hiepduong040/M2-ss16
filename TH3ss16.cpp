#include<stdio.h>
int main(){
	FILE *taptin = NULL;
	const int SO_KY_TU_TOI_DA = 1000;
	char str[SO_KY_TU_TOI_DA] = "";
	taptin = fopen("test.txt","r");
	if(taptin != NULL)
	{
		fgets (str, SO_KY_TU_TOI_DA, taptin);
		printf("%s", str);
		fclose (taptin);
	}
	return 0;
}
