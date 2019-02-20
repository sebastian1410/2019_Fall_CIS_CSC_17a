/* 
 * File:   Gaddis_9th_Ch5_Prob11_Population
 * Author: Francisco Martinez
 * Created on February 20th, 2019, 10:39 AM
 * Purpose: Population
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
    int start;//Initial Amount of Organisms
    int plus; //Daily increments in percentage
    int days; //Number of days the Organisms will multiply for
    int total;// Total population up to a specific day.
    cout<<"This Program Predicts the Size of Population of an Organism"<<endl;
    cout<<"Please Enter the Initial Number of Organisms"<<endl;
    cin>>start;
    cout<<"Please Enter the Daily increase in Organisms in Percentage form(1-100%)"<<endl;
    cin>>plus;
    cout<<"Please Enter the Number of Days the Organisms will Multiply For"<<endl;
    cin>>days;
    for (int i=0; i<days; i++)
        total=start+plus;
        
    
    
return 0;
}
