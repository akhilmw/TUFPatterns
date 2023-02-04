#include<iostream>
using namespace std;

int main(){

    int rows;
    cin >> rows;

    // sapces stars spaces

    for(int i = 0; i < rows; i++){
        
        // spaces
        for(int j = 0; j < rows - i - 1; j++){
            cout << " ";
        }
        
        // stars
        for(int j = 0; j < 2*i + 1; j++){
            cout << "*";
        }

        // spaces
        for(int j = 0; j < rows - i - 1; j++){
            cout << " ";
        }
        
        cout << endl;
    }
}