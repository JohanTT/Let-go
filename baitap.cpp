#include<iostream>
#include<algorithm>
using namespace std;

// Nghia-sama
void NhapMang(long A[], long &n){
    for ( long i=0; i<n; i++){
        cin>>a[i];
    }
}
//
void XuatMang(long a[], long n) {
    
}
//f sx tang (true), sx giam (false)
void SapXepTH(long a[], long bd, long kt, long k = true) {
    
}
// Tlinh lam cai nay
bool sxgiam(long i, long j) { return (i > j); }
bool sxtang(long i, long j) { return (i < j); }

//Khoa làm nè
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

    return 0;
}

