/*
Fahmi Bahtiar Adi Nugroho
A11.2022.14270

*/


#include <iostream>

using namespace std;


int penjumlahan (int num);
int pengurangan (int num);
int perkalian (int num);
int pembagian (int num);
int faktorial(int num);
int fibonaci (int num);
int pangkat (int a, int b);







int main()
{
    int input, a, b;

    //Penjumlahan
    cout<<"Masukkan Angka Penjumlahan : ";
    cin>>input;
    cout<<"Hasil Penjumlahan : "<<penjumlahan(input)<<endl;
    cout<<"Hasil Pengurangan : "<<pengurangan(input)<<endl;
    cout<<"Hasil Perkalian : "<<perkalian(input)<<endl;
    cout<<"Hasil Pembagian : "<<pembagian(input)<<endl;
    cout<<"Hasil Faktorialnya : "<<faktorial(input)<<endl;
    cout << "Fibonaci Dari" << input << " : ";
    for(int i=0; i<=input ; i++)
    {
        cout << fibonaci(i) << " ";
    }
    cout << endl;

    cout<<"==========AREA PERPANGKATAN=========="<<endl;
    cout<<"Masukkan Angka Pangkat Pertama : ";
    cin>>a;
    cout<<"Masukkan Angka Pangkat Kedua : ";
    cin>>b;
    cout<<"Hasil Perpangkatan Dari : "<<a<<" Dan "<<b<< " Adalah " <<pangkat(a,b)<<endl;






    return 0;
}


int penjumlahan(int num)
{
    if(num == 1)
    {
        return 1;
    }
    else
    {
        return num + penjumlahan(num - 1);
    }
}

int pengurangan(int num)
{
    if(num == 1)
    {
        return 1;
    }
    else
    {
        return num - pengurangan(num - 1);
    }
}

int perkalian(int num)
{
    if(num == 1)
    {
        return 1;
    }
    else
    {
        return num * perkalian(num - 1);
    }
}
int pembagian(int num)
{
    if(num == 1)
    {
        return 1;
    }
    else
    {
        return num / pembagian(num - 1);
    }
}

int pangkat(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    else if (b > 0)
    {
        return a * pangkat(a, b - 1);
    }
    else
    {
        return 1 / (a * pangkat(a, - b - 1));
    }
}

int faktorial(int num)
{
    if (num > 1)
    {
        return num + faktorial(num - 1);
    }

    else
    {
        return 1;
    }
}

int fibonaci(int num)
{
    if(num==1)
        return 1;
    else if (num==0)
        return 0;
    else
        return fibonaci(num-1)+fibonaci(num-2);
}
