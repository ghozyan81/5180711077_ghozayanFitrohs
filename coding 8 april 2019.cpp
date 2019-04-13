#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace::std;
/*float hitung2(int g ){
float h;
h=(g*30)/100;
return h;
}
float hitung3(int i){
float j;
j=(i*35)/100;
return j;
}
float hitung1(int k){
float l;
l=(k*15)/100;
return l;
}
float hitung(int e){
float f;
f=(e*20)/100;
return f;
}
int tambah(float v,float x,float y,float z){
int m;
m=v+x+y+z;
return m;
}
void cabang(int w){
if(w<=20)
    cout<<"E";
else if(w<=40)
    cout<<"D";
else if(w<=60)
    cout<<"C";
else if(w<=80)
    cout<<"B";
else if(w<=100)
    cout<<"A";
}
main()
{
int a,b,c,d;
cout<<"nilai uts     : ";cin>>a;
cout<<"rata rata : "<<hitung(a);cout<<endl;
cout<<"nilai uas     : ";cin>>b;
cout<<"rata rata : "<<hitung2(b);cout<<endl;
cout<<"nilai tugas   : ";cin>>c;
cout<<"rata rata : "<<hitung3(c);cout<<endl;
cout<<"nilai absensi : ";cin>>d;
cout<<"rata rata : "<<hitung1(d);cout<<endl;
cout<<"Total rata rata: "<<tambah(hitung(a),hitung2(b),hitung3(c),hitung1(d));
cabang(tambah(hitung(a),hitung2(b),hitung3(c),hitung1(d)));
}*/
struct apa{
char nhuruf;
double angka,uts,uas,tugas,absen,total;
};
apa wt;
double input(string text){
cout<<"input nilai "<<text<<" : ";cin>>wt.angka;
return wt.angka;
}
void cabang(double w){
if(w<=20)
    wt.nhuruf='E';
else if(w<=40)
    wt.nhuruf='D';
else if(w<=60)
    wt.nhuruf='C';
else if(w<=80)
    wt.nhuruf='B';
else if(w<=100)
    wt.nhuruf='A';
cout<<wt.nhuruf;
}
main(){
wt.uts=input("UTS");
wt.uas=input("UAS");
wt.tugas=input("TUGAS");
wt.absen=input("ABSENSI");
wt.total=wt.uts*0.2+wt.uas*0.3+wt.tugas*0.35+wt.absen*0.15;
cout<<"nilai total = "<<wt.total;
cabang(wt.total);
}
