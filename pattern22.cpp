#include<iostream>
using namespace std;

int main(){

    int rows;
    cin >> rows;

    for(int i = 0; i < 2*rows - 1; i++){
        for(int j = 0 ; j < 2*rows - 1; j++){
            int top = i;
            int left = j;
            int right = 2*rows -2 - j;
            int bottom = 2*rows -2- i;
            cout << rows - min(min(top, left), min(right, bottom));
        }
        cout << endl;
    }
}