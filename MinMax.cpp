#include<iostream>
#include <climits>
using namespace std;

int getMin(int num[],int n){

    int min = INT_MAX;
    for(int i =0; i<n;i++){

        // var = min(var,array);
        if (num[i] < min){
            min = num[i];
        }
    }
    return min;
}

int getMax(int num[],int n){

    int max = INT_MIN;
    for(int i =0; i<n;i++){

        // var = max(var,array);
        if (num[i] > max){
            max = num[i];
        }
    }
    return max;
}

int main(){

    int size;
    cin >> size;

    int num[100];

    for (int i =0;i<=size;i++) {

        cin >> num[i];
    }

    cout << "Max value is : " << getMax(num,size);
    cout << "Min value is : " << getMin(num,size);


    return 0;
}