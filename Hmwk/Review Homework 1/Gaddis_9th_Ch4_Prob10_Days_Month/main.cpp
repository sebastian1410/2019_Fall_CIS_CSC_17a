/* 
 * File:   Gaddis_9th_Ch3_Prob12_Days_Month
 * Author: Francisco Martinez
 * Created on February 20th, 2019, 10:08 AM
 * Purpose: Days in a Month
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
    int month,year;
    cout<<"This Program Determines the Amount of Days in a Month with the Month's Name and the Year"<<endl;
    cout<<"Please Enter the Month Number (1-12)"<<endl;
    cin>>month;
    if (month>12 or month<1){
        cout<<"INVALID MONTH NUMBER. RESTART PROGRAM AND INPUT A MONTH NUMBER BETWEEN 1 AND 12"<<endl;
        exit(0);
    }
    cout<<"Please Enter the Year"<<endl;
    cin>>year;
    if (month==2){
        if (year%100==0){
            if (year%400==0){
                cout<<"It's a Leap Year! The Month has 29 Days"<<endl;
            }
            else
                cout<<"The Month has 28 Days"<<endl;
        }
        else{
            if (year%4==0){
                cout<<"It's a Leap Year! The Month has 29 Days"<<endl;
            }
            else 
                cout<<"The Month has 28 Days"<<endl;
        }
    }
    if (month!=2){
        switch(month){
                case 1:cout<<"The Month has 31 Days";break;
                case 3:cout<<"The Month has 31 Days";break;
                case 4:cout<<"The Month has 30 Days";break;
                case 5:cout<<"The Month has 31 Days";break;
                case 6:cout<<"The Month has 30 Days";break;
                case 7:cout<<"The Month has 31 Days";break;
                case 8:cout<<"The Month has 31 Days";break;
                case 9:cout<<"The Month has 30 Days";break;
                case 10:cout<<"The Month has 31 Days";break;
                case 11:cout<<"The Month has 30 Days";break;
                case 12:cout<<"The Month has 31 Days";break;
        }
      }
    
return 0;
}
