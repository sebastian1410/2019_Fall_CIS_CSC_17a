/* 
 * File:   Gaddis_9th_Ch6_Prob7_Temperature Table
 * Author: Francisco Martinez
 * Created on February 22th, 2019, 10:34 PM
 * Purpose: Function Temperature Table
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <iomanip>
using namespace std;//namespace I/O stream library created
//Global Constants

//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes
float celsius(float);

//Execution Begins Here!
int main(int argc, char** argv) {
    cout<<"This Program Displays the Temperature Conversion of the first 20 degrees from Fahrenheit "
            "to Celsius"<<endl;
    cout<<"Degrees Fahrenheit   Degrees Celsius"<<endl;
    for (int i=0;i<21;i++){
        cout<<setw(8)<<i<<setw(25)<<setprecision(3)<<celsius(i)<<endl;
    }
   
return 0;
}
float celsius(float fahren){
    float degrCel=(5.0/9.0)*(fahren-32);
    return degrCel;
   }