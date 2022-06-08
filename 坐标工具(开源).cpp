#include <bits/stdc++.h>
using namespace std;

int main(){
double a1,b1,a2,b2;
cout<<"输入第一组坐标(它应该像x y那样，输完后按回车)：";
cin>>a1>>b1;
cout<<"输入第二组坐标(它应该像x y那样，输完后按回车)：";
cin>>a2>>b2;
double k=(b2-b1)/(a2-a1);
double b=(b1-k*a1);
cout<<"哇！答案是:\n           y="<<k<<"x+"<<b<<endl;
system("pause");
	return 0;
}
