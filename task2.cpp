#include<iostream>
using namespace std;
main()
{
   int minutes;
   int second;
   cout<<"Number of minutes:";
   cin>>minutes;
   cout<<"Frames per second:";
   cin>>second;
   int frames;
   frames = minutes * 60 * second;
   cout<<"Total Number of frames:"<<frames;
}