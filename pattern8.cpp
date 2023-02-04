#include<iostream>
using namespace std;

int main(){

    int rows;
    cin >> rows;

    for(int i = 0; i < rows; i++){
        // spaces;
        for(int j = 0; j <i; j++){
            cout << " ";
        }
        //stars
        for(int j = 0; j < 2*(rows-i)-1; j++){
            cout << "*";
        }
        //spaces
        for(int j = 0; j <i; j++){
            cout << " ";
        }
        cout << endl;
    }
}