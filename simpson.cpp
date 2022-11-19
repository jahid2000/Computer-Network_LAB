#include<bits/stdc++.h>
using namespace std;

class point{
    public:
    double x,y;
    point(double x,double y){
        this->x=x;
        this->y=y;
        
    }
};

class simposon{
    private:
    vector<point>points;
    double high,low;
    int h;
    double f(double x){
        return sqrt(sin(x));
    }
    void make_points(){
        double wid=(high-low)/h;
        for(int i=0;i<h;i++){
            double x=low+i*wid;
            double y=f(x);
            points.push_back(point(x,y));
        }
    }
    public:
    simposon(double high,double low,int h){
        this->high=high;
        this->low=low;
        this->h=h;
    }
    public:
    void solve(){
        make_points();
        double wid=(high-low)/h;
        double res=0;
        for(int i=1;i<points.size()-1;i++){
            if(i%2==0)
            res+=2*points[i].y;
            else
            res+=4*points[i].y;
        }
        res+=(points[0].y+points[points.size()-1].y);
        res*=(wid/3);
        cout<<res<<endl;
    }

};

int main()
{
    simposon *sm=new simposon(1,0,24);
    sm->solve();
    return 0;
}