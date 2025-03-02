#include<iostream>
using namespace std;
main()
{
system("color 80");
   int imposter;
   int player ;
   cout<<"Enter the imposter count:";
   cin>>imposter;
   cout<<"Enter the player count:";
   cin>>player;
   int Chance;
   Chance = 100 * imposter / player;
   cout<<"Chance of being an imposter count:"<<Chance;
}
   