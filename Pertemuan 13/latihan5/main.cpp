#include <iostream>

using namespace std;
typedef struct sepeda
{
    string Merk = "Polygon";
    string Type = "Sepeda Gunung";
    string Harga = "2.000.000";
    int Tahun = 2013;
} Sepeda;

int main()
{
Sepeda detailSpd;
Sepeda *pdetailSpd;
pdetailSpd = &detailSpd;


cout<< detailSpd.Merk <<endl;
cout<< detailSpd.Type <<endl;
cout<< detailSpd.Tahun <<endl;
cout<< detailSpd.Harga <<endl;
}
