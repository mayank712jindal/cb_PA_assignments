#include<iostream>
using namespace std;
int main() {
	int n,j=1;
	cin >> n;

	for(int i=0;i<n;i++){
		j=1;
		while(j<=n){
			if(j<=i+1)
			cout << j;
			else
			cout << "*";
			j++;
		}
		cout << endl;

		}

	
	return 0;
}