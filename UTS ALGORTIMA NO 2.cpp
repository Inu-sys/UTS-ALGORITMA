#include <iostream>
using namespace std;

int main(){
    int size = 6;

    for (int row = 1; row <= size; row++) {
            for (int col = 1; col <= row; col++){
                    cout << "* ";
            }
            cout << "\n";
    }
}
