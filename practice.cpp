#include<bits/stdc++.h>
using namespace std;
#define EP 0.001

class exer{
    public:
    double f(double x){
        return x*x*x-x*x+2;
    }
    double dif(double x){
        return 3*x*x-2*x;
    }
    exer(double x){
        double h=f(x)/dif(x);
        
        while (abs(h)>=EP){
            h=f(x)/dif(x);
            x=x-h;
        }
        cout<<"program is:"<<x<<endl;
        
    }
};
int main()
{
    double x0=-20;
    exer c(x0);
    return 0;

}