// A program to find all roots of a quadratic equation
#include<iostream>
#include<cmath>
using namespace std;
int main() {
    float a,b,c,x1,x2,disc,realP,imagiP;
    cout<<"Enter the coefficients:";
    cin>>a>>b>>c;
    disc = b*b-4*a*c;

    if(disc>0) {
        x1 = (-b+sqrt(disc))/(2*a);
        x2 = (-b-sqrt(disc))/(2*a);
        cout<<"x1="<<x1<<endl;
        cout<<"x2="<<x2<<endl;
    }

    else if(disc==0){
        cout<<"Roots are the same."<<endl;
        x1 = (-b+sqrt(disc))/(2*a);
        cout<<"x1=x2="<<x1 << endl;
    }
    else {
        realP = -b/(2*a);
        imagiP = sqrt(disc)/(2*a);
        cout<<"Roots are different." <<endl;
        cout<< "x1=" <<realP<< "+" <<imagiP <<"i" << endl;
        cout<<"x2=" <<realP<<"-"<<imagiP<<"i" << endl;
    }
    system("pause");
}
