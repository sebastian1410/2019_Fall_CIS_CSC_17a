/* 
 * File:   main.cpp
 * Author: Francisco Martinez
 * Created on June 11th, 2019, 9:07 AM
 * Purpose:  Truth Table
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    cout<<"X Y !X !Y X&&Y X||Y X^Y X^Y^X X^Y^Y !(X&&Y) !X||!Y !(X||Y) !X&&!Y"<<endl;
    bool x=true, y=true;
    for(int i=0;i<4;i++){

        cout<<(x?'T':'F')<<" "
            <<(y?'T':'F')<<"  "
            <<(!x?'T':'F')<<"  "
            <<(!y?'T':'F')<<"   "
             <<(x&&y?'T':'F')<<"    "
             <<(x||y?'T':'F')<<"   "
             <<(x^y?'T':'F')<<"    "
             <<((x^y)^y?'T':'F')<<"     "
             <<((x^y)^x?'T':'F')<<"      "
            <<(!(x&&y)?'T':'F')<<"       "
            <<(!x||!y?'T':'F')<<"      "
            <<(!(x||y)?'T':'F')<<"      "
            <<(!x&&!y?'T':'F')<<"   "<<endl;
        
    }
            
            x=true, y=false;
    x=true,y=false;
    x=false, y=true;
    x=false, y=false;
;

    //Exit
    return 0;
}

