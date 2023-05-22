/*
Nama : Fahmi Bahtiar Adi Nugroho;
NIM : a11.2022.14270;
*/


#include <iostream>

using namespace std;

void minArray(int arr[], int panjangArray);
bool ganjil (int a);
void bubbleSort(int arr[], int panjangArray);
void insertionSort(int arr[], int panjangArray);


int main()
{
    int arr[]= {6,7,4,3,2};
    int panjangArray = (sizeof arr / sizeof arr[0]);

    minArray(arr, panjangArray);

    bubbleSort(arr, panjangArray);
    cout<<"BubbleSort :";
    for(int i = 0; i < panjangArray; i++)
    {
        cout<<arr[i];
    }
    cout<<endl;
    insertionSort(arr, panjangArray);
    cout<<"Insertion : ";
    for(int i = 0; i < panjangArray; i++)
    {
        cout<<arr[i];
    }

    return 0;
}

void minArray(int arr[], int panjangArray)
{
    int index;
    int minn = arr[0];
    for(int i = 0; i < panjangArray; i++)
    {
        if(!ganjil(arr[i]))
        {
            if(arr[i] < minn)
            {
                minn = arr[i];
                index = i;

            }

        }
    }
    cout<<"Bilangan Terkecil adalah "<<minn<<endl;
    cout<<"Index ke- "<<index<<endl;
}

bool ganjil (int a)
{

    return a% 2 == 1;
}




void bubbleSort(int arr[], int panjangArray)
{
    for(int i = 0; i < panjangArray - 1; i++)
    {
        for(int j = 0; j < panjangArray - i - 1; j++)
        {
            if( arr[j] < arr[j+1])
            {

                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

            }
        }
    }
}

void insertionSort(int arr[], int panjangArray)
{
    for(int i = 1; i < panjangArray; i++)
    {
        while(arr[i] > arr[i -1] && i > 0)
        {
            int temp = arr[i];
            arr[i] = arr[i - 1];
            arr[i - 1] = temp;
            i--;
        }
    }
}
