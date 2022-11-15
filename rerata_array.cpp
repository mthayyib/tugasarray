#include <iostream>
using namespace std;

int main() {
    int x[6], i;
    float jumlah, u;

    //baca nilai
    for (i = 0; i < 6; i++)
    {
        cout << "Masukkan nilai ke-" << i << ": ";
        cin >> x[i];
    }

    //cetak nilai x[i]
    for (i = 0; i < 6; i++)
    {
        cout<<"Data ke-"<<i<<": "<<x[i]<<endl;
    }
    
    //hitung rata-rata
    jumlah = 0;
    for (i = 0; i < 6; i++)
    {
        jumlah = jumlah + x[i];
    }
    u = jumlah / 6;
    cout << "rata2: " << u << endl;

    return 0;
}