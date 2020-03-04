#include <stdio.h>

typedef struct {
		int ngay, thang, nam;
	} NGAYTHANGNAM;

int maxDate[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int kiemTraNamNhuan (int nam) {
	if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0))
		return 1;
	
	return 0;
}

int kiemTra (NGAYTHANGNAM a) {
	if (a.thang < 1 || a.thang>12)
		return 0;
	if (a.nam < 0)
		return 0;
	int ngay = maxDate [a.thang];
	if (kiemTraNamNhuan(a.nam)) {
		ngay = 29;
	} 
	if (a.ngay < 1 || a.ngay > ngay) 
		return 0;
	return 1;
}

int  ngayMai (NGAYTHANGNAM a, NGAYTHANGNAM* nxt) {
	if (!kiemTra(a)) {
		return 0;
	}
	
	a.ngay ++;
	int ngay = maxDate[a.thang];
	if (kiemTraNamNhuan(a.nam)) {
		ngay = 29;
	}	
	
	if (a.ngay > ngay) {
		a.ngay = 1;
		a.thang ++;
	}
	if (a.thang > 12) {
		a.thang = 1;
		a.nam++;
	}
	
	*nxt = a;
	return 1;
}

int main () {
	int ngay, thang, nam;
	printf ("Nhap ngay, thang, nam = ");
	scanf ("%d %d %d", &ngay, &thang, &nam);
	NGAYTHANGNAM a, nxta;
	a.ngay = ngay;
	a.thang = thang;
	a.nam = nam;
	
	if (!ngayMai(a, &nxta)) {
		printf ("Ngay nhap vao khong hop le");
	} else {
		printf ("Ngay mai cua ngay vua nhap la: %d - %d - %d", nxta.ngay, nxta.thang, nxta.nam);
	}
}
