#include<iostream>
using namespace std;

int main(){

    int rows;
    cin >> rows;

    int count = 1;
    for(int i= 0; i < rows; i++){
        for(int j = 0; j <=i; j++){
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
}