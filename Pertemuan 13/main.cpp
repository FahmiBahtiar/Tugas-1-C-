#include <iostream>

using namespace std;

struct PersegiPanjang
{
    int panjang;
    int lebar;

    int luas()
    {
        return panjang * lebar;
    }
};

struct Lingkaran
{
    int r;

    int luas()
    {
        return (22 * r * r)/7;
    }
};

struct Kerucut
{
    float phi;
    float r;
    float t;

    float volume()
    {
        return (1 * phi * (r*r)*t)/3;
    }
};

struct Bola
{
    float phi;
    float r;

    float volume()
    {
        return (4 * phi * (r*r*r))/3;
    }
};


typedef struct Hitung
{
public:
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
} Hitung;

//========= Latihan 2 Sepeda =========

typedef struct sepeda
{
    string Merk = "Polygon";
    string Type = "Sepeda Gunung";
    string Harga = "2.000.000";
    int Tahun = 2013;
} Sepeda;



int main()
{
//Persegi Panjang
    PersegiPanjang Ppanjang;
    Ppanjang.panjang = 10;
    Ppanjang.lebar = 12;
    int luasPersegiPanjang = Ppanjang.luas();
    cout<<"Luas Persegi Panjang Adalah : "<<luasPersegiPanjang<<endl;

//Lingkaran
    Lingkaran lingkaran;
    lingkaran.r = 14;
    int luasLingkaran = lingkaran.luas();
    cout<<"Luas Lingkaran Adalah : "<<luasLingkaran<<endl;

//Kerucut
    Kerucut vKerucut;
    vKerucut.phi = 3.14;
    vKerucut.r = 14;
    vKerucut.t = 10;
    float volumeKerucut = vKerucut.volume();
    cout<<"Volume Kerucut Adalah : "<<volumeKerucut<<endl;

//Bola
    Bola vbola;
    vbola.phi = 3.14;
    vbola.r = 14;
    int volumeBola = vbola.volume();
    cout<<"Volume Bola Adalah : "<<volumeBola<<endl;


//With Member
    Hitung rumus;

    cout << "Luas Persegi Panjang Adalah : "<< rumus.persegiPanjang(5,3) << endl;
    cout << "Luas Lingkaran Adalah : "<< rumus.lingkaran(4) << endl;
    cout << "Volume Kerucut Adalah : "<< rumus.kerucut(3.14, 6, 10) << endl;
    cout << "Volume Bola Adalah : "<< rumus.bola(3.14, 4) << endl;



// Latihan 2 Sepeda

Sepeda detailSpd;

cout<< detailSpd.Merk <<endl;
cout<< detailSpd.Type <<endl;
cout<< detailSpd.Tahun <<endl;
cout<< detailSpd.Harga <<endl;
}
