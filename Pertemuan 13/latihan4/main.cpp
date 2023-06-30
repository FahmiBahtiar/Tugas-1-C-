#include <iostream>

using namespace std;

struct Mahasiswa
{
    string nim;
    string nama;
    string jurusan;
    int tahunLulus;
};

int main()
{
    // Array Statis
    const int jumlahMahasiswa = 2;
    Mahasiswa mahasiswaStatis[jumlahMahasiswa];

    cout << "Input data mahasiswa (Array Statis):" << endl;
    for (int i = 0; i < jumlahMahasiswa; ++i)
    {
        cout << "Mahasiswa " << i + 1 << ":" << endl;
        cout << "NIM: ";
        cin >> mahasiswaStatis[i].nim;
        cout << "Nama: ";
        cin>> mahasiswaStatis[i].nama;
        cout << "Jurusan: ";
        cin>>mahasiswaStatis[i].jurusan;
        cout << "Tahun Lulus: ";
        cin >> mahasiswaStatis[i].tahunLulus;
    }

    cout << endl;
    cout << "Data mahasiswa (Array Statis):" << endl;
    for (int i = 0; i < jumlahMahasiswa; ++i)
    {
        cout << "Mahasiswa " << i + 1 << ":" << endl;
        cout << "NIM: " << mahasiswaStatis[i].nim << endl;
        cout << "Nama: " << mahasiswaStatis[i].nama << endl;
        cout << "Jurusan: " << mahasiswaStatis[i].jurusan << endl;
        cout << "Tahun Lulus: " << mahasiswaStatis[i].tahunLulus << endl;
        cout << endl;
    }

    // Array Dinamis
    int jumlahMahasiswaDinamis;
    cout << "Input jumlah mahasiswa (Array Dinamis): ";
    cin >> jumlahMahasiswaDinamis;

    Mahasiswa* mahasiswaDinamis = new Mahasiswa[jumlahMahasiswaDinamis];

    cout << "Input data mahasiswa (Array Dinamis):" << endl;
    for (int i = 0; i < jumlahMahasiswaDinamis; ++i)
    {
        cout << "Mahasiswa " << i + 1 << ":" << endl;
        cout << "NIM: ";
        cin >> mahasiswaDinamis[i].nim;
        cout << "Nama: ";
        cin>>mahasiswaDinamis[i].nama;
        cout << "Jurusan: ";
        cin>> mahasiswaDinamis[i].jurusan;
        cout << "Tahun Lulus: ";
        cin >> mahasiswaDinamis[i].tahunLulus;
    }

    cout << endl;
    cout << "Data mahasiswa (Array Dinamis):" << endl;
    for (int i = 0; i < jumlahMahasiswaDinamis; ++i)
    {
        cout << "Mahasiswa " << i + 1 << ":" << endl;
        cout << "NIM: " << mahasiswaDinamis[i].nim << endl;
        cout << "Nama: " << mahasiswaDinamis[i].nama << endl;
        cout << "Jurusan: " << mahasiswaDinamis[i].jurusan << endl;
        cout << "Tahun Lulus: " << mahasiswaDinamis[i].tahunLulus << endl;
        cout << endl;
    }

}
