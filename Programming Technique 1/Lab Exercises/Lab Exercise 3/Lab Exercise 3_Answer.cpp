////////////////////////////
// Name: Angela Ngu Xin Yi /
// Matric no: A24CS0226    /
// Date: 19 December 2024  /
////////////////////////////
#include <iostream>
#include <string>
using namespace std;

void dispStatus(int);
void getInput(int &, int &, int &, int &);
void dispOutput(int);
float calcAverage(int, int);

int main()
{
    string state, ans, highestState;
    int numOfState=0; 
    int totalActiveCases=0;
    int totalCases, newCases, totalDeath, totalRecovered, activeCases, average;
    int highest =-1;
    do{
        cout<< "<<<<<<<<<<<<<< DATA >>>>>>>>>>>>>>" <<endl;
        cout<< "State name      : ";
        getline(cin,state);
        numOfState +=1;
        getInput(totalCases, newCases, totalDeath, totalRecovered);
        activeCases = totalCases + newCases - totalDeath - totalRecovered;
        totalActiveCases+=activeCases;
        if(activeCases>highest)
                {
                    highest = activeCases;
                    highestState = state;
                }
        cout<<endl;
        cout<< "<<<<<<<<<<<<< SUMMARY >>>>>>>>>>>>>" <<endl;
        dispOutput(activeCases);
        cout<<endl;
        cout<<"Please <ENTER> to continue...";
        getline(cin, ans);
        cout<<endl;    
    }while(ans=="");

    cout<< "<<<<<<<<<< ACTIVE CASES >>>>>>>>>>>" <<endl;
    cout<<"Total           : "<<totalActiveCases<<endl;
    cout<<"Highest         : "<<highest<<" ("<<highestState<<")"<<endl;
    average = calcAverage(totalActiveCases, numOfState);
    cout<<"Average for "<<numOfState<<" states: "<<average;
}

void getInput(int &total, int &newC, int &death, int &recover)
{
    cout<<"Total cases     : ";
    cin>> total;
    cout<<"New cases       : ";
    cin>> newC;
    cout<<"Total death     : ";
    cin>>death;
    cout<<"Total recovered : ";
    cin>>recover;
    cin.ignore(); //When should I use cin.ignore()? After integer or float inputs (like cin >> int/float), especially if you want to follow it with getline().
}

void dispOutput(int active)
{
    string zone;
    cout<<"Active cases    : "<<active<<endl;
    dispStatus(active);
}

void dispStatus(int active)
{
    cout<<"Status          : ";
    if (active >40)
    cout<<"Red Zone"<<endl;
    else if ((active>=20)&&(active<=40))
    cout<<"Orange Zone"<<endl;
    else if ((active>=1)&&(active<=20))
    cout<<"Yellow Zone"<<endl;
    else if (active==0)
    cout<<"Green Zone"<<endl;
}

float calcAverage(int totalactive, int num)
{
    int avg;
    avg = totalactive/num;
    return avg;
}
