#include <iostream>

using namespace std;


struct sepeda
{
    string Merk = "Polygon";
    string Type = "Sepeda Gunung";
    string Harga = "2.000.000";
    int Tahun = 2013;
};

int main()
{
sepeda detailSpd;

cout<< detailSpd.Merk <<endl;
cout<< detailSpd.Type <<endl;
cout<< detailSpd.Tahun <<endl;
cout<< detailSpd.Harga <<endl;
}
