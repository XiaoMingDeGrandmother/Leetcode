#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

/*ũ����nֻ��Ѽ�ųɶ��飬����C��ʾ��Ѽ��D��ʾ����Ѽ�������ڣ�ֻ�ܵ�������ʹ��Ѽֻ��һ�����ڣ�����Ҫ��С�Ľ�������*/
int ChickenAndDuck(string str) {

	int sum1 = 0;
	int sum2 = 0;
	int posc = 0;
	int posd = 0;
	int output;
	for (int i = 0; i != str.size(); i++) {
		if (str[i] != 'C' && str[i] != 'D')
			cout << "unvalid input" << endl;
		if (str[i] == 'C') {
			sum1 += i - posc;
			posc++;
		}
		if (str[i] == 'D') {
			sum2 += i - posd;
			posd++;
		}
	}
	output = sum1 > sum2 ? sum2 : sum1;
	return output;
}


int main() {


	string a = "CCDCCDCC";

	int sum = ChickenAndDuck(a);

	cout << sum << endl;

	return 0;
}
