#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void getdata (int & length, int & width, float & price);
float InstalledPrice(int length, int width, float price);
float totalprice( float installation); 
void printdata(int length, int width, float price);


const float LABOR_COST = 0.35;
const float Tax_Rate  =  0.05;


int main( void )
    { 
          int length, width, num;
          float installation , total,price;

          cout << "Enter the value.";
          cin  >> num;

for ( int i = 1; i<= num ; i++)
{ 
       getdata (length, width, price);
       installation = InstalledPrice(length, width, price);
       total = totalprice(installation); 
       printdata (length, width, total);  
}         
    
         system("pause");
         return 0;  
    }    
    void getdata (int & length, int & width, float & price)
    {
    cout << "Please enter the the length, width and total cost per room: ";
    cin >> length;
    cin >> width;
    cin >> price;
}
float InstalledPrice(int length, int width, float price)
    {
      float installation = (length * width* price) + (length * width * LABOR_COST);

      return (installation);
    }
float totalprice( float installation)
{
      float total = installation * Tax_Rate + installation;
      
      return (total);
}
void printdata(int length, int width, float total)
{
cout << setiosflags(ios::fixed) << setprecision(2)<< setw(6);
  cout << "Length = " << length << endl; 
  cout << "Width  = " << width << endl;
   cout << "The total cost for carpet installation is $" << total << endl;
  
}

