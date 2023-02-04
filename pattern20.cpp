#include<iostream>
using namespace std;

int main(){

    // stars spaces stars

    int rows;
    cin >> rows;

    for(int i = 0; i < rows; i++){
        // stars
        for(int j = 0; j < i + 1; j++){
            cout << "*";
        }
        //spaces
        for(int j = 0; j < 2*rows - 2*(i+1); j++){
            cout << " ";
        }
        // stars
        for(int j = 0; j < i + 1; j++){
            cout << "*";
        }
        cout << endl;
    }

    for(int i = 0; i < rows-1; i++){

        // stars
        for(int j = 0; j < rows-i-1; j++){
            cout << "*";
        }
        // spaces
        for(int j = 0; j < 2*(i+1); j++){
            cout << " ";
        }
        // stars
        for(int j = 0; j < rows-i-1; j++){
            cout << "*";
        }
        cout << endl;
    }

    

}