#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
    
    string name1;
    string name2;
    int room;
    int type;
    int quality;
    string date1;
    string date2;
    string price;
    char conf;
    ofstream fileOut;

    cout << "Enter your first name: "; 
    cin >> name1;

    cout << "Enter your Last name: "; 
    cin >> name2;

    cout << "Enter 1 for Single bed or 2 double bed: ";
    cin >> type;

    cout << "Choose Room from 1 - 20: ";
    cin >> room;

    cout << "Enter 1 for High, 2 for Medium and 3 for Low Quality: ";
    cin >> quality;

    cout << "Enter starting date with this format(**/**/**): ";
    cin >> date1;

    cout << "Enter finishing date with this format(**/**/**): ";
    cin >> date2;
    cout<< endl;

    cout << "*******************************************************" << std::endl;
    cout <<"Name: "<< name1 << " " << name2 << endl;

    if (type == 1) {
        cout << "Type: Single bed" << endl;
    }
    else if (type == 2) {
        cout << "Type: Double bed" << endl;
    }

    cout << "Room: " << room << endl;

    if (quality == 1) {
        cout << "Quality: High quality" << endl;
    }
    else if (quality == 2) {
        cout << "Quality: Medium quality" << endl;
    }
    else if (quality == 3) {
        cout << "Quality: Low quality" << endl;
    }
    cout << "Starting date: "<< date1 << endl;
    cout << "Finishing date: "<< date2 << endl;

    if (quality == 1 && type == 2) {
            price = "$5000";
            cout << "Price: " << price << endl;
    } 
    else if (quality == 2 && type == 2) {
            price = "$4000";
            cout << "Price: " << price << endl;
    }
    else if (quality == 3 && type == 2) {
            price = "$3000";
            cout << "Price: " << price << endl;
    } 
    else if (quality == 1 && type == 1) {
            price = "$4500";
            cout << "Price: " << price << endl;
    } 
    else if (quality == 2 && type == 1) {
            price = "$3000";
            cout << "Price: " << price << endl;
    } 
    else if (quality == 3 && type == 1) {
            price = "$2000";
            cout << "Price: " << price << endl;
    }
    cout << "Confirm (y/n): ";
    cin >> conf;

    if (conf == 'y' || conf == 'Y') {
    cout << "**********Thank you for choosing our hotel !!**********" << endl;

    fileOut.open("output.txt", ios::in | ios::out | ios::app);
    fileOut <<"Name: "+ name1+" "+name2 + "\n";
    fileOut <<"Room: "<< room << endl;
    fileOut <<"Type: " << type << endl;
    fileOut <<"Quality: " << quality << endl;
    fileOut <<"Starting date: "+ date1 + "\n";
    fileOut <<"Finishing date: "+ date2 + "\n";
    fileOut <<"Price: "+ price + "\n"+"\n";
    fileOut.close();
    }
    return 0;
}
