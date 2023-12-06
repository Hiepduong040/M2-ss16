#include <stdio.h>

int demSoDong(const char *file_path) {
    char buffer[500];
    FILE *filePointer = fopen(file_path, "r");

    if (filePointer == NULL) {
        printf("Khong the mo file de doc.\n");
        return -1;
    }

    int row = 0;
    while (fgets(buffer, 500, (FILE*)filePointer)) {
        row++;
    }

    fclose(filePointer);
    return row;
}

int main() {
	FILE *filePointer;
	char buffer[100];
    int soDong = demSoDong("bt3.txt");
    printf("So dong cua file la:%d\n", soDong);
    filePointer = fopen("C:\\Users\\Admin\\Desktop\\bt3.txt","r");
    fread(buffer, 1, sizeof(buffer), filePointer);
    printf("Noi dung cua van ban la : \n%s", buffer);
    return 0;
}
