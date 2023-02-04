#include<iostream>
using namespace std;

int main(){
    
    int rows;
    cin >> rows;

    
    for(int i = 0; i < rows; i++){
        char ch = char(rows-1 + 65);
        for(int j = 0; j <= i; j++){
            cout << ch;
            ch--;
        }
        cout << endl;
    }
}