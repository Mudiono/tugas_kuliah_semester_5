#include <iostream>
#include <cstdlib>
using namespace std;
int main(int argc, char** argv)
{              int a,b,c,d,e=0;
                cout<<"Masukkan angka yang ingin dikali : ";
                cin>>a;
                cout<<"Masukkan angka yang dijadikan pengali : ";
                cin>>b;
                for(d=1; d<=abs(b); d++)
                                e=e+a;
                if(b<0)
                                e=-e;
                cout<<a<<" x "<<b<<" = "<<e;
                return 0;       
				       }