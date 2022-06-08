#include <bits/stdc++.h>
using namespace std;

int main(){
double a,b,c,p;
cout<<"输入三角形三边长，用空格隔开：";
cin>>a>>b>>c;
p=(a+b+c)/2;
cout<<"三角形面积是"<<sqrt(p*(p-a)*(p-b)*(p-c))<<"或 根号下"<<p*(p-a)*(p-b)*(p-c)<<endl;
system("pause");
	return 0;
}
