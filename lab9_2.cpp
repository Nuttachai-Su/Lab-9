#include<iostream>
using namespace std;

//Write the function printO() here

char printO(int N,int M){
	int line = 1, NumM = 1;
	if (N == 0) cout << "Invalid input\n";
	if (M < 0) cout << "Invalid input\n";
	while (line <= N){
		while (NumM <= M){
			cout << "O";
			NumM++;
			}
		NumM = 1;
		cout << "\n";
		line++;
	}
	return 0;
}

int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";
	
	return 0;
}
