#include<bits/stdc++.h>
#define P(X) cout<<X<<endl;
#define P(X,Y) cout<<X<<" "<<Y<<endl;
using namespace std;

stack<char>st;
string str,ans;
int main()
{
    int i,j,len,op;
    char ch;
    str="(A-B)*(C/D)";
    str="("+ str + ")";
    ans= "";
    for(int i=0;i<str.size();i++){
        if(isalpha(str[i])) ans+=str[i];
        else if(str[i]=='+'||str[i]=='-'){
            while (st.top()!='(')
            {
                /* code */ans+=st.top();
                st.pop();
            }
            st.push(str[i]);
            
        }
        else if(str[i]=='*'||str[i]=='/'){
            while (st.top()!='('&&(st.top()!='+'||st.top()!='-'))
            {
                /* code */ans+=st.top();
                st.pop();
            }
            st.push(str[i]);
            
        }
        else if(str[i]==')'){
            while (st.top()!='(')
            {
                /* code */ans+=st.top();
                st.pop();
            }
            st.pop();
            
        }
        else st.push(str[i]);
    }
    cout<<ans<<endl;
}
