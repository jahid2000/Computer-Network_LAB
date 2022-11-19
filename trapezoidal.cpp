#include<bits/stdc++.h>
using namespace std;
class trapo{
 private:
 double a,b,sum,h;
 int n;
 private:
 double f(double x){
     return (x*x*x+1);
 }

 public:
  trapo(double b,double a,int n){
      this->a=a;
      this->b=b;
      this->n=n;
  }
  public:
  double solve(){
      h=(b-a)/n;
      sum=f(a)+f(b);
      for(int i=1;i<n;i++){
          sum+=2*f(a+i*h);
      }
      return (h/2)*sum;
  }
};
int main()
{
    trapo *tra=new trapo(4,0,4);
    printf("integral is: %0.3lf\n",tra->solve());
    return 0;
}