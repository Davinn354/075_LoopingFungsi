#include <iostream>
using namespace std;

int main()
{
    int i;
    int arr[5];

    for(i = 0; i < 5; i++ )
    {

        cout << i << " : " << " Davin " << endl;
    }

    for ( i = 0; i < 5; i++){
        cout << "Masukan Bilangan = ";
        cin>> arr[i];
    }

    for (i = 0; i < 5; i++) {
        cout << " Bilagan ke - " << i << " : " <<  arr[i] << endl;
    }

}