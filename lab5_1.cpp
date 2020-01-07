#include<iostream>
using namespace std;

int main(){
	int N;
	cout << "Enter the number of student: ";
	cin >> N;
	
	string name[N];
	int age[N],i;
	for(i = 0 ; i < N ; i++){
		cout << "Name of student = ";
		cin>>name[i];
	    cout << "Age of student = ";
		cin>>age[i];

	}
	
	
	int key;
	cout << "--------------------------------------\n";
	cout << "Enter an age to search: ";
	cin >> key;
	cout << "--------------------------------------\n";
	for ( i = 0; i < N; i++)
	{
	  if(key==age[i])
	  cout<<name[i]<<endl;
	}
	

	
	cout << "--------------------------------------\n";
	
	return 0;
}
