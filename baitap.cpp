#include<iostream>
#include<algorithm>
using namespace std;

void NhapMang(long a[], long& n) {
    
}

void XuatMang(long a[], long n) {
    
}
//f sx tang (true), sx giam (false)
void SapXepTH(long a[], long bd, long kt, long k = true) {
    
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
    

    return 0;
}

//Khoa làm nè
