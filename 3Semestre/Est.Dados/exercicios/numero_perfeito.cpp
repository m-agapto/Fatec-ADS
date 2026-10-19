#include <iostream>
using namespace std;

int main(){
    int n,calc=0;
    cout << "digite o numero" << endl;
    cin >> n;
    for (int i=1;i<n;i++){
        if(n % i == 0){
            calc += i;
        }
    }
    if (calc==n){
        cout << n << "e um numero perfeito" << endl;
    }else{
        cout << n << "não e um numero perfeito" << endl;
    }

    return 0;
}