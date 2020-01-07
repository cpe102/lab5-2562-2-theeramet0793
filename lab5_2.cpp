#include<iostream>
#include<string>
using namespace std;
//string str3;
int i=0,j=0;

string mixText(string str1,string str2){
	string str3;
	if(str1.size()!=str2.size()){
		str3="E";
	}
	else{
         for(i=0;i<str1.size();i++){
           str3=str3+str1[i];
		   str3=str3+str2[i];
		  }

		 } 
          
	
	
     return str3;
}



int main(){	
	cout << mixText("AAA","BBB") << "\n";
	cout << mixText("Hello","World") << "\n";
	cout << mixText("SOTUS","CHEER") << "\n";
	cout << mixText("1234","5678") << "\n";
	cout << mixText("6","9") << "\n";
	cout << mixText("XXXXXXX","YYY") << "\n";	
	cout << mixText("Y","XX") << "\n";	
	
	return 0;	
}
