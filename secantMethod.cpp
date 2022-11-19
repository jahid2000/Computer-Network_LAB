#include<bits/stdc++.h>
using namespace std;

class secant{
    private:
    double esp;
    private:
    double a,b,root;

    public:
    secant(){
        a=7,b=8,root=-1;
    }
    double f(double x){
        return x*x*x-2*x-5;
    }
    public:
    double get_root(){
        return root;
    }
    public:
    void find_root(double esp){
        do{
            root=b-(f(b)*(b-a))/(f(b)-f(a));
            a=b;
            b=root;
        }while (abs(f(root))>esp);
    }
};
int main()
{
    secant st;
    st.find_root(0.001);
    printf("the root is %.3lf\n",st.get_root());
    return 0;
}