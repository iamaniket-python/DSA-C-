#include<iostream>
using namespace std;

int main() {

    float pencil;
    float pen;
    float eraser;

    cout<<"Cost of the pencil";
    cin>>pencil;

    cout<<"Cost of the pen";
    cin>>pen;

    cout<<"Cost of the eraser";
    cin>>eraser;

    int bill=(pencil+pen+eraser+18);
    cout<<"Total cost of bill with 18% gst="<<bill;
}