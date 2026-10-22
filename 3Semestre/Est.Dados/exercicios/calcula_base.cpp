#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,i=0;
    vector<int> div;

    cout << "digite o numero:" << endl;
    cin >> n;

    do{
        div.push_back(n%2);
        n = n/2;
    }while(n > 0);
     
    // base binaria
    for(int j= div.size()-1;j>=0;j--){
        cout << div[j];
    }

	return 0;
}
