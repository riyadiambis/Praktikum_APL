#include<iostream>
using namespace std;

int main(){
    string nama[5] = {"riyadi", "kiki", "emi", "ridwan", "baco"};
    for(int i = 0; i < 5; i++){
        cout << nama[i] << endl;  // Mengubah nama[0] menjadi nama[i]
    }
    return 0;  // Menambahkan return statement
}