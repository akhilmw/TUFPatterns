#include<iostream>
using namespace std;

int main(){
    int rows;
    cin >> rows;

    // spaces chars spaces

    for(int i = 0; i < rows; i++){
        // spaces
        for(int j = 0; j < rows - i - 1; j++){
            cout << " ";
        }

        // chars
        char ch = 'A';
        int breakpoint = (2*i+1)/2;
        for(int j = 1; j <= 2*i + 1; j++){
            cout << ch;
            if(j <= breakpoint){
                ch++;
            }
            else{
                ch--;
            }
        }
        
        // spaces
        for(int j = 0; j < rows - i - 1; j++){
            cout << " ";
        }

        cout << endl;
    }
}