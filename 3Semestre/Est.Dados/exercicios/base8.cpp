#include <iostream>
#include <vector>
using namespace std;

void base8(vector<int> div){
	
	while(div.size()%3=0){
		div.insert(div.begin(), 0);
	}
	
	for(int i=0;i=div.size();i+=3){
	vector <vector<int>> grupos;
		for(int j=0;j<3;j++){
			grupo.push_back(div[i+j]);
		}
	grupos.push_back(grupo);
	}
	
	for(int i=0;i=div.size();i++){
		for(int j=0;j<3;j++){
			cout << grupos[i][j];
		}
		cout << "	";
	}
}
