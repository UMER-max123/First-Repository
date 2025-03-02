#include<iostream>
using namespace std;
main()
{
   string name;
   cout<<"Enter the name of the person:";
   cin>>name;
   float targetweightloss;
   cout<<"Enter the target weight loss in kilogram:";
   cin>>targetweightloss;
   // since 1 kilogram of weight loss takes 15 days;
   float daysrequired;
   daysrequired = targetweightloss * 15 / 1;
   cout<< name <<" will need approximately" <<daysrequired << " days to lose " << targetweightloss<<"kilograms weight by following the doctor's suggestion";
}