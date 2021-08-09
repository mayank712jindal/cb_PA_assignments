#include<iostream>
using namespace std;
int main() {
	int n,i;
	cin >> n;
	int temp=n-1;
	while(temp>=0){
		
		for(i=0;i<temp;i++)
		cout << " ";
		for(i=0;i<n;i++){
			if(temp==n-1 || temp ==0)
			cout << "*";
			else
			{
				if(i==0 || i==n-1)
				cout << "*";
				else
				cout << " ";
			}
			if(i==n-1)
			cout << endl;
		}

		temp--;
	}
	return 0;
}