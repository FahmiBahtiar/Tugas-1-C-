#include <iostream>

using namespace std;

struct Hitung
{
    int persegiPanjang (int panjang,int lebar)
    {
        return panjang*lebar;
    }
    int lingkaran (int r)
    {
        return (22 * r * r)/7;
    }
    float kerucut (int phi,int r,int t)
    {
        return (1 * phi * (r*r)*t)/3;
    }
    float bola (int phi, int r)
    {
        return (4 * phi * (r*r*r))/3;
    }
} ;

int main()
{
//With Member
    Hitung rumus;

    cout << "Luas Persegi Panjang Adalah : "<< rumus.persegiPanjang(5,3) << endl;
    cout << "Luas Lingkaran Adalah : "<< rumus.lingkaran(4) << endl;
    cout << "Volume Kerucut Adalah : "<< rumus.kerucut(3.14, 6, 10) << endl;
    cout << "Volume Bola Adalah : "<< rumus.bola(3.14, 4) << endl;
}
