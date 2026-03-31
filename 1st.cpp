#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter two numbers: "<<endl;
    cin>>a>>b;
    cout<<"CALCULATOR MENU: "<<endl;
    cout<<"1 for addition \n 2 for subtraction \n 3 for multiplication \n 4 for division "<<endl;
    cin>>c;
    switch(c)
    {
        case 1:
        cout<<"Result is "<<a+b<<endl;
        break;
        case 2:
        cout<<"Result is "<<a-b<<endl;
        break;
        case 3:
        cout<<"Result is "<<a*b<<endl;
        break;
        case 4:
        cout<<"Result is "<<a/b<<endl;
        break;
        default:
        cout<<"GOOD MORNING TANVI :)"; 
    }
    return 0;
}