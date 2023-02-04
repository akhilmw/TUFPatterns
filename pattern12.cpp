#include<iostream>
using namespace std;

int main(){

    int rows;
    cin >> rows;

    for(int i = 0 ; i < rows; i++){
        for(int j = 0; j <=i; j++){
            cout << j+1 << " ";
        }
        for(int j = 0; j < 2*rows - (i+1)*2; j++){
            cout << "  ";
        }
        for(int j = i+1; j > 0; j--){
            cout << j << " ";
        }
        cout << endl;
    }
}