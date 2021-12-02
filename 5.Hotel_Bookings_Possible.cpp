#include <bits/stdc++.h>
using namespace std;

bool HotelBookingsPossible(int Arrivals[],int Departures[], int N, int K){
    int count=0,j=0;
   sort(Arrivals,Arrivals+N);
   sort(Departures,Departures+N);

    for(int i=0; i<N && j<N;){
        if(Arrivals[i]<Departures[j]){
            count++;
            if(count>K){
                return 0;
            }
            i++;
        }else{
            count--;
            j++;
        }

    }
    
    return true;
}

int main()
{
    int NumberOfElements;
    cin>>NumberOfElements;
    int Arrivals[NumberOfElements];
    int Departures[NumberOfElements];
    for(int i=0; i<NumberOfElements; i++){  cin>>Arrivals[i]; }
    for(int i=0; i<NumberOfElements; i++){  cin>>Departures[i];}
    int NumberOfRoom;
    cin>>NumberOfRoom;
    cout<<HotelBookingsPossible(Arrivals,Departures,NumberOfElements,NumberOfRoom)<<endl;
    
}