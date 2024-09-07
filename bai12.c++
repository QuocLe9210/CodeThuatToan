#include <bits/stdc++.h>

using namespace std;

int main(){
    float a1,b1,c1,a2,b2,c2,dx,dy,d;
    cin>>a1>>b1>>c1>>a2>>b2>>c2;

    
    d= (a1*b2-a2*b1);
    dx=(c1*b2-c2*b1);
    dy=(a1*c2-a2*c1);

    if(!d){
        if(!dx&&dy){
            cout<<"PT vo so nghiem "<<endl;
        }else{
            cout<<"PT vo nghiem"<<endl;
        }
    }
    else{
        cout << "x = " << dx / d << "\ny = " << dy / d <<endl;
    }

}