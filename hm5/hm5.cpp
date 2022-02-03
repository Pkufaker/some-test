#include<fstream>
#include<iostream>
#include<string>
#include<vector>
#include <algorithm> 
#include<set>
using namespace std;
void show(vector<string> a);
int main()
{
	ifstream f1,f2;
	f1.open("1.txt");
	f2.open("2.txt");
	vector<string> guest1,guest2;
	string ch;
	while(f1>>ch)
		guest1.push_back(ch);
	while(f2>>ch)
		guest2.push_back(ch);
	sort(guest1.begin(),guest1.end());sort(guest2.begin(),guest2.end());
	show(guest1);show(guest2);
	guest1.insert(guest1.end(),guest2.begin(),guest2.end());
	set<string> guestall(guest1.begin(),guest1.end());
	guest1.assign(guestall.begin(),guestall.end());
	sort(guest1.begin(),guest1.end());
	ofstream f3;
	f3.open("guestall.txt");
	for(auto x:guest1)f3<<x<<endl;
	f1.close();f2.close();f3.close();
	return 0;
}
void show(vector<string> a)
{
	for(int i=0;i<a.size();i++)
		cout<<a[i]<<endl;
}