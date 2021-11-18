#include<iostream>
using namespace std;
void create_iterator(int* a, int* b, int* c, int v1, int v2, int v3) {
	int sr;
	if (max(max(v1, v2), v3) == v1 && min(min(v1, v2), v3) == v2) {
		sr = v3;
	}
	if (max(max(v1, v2), v3) == v2 && min(min(v1, v2), v3) == v3) {
		sr = v1;
	}
	if (max(max(v1, v2), v3) == v1 && min(min(v1, v2), v3) == v3) {
		sr = v2;
	}
	*a = max(max(v1,v2),v3);//присвоение значений переменным.
	*b = sr;
	*c = min(min(v1, v2), v3);
	cout<<*a<<' ' <<*b<<' '<<*c;//
}
int main() {
	int p1, p2, p3;
	int* x;//инициализация указателей.
	int* y;
	int* z;
	x = &p1;
	y = &p2;
	z = &p3;
	int a, b, c;
	cin >> a >> b >> c;
	create_iterator(x, y, z, a, b, c);
}