/*
{Program Kumpulan fungsi dan prosedur untuk menentukan isEven, isOdd,
    isFactor, maxN, minN, maxArray, minArray, isFound, dan swapN}

FAHMI BAHTIAR ADI NUGROHO
*/



#include <iostream>

using namespace std;

bool isEven (int x, int y);
bool isOdd (int x, int y);
bool isFactor(int x, int y);
int maxN(int x, int y);
int minN(int x, int y);
int maxArray(int z[]);
int minArray(int z[]);
bool isFound(int z[], int x, int y);
void swapN(int x, int y);

void boolPrintResult(int x, int y);
int hasil(int myarray[]);

int sizeArray;


int main()
{
    int x, y;

    cout<<"Masukkan angka X = ";
    cin>>x;
    cout<<"Masukkan angka Y = ";
    cin>>y;

    boolPrintResult(x, y);
    //maxN dan minN
    cout<<"Bilangan Terbesar Yaitu : "<<maxN(x,y)<<endl;
    cout<<"Bilangan Terkecil Yaitu : "<<minN(x,y)<<endl;


    int input;
    cout<<"Masukkan jumlah array yang akan di input = ";
    cin>>input;
    int z[input];
    sizeArray = sizeof(z)/sizeof(int);
    cout<<"Masukkan "<<input<<" Element yang akan di input"<<endl;

    for(int i = 0; i < input; i++)
    {
        cout<<"Masukkan bilangan ke - "<< i << " : ";
        cin>>z[i];
    }

    cout<<"Max Arraynya Yaitu :"<<maxArray(z)<<endl;
    cout<<"Min Arraynya Yaitu :"<<minArray(z)<<endl;



    cout<<"isFound : "<<isFound(z,x,y)<<" || ";
    if(isFound(z,x,y) == 1)
    {
        cout<<"Terdapat angka yang sama di dalam array"<<endl;
    }
    else
    {
        cout<<"Tidak ada angka yang sama di dalam array"<<endl;
    }

    swapN(x,y);

    return 0;
}


bool isEven(int x, int y)
{
    bool a = x % 2 == 0;
    bool b = y % 2 == 0;

    return a && b;
}

bool isOdd(int x, int y)
{
    bool a = x % 2 != 0;
    bool b = y % 2 != 0;

    return a && b;
}

bool isFactor(int x, int y)
{
    bool a = x % y == 0;
    bool b = x % y == 0;


    return a && b;
}

int maxN(int x, int y)
{
    int maxx;
    if(x > y)
    {
        maxx = x;
    }
    else
    {
        maxx = y;
    }
    return maxx;
}
int minN(int x, int y)
{
    int minn;
    if(x < y)
    {
        minn = x;
    }
    else
    {
        minn = y;
    }
    return minn;
}

int maxArray(int z[])
{
    int maxx = z[0];
    for(int i=0; i < sizeArray; i++)
    {
        if(z[i]>maxx)
        {
            maxx = z[i];
        }
    }
    return maxx;
}

int minArray(int z[])
{
    int minn = z[0];
    for(int i=0; i < sizeArray; i++)
    {
        if(z[i]<minn)
        {
            minn = z[i];
        }
    }
    return minn;
}

bool isFound(int z[], int x, int y)
{
    int foundOne = x;
    int foundTwo = y;
    bool isFound = false;
    for(int i=0; i< sizeArray; i++)
    {
        if(foundOne == z[i] || foundTwo == z[i] )
        {
            isFound = true;
        }
    }
    return isFound;
}

void swapN(int x, int y)
{
    int temp = x;
    int a = y;
    int b = x;

    cout<<"Hasil swap x dan y yaitu: X = "<<a<<" Y = "<<b<<endl;
}


void boolPrintResult(int x, int y)
{
    //Even And Odd
    if (isEven(x, y))
    {
        cout <<"[Cek Bilangan Ganjil Or Genap] Angka "<< x << " dan " << y << " Termasuk [isEven]" << endl;
    }
    else if (isEven(x, x) && isOdd(y, y))
    {
        cout <<"[Cek Bilangan Ganjil Or Genap] Angka "<< x <<" Termasuk [isEven], tetapi " << y << " Termasuk [isOdd]" << endl;
    }
    else if (isOdd(x, x) && isEven(y, y))
    {
        cout <<"[Cek Bilangan Ganjil Or Genap] Angka "<< x << " Termasuk [isOdd], tetapi " << y << " Termasuk [isEven]" << endl;
    }
    else
    {
        cout <<"[Cek Bilangan Ganjil Or Genap] Angka "<< x << " dan " << y << " Termasuk [isOdd]" << endl;
    }

    //isFactor
    if (isFactor(x, y))
    {
        cout <<"[Cek Bilangan Factor] Angka "<< x << " dapat di Faktorisasikan dengan " << y << " dan Termasuk [isFactor]" << endl;
    }
    else if(!isFactor(x, y))
    {
        cout <<"[Cek Bilangan Factor] Angka "<< x << " TIDAK dapat di Faktorisasikan dengan " << y << " dan BUKAN termasuk [isFactor]" << endl;
    }



}






