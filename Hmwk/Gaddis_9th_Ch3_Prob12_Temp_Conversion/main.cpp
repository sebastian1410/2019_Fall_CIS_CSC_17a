/* 
 * File:   Gaddis_9th_Ch3_Prob12_Temp_Conversion
 * Author: Francisco Martinez
 * Created on February 20th, 2019, 9:44 AM
 * Purpose: Celsius to Fahrenheit
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl

using namespace std;//namespace I/O stream library created
//Global Constants

//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes


//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float celsius, frnheit;
    cout<<"This Program Converts Celsius degrees to Fahrenheit degrees"<<endl;
    cout<<"Please Input the Wished Temperature in Celsius"<<endl;
    cin>>celsius;
    frnheit=1.8*celsius +32; // Fahrenheit degrees formula
    
    cout<<"The Converted Temperature is "<<frnheit<<" degrees Fahrenheit"<<endl;
    
return 0;
}
