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
    if(y==0){
      cout<<"INVALID INPUT"<<endl<<"NAGLECTING PREVIOUS OPERATION"<<endl;
      return x;
    }
    else{
     return x/y;
    }
}
double power(double x, double y){
    return pow(x,y);
}
double sqroot(double x){
    if(x<0){
      cout<<"INVALID INPUT"<<endl<<"NEGLECTING PREVIOUS OPERATION"<<endl;
      return x;  
    }
    else{
     return sqrt(x);
    }
}
double sn(double x){
  return sin(x);
}
double sni(double x, char y){
  if(x<-1||x>1){
     cout<<"INVALID INPUT"<<endl<<"NEGLECTING PREVIOUS OPERATION"<<endl;
     return x; 
  }
  else{
      if(y=='r'){
        return asin(x);
      }
      else if(y=='d'){
        return asin(x)*57.3;
      }
      else{
        cout<<"BY DEFAULT RADIAN MODE IS CHOOSEN"<<endl;
        return asin(x);
      }
  }
 
}
double tn(double x){
  return tan(x);
}
double tni(double x, char y){
  if(y=='r'){
    return atan(x);
  }
  else if(y=='d'){
    return atan(x)*57.3;
  }
  else{
    cout<<"BY DEFAULT RADIAN MODE IS CHOOSEN"<<endl;
    return atan(x);
  }
}
double cs(double x){
  return cos(x);
}
double csi(double x, char y){
  if(x<-1||x>1){
     cout<<"INVALID INPUT"<<endl<<"NEGLECTING PREVIOUS OPERATION"<<endl;
     return x; 
  }
  else{
      if(y=='r'){
        return acos(x);
      }
      else if(y=='d'){
        return acos(x)*57.3;
      }
      else{
        cout<<"BY DEFAULT RADIAN MODE IS CHOOSEN"<<endl;
        return acos(x);
      }
  }
}
double natlog(double x){
  if(x>0){
    return log(x);
  }
  else{
    cout<<"INVALID INPUT"<<endl<<"NEGLECTING PREVIOUS OPERATION"<<endl;
    return x; 
  }
}
double lg(double x){
  if(x>0){
    return log10(x);
  }
  else{
    cout<<"INVALID INPUT"<<endl<<"NEGLECTING PREVIOUS OPERATION"<<endl;
    return x; 
  }
}
double expo(double x){
  if(x<89){
    return exp(x);
  }
  else{
    cout<<"OVERFLOW ERROR"<<endl<<"NEGLECTING PREVIOUS OPERATION"<<endl;
    return x; 
  }
}
double mode(double x,char y){
  if(y=='r'){
    return x;
  }
  else if(y=='d'){
    return x*0.0174532925;
  }
  else{
    cout<<"BY DEFAULT RADIAN MODE IS CHOOSEN"<<endl;
    return x;
  }
}
int main()
{
    double b,a;
    char c;
    char m;
    cout<<"Choose the mode: (d for degree and r for radian)"<<endl;
    cin>>m;
    cout<<"CALCULATOR MENU: "<<endl;
    cout<<"+ for addition \n- for subtraction \n* for multiplication \n/ for division \n^ for to the power \nr for square root \ns for sine \nt for tangent \nc for cosine \nS for sine inverse \nC for cosine inverse \nT for tangent inverse \nl for natural log \nL for log base 10 \ne for exponent \n= for result"<<endl;
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
            a=divide(a,b);
            break;
          case 'r':
            a=sqroot(a);
            break;
          case 's':
            a=mode(a,m);
            a=sn(a);
            break;
          case 'c':
            a=mode(a,m);
            a=cs(a);
            break;
          case 't':
            a=mode(a,m);
            a=tn(a);
            break;
          case 'S':
            a=sni(a,m);
            break;
          case 'C':
            a=csi(a,m);
            break;
          case 'T':
            a=tni(a,m);
            break;
          case 'l':
            a=natlog(a);
            break;
          case 'L':
            a=lg(a);
            break;
          case 'e':
            a=expo(a);
            break;
          default:
            cout<<"INVALID OPERATOR"<<endl; 
        }
    }
    return 0;
}
