#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

/*农场有n只鸡鸭排成队伍，鸡用C表示，鸭用D表示，鸡鸭不能相邻，只能调整排序使鸡鸭只有一处相邻，求需要最小的交换次数*/
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
