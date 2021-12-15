#include <bits/stdc++.h>
using namespace std;


int main()
{
    int Num;
    cin>>Num;

    if(Num%2==1){
        cout<<"Weird"<<endl;
    }
    else if((Num%2==0) && ((2<=Num) && (Num<=5))){
        cout<<"Not Weird"<<endl;
    }

    else if((Num%2==0 )&& ((6<=Num) && (Num<=20))){
        cout<<"Weird"<<endl;
    }
    else if(20<Num && Num%2==0){
        cout<<"Not Weird"<<endl;
    }
    
}