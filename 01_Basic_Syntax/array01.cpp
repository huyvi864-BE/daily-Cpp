#include<iostream>

using namespace std;

int main() {
    int a[10];
    int res=0;
    for (int i =0; i<10; i++){
        cin >> a[i];
    }
    for (int i =0; i< 10; i++){
        res += a[i];
    }
    cout << res;

    return 0;
}