#include<iostream>
#include<algorithm>
using namespace std;

// Nghia-sama lam Nhap Mang
void NhapMang(long a[], long &n){
    for ( long i=0; i<n; i++){
        cin >> a[i];
    }
}
// Thang lam Xuat Mang
void XuatMang(long a[], long n) {
    for (long i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}

//f sx tang (true), sx giam (false)
void SapXepTH(long a[], long bd, long kt, long k = true) {
    
}
bool sxgiam(long i, long j) { return (i > j); }
bool sxtang(long i, long j) { return (i < j); }

// Khoa lam ket qua
long KetQua(long a[], long n, long k) {
    long kq = a[0];
    for (long i = 1; i < n; i++) {
        if (k > 0) {
            kq += a[i];
            k--;
        }
        else kq -= a[i];
    }
    return kq;
}

int main () {

    int k, n;
    int A[100];
    long sum;

    // Ai sửa phần nào thì chú thích phần đó tên của mình với
    return 0;
}