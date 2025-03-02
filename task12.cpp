#include<iostream>
using namespace std;
main()
{
  int number;
  cout<<"number of square meters you can paint;";
  cin>>number;
  int Widths;
  cout<<"Widths of the single wall:";
  cin>>Widths;
  int Heights;
  cout<<"Heights of the single wall;";
  cin>>Heights;
  int walls;
  walls =  number / (Widths * Heights);
  cout<<"Number of walls you can paint:"<<walls<<endl;
} 