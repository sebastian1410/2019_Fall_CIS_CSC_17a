/* 
 * File:   Gaddis_9th_Ch3_Prob12_Currency_Conversion
 * Author: Francisco Martinez
 * Created on February 20th, 2019, 9:53 AM
 * Purpose: Currency Conversion
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <iomanip>
using namespace std;//namespace I/O stream library created
//Global Constants

//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes


//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float YPD=110.67, EPD=0.88; //Yen per Dollar, Euros per Dollar
    float dollars, yen, euros;
    cout<<"This Program Converts US Dollars to Japanese Yen and to Euros"<<endl;
    cout<<"Please Input the Amount you Wish to Convert(Dollars)"<<endl;
    cin>>dollars;
    yen=dollars*YPD;
    euros=dollars*EPD;
    
    cout<<fixed<<setprecision(2)<<dollars<<" US dollars is Worth "<<yen<<" Yen."<<endl;
    cout<<fixed<<setprecision(2)<<dollars<<" US dollars is Worth "<<euros<<" Euros."<<endl;
    
return 0;
}
