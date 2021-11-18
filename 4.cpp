#include<iostream>
using namespace std;
static int i=1;
void type (int a) {
	if (i == 1) {
		cout << "Hello world!I was born!!!" << endl;
		i++;
	}
	if (i > 1 && i <= 1 + a) {
		cout << "I'm alive" << endl;
		i++;
	}
	if (i > a + 1) {
		cout << "Bye, bye, dear, I'm already asleep..." << endl;//
		i++;
	}
}
int main() {
	int x;
	cin >> x;
	type(x);
	type(x);
	type(x);
	type(x);
	type(x);
	type(x);
	type(x);
	type(x);
	type(x);
}