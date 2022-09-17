#include<iostream>
#include<algorithm>
using namespace std;

void NhapMang(long a[], long& n) {
    for (long j = 0; j < n; j++) {
        cin >> a[j];
    }
}

void XuatMang(long a[], long n) {
    for (long i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}
//f sx tang (true), sx giam (false)
void SapXepTH(long a[], long bd, long kt, long k = true) {
    for (long i = bd; i < kt; i++) {
        for (long j = i + 1; j < kt; j++) {
            if (a[i] > a[j] & k) {
                long t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
            else if (a[i] < a[j] & k == false) {
                long t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
}
bool sxgiam(long i, long j) { return (i > j); }
bool sxtang(long i, long j) { return (i < j); }

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

int main() {
    long a[1000000], n, k;
    cin >> n >> k;
    NhapMang(a, n);
    /*
    long mid = n/2;
    SapXepTH(a, 1, n, false);

    if(n%2 !=0) mid++;
    sort(a+1, a+n, sxtang);
    */
    sort(a + 1, a + n, sxgiam);
    //XuatMang(a, n);
    cout << KetQua(a, n, k);

    return 0;
}

//Khoa làm nè