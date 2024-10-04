#include <iostream>
#include <math.h>
using namespace std;

int main (){
    int batas;

    cout << "Masukan Batas: ";
    cin >> batas;

    cout << "Bilangan Ganjil: " << endl;
    for (int i = 1; i <= batas; i++){
        if (i % 2 != 0){
                cout << i << "\n";
        }
    }
    cout << endl;


    cout << "Bilangan Genap: " << endl;
    for (int i = 1; i <= batas; i++){
            if (i % 2 == 0){
                    cout << i << "\n";
            }
    }

    return 0;
}

