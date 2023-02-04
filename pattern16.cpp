#include<iostream>
using namespace std;

int main(){

    int rows;
    cin >> rows;

    for(int i = 0; i < rows; i++){
        for(int j = 0 ; j <= i; j++){
            cout << char(i+65);
        }
        cout << endl;
    }

}