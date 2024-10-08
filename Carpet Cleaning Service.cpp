#include<iostream>


using namespace std;


int main(){
 
    int NumofSrms;
    int NumofLrms;
    int costofsrms= 25;
    int costoflrms= 35;
    int salesTax= 6.6;
    int totalOfSrms= NumofSrms * costofsrms;
    int totalofLrms= NumofLrms * costoflrms;
    int totalcost= totalOfSrms + totalofLrms;
    int Sum= totalcost * salesTax;


    cout<<"Isaiah's Carpet Cleaning Service"<<endl;
    cout<<"Charges:"<<endl;
    cout<<"  $25 per small room"<<endl;
    cout<<"  $35 per large room"<<endl;
    cout<<"Sales tax rate is 6%"<<endl;
    cout<<"Estimates are valid for 30 Days"<<endl;
    cout<<"How many small rooms?"<<endl;
        cin>>NumofSrms;
    cout<<"How many large rooms?"<<endl;
        cin>>NumofLrms;
    cout<<"Estimate for carpet cleaning service"<<endl;
    cout<<"Number of small rooms: "<<NumofSrms<<endl;
    cout<<"Number of large rooms: "<<NumofLrms<<endl;
    cout<<"Price per small room: "<<costofsrms<<endl;
    cout<<"Price per large room: "<<costoflrms<<endl;
    cout<<"Cost: "<<totalcost<<endl;
    cout<<"Tax: "<<salesTax<<endl;
    cout<<"Total estimate: "<<Sum<<endl;
    cout<<"This estimate is valid for 30 days"<<endl;



 return 0;
}