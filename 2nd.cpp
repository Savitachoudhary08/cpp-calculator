#include<iostream>
#include<cmath>
using namespace std;
double add(double x,double y){
    return x+y;
}
double sub(double x, double y){
    return x-y;
}
double multi(double x, double y){
    return x*y;
}
double divide(double x, double y){
    return x/y;
}
double power(double x, double y){
    return pow(x,y);
}
double sqroot(double x){
    return sqrt(x);
}
double sn(double x){
  return sin(x);
}
double tn(double x){
  return tan(x);
}
double cs(double x){
  return cos(x);
}
int main()
{
    double b,a;
    char c;
    cout<<"CALCULATOR MENU: "<<endl;
    cout<<"+ for addition \n- for subtraction \n* for multiplication \n/ for division \n^ for to the power \n'r' for square root \ns for sine \nt for tangent \nc for cosine \n= for result"<<endl;
    cout<<"Enter first number: "<<endl;
    cin>>a;
    while(1)
    {
        cout<<"Choose operator"<<endl;
        cin>>c;
        if(c=='=')
        {
          cout<<"Result is "<<a<<endl;
          break;
        }
        cout<<"Enter next number"<<endl;
        cin>>b;
        switch(c)
        {
          case '+':
            a=add(a,b);
            break;
          case '-':
            a=sub(a,b);
            break;
          case '*':
            a=multi(a,b);
            break;
          case '^':
            a=power(a,b);
            break;
          case '/':
            if(b==0){
                cout<<"INVALID INPUT"<<endl;
                cout<<"Earlier result was "<<a;
                exit(0);
            }
            else{
                a=divide(a,b);
            }
            break;
          case 'r':
            a=sqroot(a);
            break;
          case 's':
            a=sn(a);
            break;
          case 'c':
            a=cs(a);
            break;
          case 't':
            a=tn(a);
            break;
          default:
            cout<<"INVALID OPERATOR"<<endl; 
        }
    }
    return 0;
}
