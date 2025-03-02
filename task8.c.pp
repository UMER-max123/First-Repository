#include<iostream>
using namespace std;
main()
{
   string name;
   int price1;
   int price2;
   int adult;
   int child;
   cout<<"Enter the Movie name:";
   cin>>name;
   cout<<"Enter the adult ticket price:$";
   cin>>price1;
   cout<<"Enter the child ticket price:$";
   cin>>price2;
   cout<<"Enter the adult tickets sold:";
   cin>>adult;
   cout<<"Enter the child tickets sold:";
   cin>>child;
   int percentage;
   cout<<"Enter the percentage of the amount to be denoted to charity:";
   cin>>percentage;
   float Total;
   Total = (price1*adult) + (price2*child);
   double donation = (total * percentage) / 100;
   double remaining = total - donation;
   cout<<"Total amount generated from ticket sales:$"<<total<<endl;
   cout<<"Movie name:" <<name;
   cout<<"Donation to charity(.10%):$" Donation;
   cout<<"Remaining amount after donation:$" Remaining;
} 
   