      #include <iostream>
      using namespace std;

void calculatebill(string day, int amount);


  main()
{
  int amount;
  string day;
  cout<<"Enter amount: ";
  cin>>amount;
  cout<<"Enter the day: ";
  cin>>day;
  calculatebill(day,amount);

   }
 


    void calculatebill(string day, int amount)
   {
          int result;
      result=amount-(amount*0.10);
     if(day=="sunday")
        {
          cout<<"The payable amount is " <<result;
          }

    if(day!="sunday")
    {
       cout<<"The payable amount is "<<amount;
        }


}