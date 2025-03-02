#include<iostream>
using namespace std;
main()
{
   int size;
   int bag;

   cout<<"Enter the size of fertilizer bag in pounds:";
   cin>>size;

   cout<<"Enter the cost of the bag:$";
   cin>>bag;

   int area; 
   cout<<"Enter the area in squarefeet that can be covered by the bag:";
   cin>>area;

   float cost;
   cost = bag / size;

   cout<<"Cost of fertilizer per pound:$"<<cost <<endl;
   float fertilizer;
   fertilizer = bag / area;
   cout<<"Cost of fertilizer per square foot:$"<<fertilizer <<endl;
   }  