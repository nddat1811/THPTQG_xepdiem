#include "ReadWriteFile.h"


void readCSV(vector<THPTQG>& a) {
    THPTQG b;


    ifstream fin("QT.csv");
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
       
        //cout << b.khoiD << endl;
        a.push_back(b);
    }
    fin.close();

    for (int i = 0;i < a.size();i++) {
        a[i].khoiA = sumKhoiA(a[i].Math, a[i].Physical, a[i].Chemistry);
        a[i].khoiA1 = sumKhoiA1(a[i].Math, a[i].Physical, a[i].English);
        a[i].khoiB = sumKhoiB(a[i].Math, a[i].Biology, a[i].Chemistry);
        a[i].khoiD = sumKhoiD(a[i].Math, a[i].Literature, a[i].English);
    }
}

void writeExport(vector<THPTQG> a)
{
    ofstream fout("DiemTHPTQTxeptheoB.csv");

    fout << "No,Math,Van,Anh,Ly,Hoa,Sinh,Su,Dia,GDCD,KhoiA,KhoiA1,KhoiB,KhoiD" << endl;

    for (int i = 0;i < a.size();i++) {
       // cout << "Khoi D" << a[i].khoiD << endl;
        fout << a[i].SBD << "," << a[i].Math << "," << a[i].Literature << "," << a[i].English << "," << a[i].Physical << "," << a[i].Chemistry << "," << a[i].Biology
            << "," << a[i].History << "," << a[i].Geography << "," << a[i].GDCD << "," << a[i].khoiA << "," << a[i].khoiA1 << "," << a[i].khoiB << "," << a[i].khoiD << endl;
        //cout << a[i].SBD << "," << a[i].Math << "," << a[i].Literature << "," << a[i].English << "," << a[i].Physical << "," << a[i].Chemistry << "," << a[i].Biology
            //<< a[i].History << "," << a[i].Geography << "," << a[i].GDCD << "," << a[i].khoiA << "," << a[i].khoiA1 << "," << a[i].khoiB << "," << a[i].khoiD << endl;
    }
    fout.close();
}