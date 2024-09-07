#include<bits/stdc++.h>

using namespace std;

int main(){
    float xA, yA, xB, yB;
    cout<<"A(xA,xB)";
    cin>>xA>>xB;
    cout<<"B(yA,yB)";
    cin>>yA>>yB;
    cout<<"|AB|= "<<sqrt((xB-xA)*(xB-xA)+(yB-yA)*(yB-yA));
}