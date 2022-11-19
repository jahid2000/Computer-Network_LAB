#include<bits/stdc++.h>
using namespace std;
vector<char>stk;
reduce(){
	int size = stk.size();
	if(stk[size-1]=='4'){
		stk.pop_back();
		stk.push_back('E');
	}
	if(stk[size-1]=='2' && stk[size-2]=='E' && stk[size-3]=='2'){
		stk.pop_back();
		stk.pop_back();
		stk.pop_back();
		stk.push_back('E');
	}
	if(stk[size-1]=='3' && stk[size-2]=='E' && stk[size-3]=='3'){
		stk.pop_back();
		stk.pop_back();
		stk.pop_back();
		stk.push_back('E');
	}
}
int main(){
	//Grammar : E -> 2E2; E -> 3E3; E -> 4;
	string str = "2324232";
	str+='$';
	stk.push_back('$');
	for(int i=0;i<str.size();i++){
		reduce();
		stk.push_back(str[i]);
	}
	if(stk[0]=='$' && stk[1]=='E' && stk[2]=='$')
		cout << "Accept"<<endl;
	else
		cout <<"Reject"<<endl;
}