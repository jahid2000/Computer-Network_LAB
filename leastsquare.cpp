#include<bits/stdc++.h>
using namespace std;

class leastsquare{
    private:
    double ans[2];
    private:
    double sum_x,sum_y,sum_xx,sum_xy;
    public:
    leastsquare(){
        sum_x=0,sum_y=0,sum_xx=0,sum_xy=0;
    }
    public:
    void least(double x[100],double y[100],int n){
        for(int i=0;i<n;i++){
            sum_x+=x[i];
            sum_y+=y[i];
            sum_xx+=x[i]*x[i];
            sum_xy+=x[i]*y[i];
        }
        double b=(n*sum_xy-sum_x*sum_y)/(n*sum_xx-sum_x*sum_x);
        double a=(sum_xx*sum_y-sum_x*sum_xy)/(n*sum_xx-sum_x*sum_x);
        ans[0]=a;
        ans[1]=b;
    }
    public:
    void get_ans(){
        cout<<"Regreation line"<<" ";
        cout<<"Y =";
        printf("%.3lf + ",ans[0]);
        printf("%.3lf *X",ans[1]);
    }

};
int main()
{
    leastsquare st;
    double n,x[100],y[100];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>y[i];
    }
    st.least(x,y,n);
    st.get_ans();
    return 0;
}