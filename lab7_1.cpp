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
	return y;	
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

int main()
{
  	    string txt1, txt2, txt3, txt4;
    cout << "Input text: ";
	    cin >> txt1;
	    
	    txt2 = func3(txt1);
    cout << "Reversed text: ";
	    txt3 = func1(txt1);
	    txt4 = func1(txt2);
	    cout << txt3 << endl;
	    
    cout << "Palindrome: ";
    	if(txt2 == txt4)
    	{
    		cout << "Yes" << endl;
    	}
    	else
    	{
    		cout << "No" << endl;
    	}
    return 0;
}
