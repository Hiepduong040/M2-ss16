#include <stdio.h>
#include <stdlib.h>

struct SinhVien {
    char ho_ten[50];
    int tuoi;
    char so_dien_thoai[20];
    char email[50];
};

int main() {
    int so_luong_sv;
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &so_luong_sv);

    struct SinhVien *danh_sach_sv = malloc(so_luong_sv * sizeof(struct SinhVien));

    for (int i = 0; i < so_luong_sv; i++) {
        printf("\nNhap thong tin cho sinh vien thu %d:\n", i + 1);

        printf("Ho va ten: ");
        scanf(" %[^\n]s", danh_sach_sv[i].ho_ten);

        printf("Tuoi: ");
        scanf("%d", &danh_sach_sv[i].tuoi);

        printf("So dien thoai: ");
        scanf(" %[^\n]s", danh_sach_sv[i].so_dien_thoai);

        printf("Email: ");
        scanf(" %[^\n]s", danh_sach_sv[i].email);
    }

    FILE *file = fopen("students.txt", "w");
    if (file == NULL) {
        printf("Khong the mo file de ghi");
        return 1;
    }

    for (int i = 0; i < so_luong_sv; i++) {
        fprintf(file, "%s\n%d\n%s\n%s\n\n", danh_sach_sv[i].ho_ten, danh_sach_sv[i].tuoi, danh_sach_sv[i].so_dien_thoai, danh_sach_sv[i].email);
    }

    fclose(file);

    free(danh_sach_sv); //??

    return 0;
}
