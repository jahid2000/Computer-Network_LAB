#include<bits/stdc++.h>
using namespace std;
class lagrense_intra{

    private:
    double x[10],y[10][10],result,term;
    private:
    int n,i,j,k,f,m;
    public:
    lagrense_intra()
    {
        k=0;
        i=0;
        result=0;
    }
    public:
    void add_data(double a,double b){
        x[i]=a;
        y[i][k]=b;
        i++;
    }
    public:
    double intra(double intrat,int n)
    {
        for(int i=0;i<n;i++){
            double term=y[i][0];
            for(int j=0;j<n;j++){
                if(j!=i)
                term=term*(intrat-x[j]/(x[i]-x[j]));

            }
            result+=term;
        }
        return result;
    }
    
};

int main(){
    lagrense_intra obj;
    double x,y;
    int n,it;
    cout<<"how many number enter "<<endl;
    cin>>n;
    it=n;
    printf("enter tabulated value");
    while(it--)
    {
        cin>>x>>y;
        obj.add_data(x,y);
    }
    double point;
    printf("enteer the value to find");
    scanf("%lf",&point);
    printf("\nvalue at %lf 0.4lf",point,obj.intra(point,n));
    return 0;
}