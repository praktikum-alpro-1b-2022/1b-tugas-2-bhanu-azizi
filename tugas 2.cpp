#include <iostream>
using namespace std;

int main()
{
    cout << "Bhanu Azizi" << endl ;
    cout << "1B Informatika" << endl;
    cout << "2210631170013" << endl;
    cout << endl;
    cout << "TUGAS 2" << endl;
    cout << "Menghitung Rumus Luas Bangun Datar Yang Dimasukkan Oleh Pengguna" << endl;
    cout << endl;

    float sisi,luas_persegi;
    cout << "* Persegi" << endl;
    cout << "Masukkan Sisi: ";
    cin >> sisi;

    luas_persegi = sisi*sisi;
    cout << "Luas Persegi : " << luas_persegi << endl;
    cout << endl;

    float panjang,lebar,luas_persegipanjang;
    cout << "* Persegi Panjang" << endl;
    cout << "Masukkan Panjang : ";
    cin >> panjang;
    cout << "Masukkan Lebar : ";
    cin >> lebar;

    luas_persegipanjang = panjang*lebar;
    cout << "Luas Persegi Panjang : " << luas_persegipanjang << endl;
    cout << endl;

    float alas_segitiga, tinggi_segitiga, luas_segitiga;
    cout << "* Segitiga" << endl;
    cout << "Masukkan Alas Segitiga : ";
    cin >> alas_segitiga;
    cout << "Masukkan Tinggi Segitiga : ";
    cin >> tinggi_segitiga;

    luas_segitiga = 0.5*alas_segitiga*tinggi_segitiga;
    cout << "Luas Segitiga : " << luas_segitiga << endl;
    cout << endl;

    float sisi_a, sisi_b, tinggi_trapesium, luas_trapesium;
    cout << "* Trapesium" << endl;
    cout << "Masukkan Sisi a : ";
    cin >> sisi_a;
    cout << "Masukkan Sisi b : ";
    cin >> sisi_b;
    cout << "Masukkan Tinggi Trapesium  = ";
    cin >> tinggi_trapesium;

    luas_trapesium = 0.5*(sisi_a+sisi_b)*tinggi_trapesium;
    cout << "Luas Trapesium : " << luas_trapesium << endl;
    cout << endl;

    float alas_jajargenjang,tinggi_jajargenjang,luas_jajargenjang;
    cout << "* Jajar Genjang" << endl;
    cout << "Masukkan Alas : ";
    cin >> alas_jajargenjang;
    cout << "Masukkan Tinggi : ";
    cin >> tinggi_jajargenjang;

    luas_jajargenjang=alas_jajargenjang*tinggi_jajargenjang;
    cout << "Luas Jajar Genjang : " << luas_jajargenjang<< endl;
    cout << endl;

    float diagonal1,diagonal2,luas_Belahketupat;
    cout << "* Belah Ketupat" << endl;
    cout << "Masukkan Diagonal 1 : " ;
    cin >> diagonal1;
    cout << "Masukkan Diagonal 2 : " ;
    cin >> diagonal2;

    luas_Belahketupat = 0.5*diagonal1*diagonal2;
    cout << "Luas Belah Ketupat : " << luas_Belahketupat<< endl;
    cout << endl;

    float diagonal1LL,diagonal2LL,luas_LayangLayang;
    cout << "* Layang Layang" << endl;
    cout << "Masukkan Diagonal 1 : " ;
    cin >> diagonal1LL;
    cout << "Masukkan Diagonal 2 : " ;
    cin >> diagonal2LL;

    luas_LayangLayang=0.5*diagonal1LL*diagonal2LL;
    cout << "Luas Layang Layang : " << luas_LayangLayang << endl;
    cout << endl;

    float phi,r,luas_lingkaran;
    cout << "* Lingkaran" << endl;
    cout << "Masukkan Jari-Jari : ";
    cin >> r;

    phi=3.14;
    luas_lingkaran = phi*r*r;
    cout << "Luas Lingkaran : " << luas_lingkaran << endl;


}
