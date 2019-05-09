//Working with file
#include <stdio.h>
#include <conio.h>
#include <string.h>
#define MAX 50
struct sinh_vien
{
	char ma_so[10];
	char ho_ten[40];
	int tuoi;
	char dia_chi[80];
};
int nhap_mang_struct(struct sinh_vien *psv);
void xuat_struct(struct sinh_vien sv);
main()
{
	struct sinh_vien sv[MAX];
	int i=0,shs=0;
	char ma_so[10];
	printf("Chuong trinh thu mang struct\n");
	shs=nhap_mang_struct(sv);
	printf("Tong danh sach co %d sinh vien\n",shs);
	printf("Moi ban nhap MSSV can tim:\n");
	gets(ma_so);
	i=0;
	while (strcmp(sv[i].ma_so,ma_so)!=0 && i<shs)
	i++;
	if (i==shs)
	printf("MSSV nay ko ton tai!\n");
	else
	xuat_struct(sv[i]);
	getch();
}
int nhap_mang_struct(struct sinh_vien *psv)
{
	int n;
	printf("Xin moi nhap so sinh vien can nhap!:\n");
	scanf("%d",&n);
	for (int i=0;i<n;i++)
	{
		printf("Ma so sinh vien %d: ",i+1);
		gets(*psv[i].ma_so);
		printf("Ho ten sinh vien %d: ",i+1);
		gets(*psv[i].ho_ten);
		printf("Tuoi sinh vien %d: ",i+1);
		scanf("%d",(psv+i).tuoi);
		printf("Dia chi sinh vien %d: ",i+1);
		gets(*psv[i].dia_chi);
	}
	return n;
}
void xuat_struct(struct sinh_vien sv)
{
	printf("ma so: %s\n",sv.ma_so);
	printf("ho ten: %s\n",sv.ho_ten);
	printf("tuoi: %d\n",sv.tuoi);
	printf("dia chi: %s\n",sv.dia_chi);
}
