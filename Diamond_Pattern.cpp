#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int row =1;

    while(row<=n){
        int space = n -row;
        int col = 1;
        int star =1;
        star = row-1;
        while(space){
            cout << " ";
            space --;
        }
        while(col <=row){
            cout << "*";
            col ++;
        }
        
        while(star){
            cout << "*";
            star--;

        }
        cout << endl;
        row ++;

    }
    row = n-1;
    while(row >=1){
        int space = n-row;
        int col =1;
        int star = row-1;
        while(space){
            cout << " ";
            space --;
        }
        while(col<=row){
            cout << "*";
            col ++;
        }
        while(star){
            cout << "*";
            star --;
        }
        cout << endl;
        row--;

    }

    return 0;
}