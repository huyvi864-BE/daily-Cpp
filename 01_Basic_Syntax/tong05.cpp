#include<iostream>

using namespace std;

int main() {
	int n;
    cin >> n;
    int res = 0;
    for (int i =1; i <=n; i++){
        if (n %i ==0){
            res +=1;
        }
    }
    cout << res;
	return 0;
}