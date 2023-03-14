/*
Fahmi Bahtiar Adi Nugroho
A11.2022.14270


*/


#include <iostream>

using namespace std;

void copyright(string nama, string kelas){
    cout<<"===========COPYRIGHT==========="<<endl;
    cout<<nama<<endl;
    cout<<kelas<<endl;
    cout<<"===========*********==========="<<endl;

}

int pertambahan (int a, int b)
{
    int tambah  = a + b;

    return tambah;
}

int pengurangan(int a, int b)
{
    int kurang = a - b;

    return kurang;
}

int perkalian (int a, int b)
{
    int kali = a * b;

    return kali;
}

void totalRata (float array[], int jumlah)
{
    float total;
    for(int i = 0; i<jumlah; i++)
    {
        total += array[i];
    }
    total /=  jumlah;

    cout<<"Rata - Rata : "<<total<<endl;
    cout<<"Jumlah Array : "<<jumlah<<"\n\n\n"<<endl;

}

int main()
{
    int a, b, input;
    a = 10;
    b = 12;
    input = 3;

    //Penjumlahan
    cout<<"Hasil pertambahan dari " << a <<" + "<< b <<" = "<<pertambahan(a, b)<<endl;

    //Pengurangan
    cout<<"Hasil pengurangan dari " << a <<" - "<< b <<" = "<<pengurangan(a, b)<<endl;

    //Perkalian
    cout<<"Hasil perkalian dari " << a <<" x "<< b <<" = "<<perkalian(a, b)<<endl;

    float array[input];
    cout<<"Masukkan "<<input<<" Element yang akan di input"<<endl;

    for(int i = 0; i < input; i++){
        cout<<"Masukkan bilangan ke - "<< i << " : ";
        cin>>array[i];
    }

    totalRata(array, input);
    copyright("Fahmi Bahtiar Adi Nugroho", "A11.2022.14270");
    return 0;
}
