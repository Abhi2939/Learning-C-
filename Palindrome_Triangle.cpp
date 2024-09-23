#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    int space =1;
    int start =1;
    
    int row =1;
    while(row<=n){

        int col =1;
        space = n -row;
        start = row-1;
        
        while(space){

            cout << " ";
            space --;
        }

        while(col<=row){
            cout << (row+col-1);
            col ++;
        }
         while(start){
            cout << start+row-1;
            start--;
        }
        cout << endl;
        row ++;

    }


    return 0;
}