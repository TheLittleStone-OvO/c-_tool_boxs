#include <bits/stdc++.h>
using namespace std;

int main() {
	while (1) {
		double a1, b1, a2, b2;
		cout << "输入第一组坐标(它应该像x y那样，输完后按回车,可以点击X号退出)：";
		cin >> a1 >> b1;
		cout << "输入第二组坐标(它应该像x y那样，输完后按回车,可以点击X号退出)：";
		cin >> a2 >> b2;
		double k = (b2 - b1) / (a2 - a1);
		double b = (b1 - k * a1);
		if (k != 1 && k != -1 && k != 0) {
			if (b < 0) {
				cout << "哇！答案是:\n           y=" << k << "x" << b << endl;
				system("pause");
			}
			if (b == 0) {
				cout << "哇！答案是:\n           y=" << k << "x" << endl;
				system("pause");
			}
			if (b > 0) {
				cout << "哇！答案是:\n           y=" << k << "x+" << b << endl;
				system("pause");
			}
		} else if (k == 1) {
			if (b < 0) {
				cout << "哇！答案是:\n           y=x" << b << endl;
				system("pause");
			}
			if (b == 0) {
				cout << "哇！答案是:\n           y=x" << endl;
				system("pause");
			}
			if (b > 0) {
				cout << "哇！答案是:\n           y=x+" << b << endl;
				system("pause");
			}
		} else if (k == -1) {
			if (b < 0) {
				cout << "哇！答案是:\n           y=-x" << b << endl;
				system("pause");
			}
			if (b == 0) {
				cout << "哇！答案是:\n           y=-x" << endl;
				system("pause");
			}
			if (b > 0) {
				cout << "哇！答案是:\n           y=-x+" << b << endl;
				system("pause");
			}
		} else if (k == 0) {
			if (b != 0) {
				cout << "哇！答案是:\n           y=" << b << endl;
				system("pause");
			}
			if (b == 0) {
				system("color 0c");
				cout << "[ERROR] 答案不存在" << endl;
				system("pause");
			}
		}
	}
}
