#include<iostream>
#include<string>

using namespace std;

string func1(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string func2(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	string b;
	if(y == func1(y)){
		b = "Yes";
	}
	else{ 
		b = "No";
	}
	return b;
}

string func3(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += tolower(x[i]);
		i++;
	}
	return y;	
}

int main(){
    cout << "Input text: ";
	string a;
	cin >> a;
    cout << "Reversed text: " <<func1(a)<< "\n";
    cout << "Palindrome: " <<func2(a);
    return 0;
}
