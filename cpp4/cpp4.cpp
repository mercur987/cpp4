#include <iostream>
#include "getVolumeSurface.h"
using namespace std;
void getVolumeSurface(double x, double y, double z,double &volume,double &surface) {
	volume= x * y * z;
	surface = 2 * (x * y + x * z + y * z);
  }
int main() {
	double x, y, z;
	double volume=0, surface=0;
	cout << "幅を入力:";
	cin >> x;
	cout << "高さを入力:";
	cin >> y;
	cout << "奥行を入力:";
	cin >> z;
	getVolumeSurface(x, y, z,volume,surface);
	cout << "体積は" << volume << endl << "表面積は" << surface << endl;
	return 0;
}