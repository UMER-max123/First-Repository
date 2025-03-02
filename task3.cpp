#include<iostream>
using namespace std;
main()
{
   float Initialvelocity;
   float acceleration;
   float time;
   cout<<"Enter the  Initialvelocity:";
   cin>>Initialvelocity;
   cout<<"Enter the acceleration:";
   cin>>acceleration;
   cout<<"Enter the time:";
   cin>>time;
   float Finalvelocity;
   Finalvelocity = acceleration * time + Initialvelocity;
   cout<<"Finalvelocity is:"<<Finalvelocity;
}