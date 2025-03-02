#include<iostream>
using namespace std;
main()
{
  float vegetable;
  float fruit;
  int   totalvegetables;
  int   totalfruits;
  float coins;
  cout<<"Enter vegetable price in kilogram (in coins):";
  cin>>vegetable;
  cout<<"Enter fruit price in kilogram (in coins):";
  cin>>fruit;
  cout<<"Enter total kilograms of vegetables:";
  cin>>totalvegetables;
  cout<<"Enter total kilograms of fruits:";
  cin>>totalfruits;
  // 1 Rp==1.94coins;
  float earnings;
  earnings =  (vegetable * totalvegetables)+(fruit * totalfruits)/1.94;
  cout<<"total earnings in Rupees (Rps):"<<earnings;
}