/* 
 * File:   Gaddis_9th_Ch7_Prob6_Rain or Shine
 * Author: Francisco Martinez
 * Created on February 22th, 2019, 10:59 PM
 * Purpose: Arrays 
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <iomanip>
#include <fstream>
using namespace std;//namespace I/O stream library created
//Global Constants

//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes


//Execution Begins Here!
int main(int argc, char** argv) {
    int SIZE1= 3;
    int SIZE2= 30;
    int rainy=0, cloudy=0, sunny=0;
    char info[SIZE1][SIZE2];
    int data[SIZE1][SIZE1]={0}; //Number of Rainy, Cloudy and Sunny Days.
    data[0][2]=0;
    int rainMst; //Month with most Rain
    ifstream file;
    file.open("RainOrShine.txt");
    for (int i1=0;i1<3; i1++){
        for(int i=0;i<30;i++){
            file>>info[i1][i];
        } 
    }
    for (int a=0; a<3; a++){
        for(int i=0;i<30;i++){ //Month of June 
            if (info[a][i]=='S')
                data[0][a]++;
            if (info[a][i]=='C')
                data[1][a]++;
            if (info[a][i]=='R')
                data[2][a]++;
      }
    }
    cout<<"June"<<endl;
    for (int i=0; i<3;i++){
        if (i==0)
           cout<<"Sunny: ";
       if (i==1)
           cout<<"Cloudy: ";
       if (i==2)
           cout<<"Rainy: ";
       cout<< data[i][0]<<endl;  
    }
    cout<<"July"<<endl;
    for (int i=0; i<3;i++){
        if (i==0)
            cout<<"Sunny: ";
        if (i==1)
            cout<<"Cloudy: ";
        if (i==2)
            cout<<"Rainy: ";
        cout<< data[i][1]<<endl;  
    }
    cout<<"August"<<endl;
    for (int i=0; i<3;i++){
        if (i==0)
            cout<<"Sunny: ";
        if (i==1)
            cout<<"Cloudy: ";
        if (i==2)
            cout<<"Rainy: ";
        cout<< data[i][2]<<endl;  
    }
    for (int i=0; i<3; i++)
            sunny+=data[0][i];
    for (int i=0; i<3; i++)
            cloudy+=data[1][i];
    for (int i=0; i<3; i++)
            rainy+=data[2][i];
    cout<<"Total Weather for the 3 Months"<<endl;
    cout<<"Sunny: "<<sunny<<" days"<<endl;
    cout<<"Rainy: "<<rainy<<" days"<<endl;
    cout<<"Cloudy: "<<cloudy<<" days"<<endl;
    rainMst=data[2][0];
    for(int i=0; i<3;i++)
        if (data[2][i+1]>data[2][i])
            rainMst=data[2][i+1];
    cout<<"Month with most Rain had "<<rainMst<<" days of Rain";
    if (rainMst==data[2][0])
        cout<<" and it was June"<<endl;
    if (rainMst==data[2][1])
        cout<<" and it was July"<<endl;
    if (rainMst==data[2][2])
        cout<<" and it was August"<<endl;
    file.close();
return 0;
}
