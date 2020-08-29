// DiemTHPTQG.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<fstream>
#include<vector>
#include<string>
#include"tinhSum.h"

using namespace std;
struct THPTQG {
    string SBD;
    float Math;
    float Literature;
    float English;
    float Physical;
    float Chemistry;
    float Biology;
    float History;
    float Geography;
    float GDCD;
    float khoiA;
    float khoiA1;
    float khoiB;
    float khoiD;
};

void readCSV(vector<THPTQG>& a) {
    THPTQG b;
    

    ifstream fin("BK.csv");
    if (!fin.is_open()) {
        cout << "can not";
        return;
    }
    ifstream cfin("BK.csv");
    if (!cfin.is_open()) {
        cout << "can not";
        return;
    }
    string temp;
    int n = 0;
    while (cfin.good()) {
        string temp;
        getline(cfin, temp, '\n');
        n++;
    }
    cfin.close();
    
    for (int i = 0;i < n;i++) {
        //fin.ignore();
        getline(fin, b.SBD, ';');
       // fin.ignore();
        fin >> b.Math;
        fin.ignore(1, ';');
        fin >> b.Literature;
        fin.ignore(1, ';');
        fin >> b.English;
        fin.ignore(1, ';');
        fin >> b.Physical;
        fin.ignore(1, ';');
        fin >> b.Chemistry;
        fin.ignore(1, ';');
        fin >> b.Biology;
        fin.ignore(1, ';');
        fin >> b.History;
        fin.ignore(1, ';');
        fin >> b.Geography;
        fin.ignore(1, ';');
        fin >> b.GDCD;
        fin.ignore(1, '\n');
        b.khoiA = sumKhoiA(b.Math, b.Physical, b.Chemistry);
        b.khoiA1 = sumKhoiA1(b.Math, b.Physical, b.English);
        b.khoiB = sumKhoiB(b.Math, b.Biology, b.Chemistry);
        b.khoiD = sumKhoiD(b.Math, b.Biology, b.Chemistry);
        a.push_back(b);
    }
    fin.close();
}

void writeExport(vector<THPTQG> a)
{
    ofstream fout("DiemTHPTBKxeptheoD.csv");

    fout << "No,Math,Van,Anh,Ly,Hoa,Sinh,Su,Dia,GDCD,KhoiA,KhoiA1,KhoiB,KhoiD" << endl;

    for (int i = 0;i < a.size();i++) {
        //cout << "Khoi D" << a[i].khoiD << endl;
        fout << a[i].SBD << "," << a[i].Math << "," << a[i].Literature << "," << a[i].English << "," << a[i].Physical << "," << a[i].Chemistry << "," << a[i].Biology
           <<"," << a[i].History << "," << a[i].Geography << "," << a[i].GDCD << "," << a[i].khoiA << "," << a[i].khoiA1 << "," << a[i].khoiB << "," << a[i].khoiD << endl;
        //cout << a[i].SBD << "," << a[i].Math << "," << a[i].Literature << "," << a[i].English << "," << a[i].Physical << "," << a[i].Chemistry << "," << a[i].Biology
            //<< a[i].History << "," << a[i].Geography << "," << a[i].GDCD << "," << a[i].khoiA << "," << a[i].khoiA1 << "," << a[i].khoiB << "," << a[i].khoiD << endl;
    }
    fout.close();
}

void sortGiamdantheoKhoiD(vector<THPTQG>& a) {
    for (int i = 0;i < a.size();i++) {
        for (int j = i + 1;j < a.size() - 1;j++) {
            if (a[i].khoiD < a[j].khoiD) {
                THPTQG temp;
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
int main()
{
    vector<THPTQG> a;
    readCSV(a);
    sortGiamdantheoKhoiD(a);
    writeExport(a);
}
