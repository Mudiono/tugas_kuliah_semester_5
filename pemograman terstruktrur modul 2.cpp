#include <iostream>
using namespace std;
int main ()

{
	int j1, m1, d1, t1, j2, m2, d2, t2,selisih;
	cout <<"DATA 1\n";
	cout <<"MASUKAN JAM = ", j1;
	cin >> j1;
	cout <<"MASUKAN MENIT = ", m1;
	cin >> m1;
	cout <<"MASUKAN DETIK = ", d1;
	cin >> d1;
	t1=(j1*3600)+(m1*60)+(d1);
	cout <<"Total Detik = " <<t1<<endl;
	cout <<"DATA 2\n";
	cout <<"MASUKAN JAM = ", j2;
	cin >> j2;
	cout <<"MASUKAN MENIT = ", m2;
	cin >> m2;
	cout <<"MASUKAN DETIK = ", d2;
	cin >> d2;
	t2=(j2*3600)+(m2*60)+(d2);
	selisih = t1 - t2;
	cout <<"Total Detik = " <<t2<<endl;
	cout <<"selisih data 1 dan data 2 = " <<selisih;

	

}