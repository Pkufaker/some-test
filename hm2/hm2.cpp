#include<fstream>
#include<string>
#include<iostream>
using namespace std;
int main()
{
	ifstream fout1,fout2;
	ofstream write1;
	char ch;
	fout1.open("1.txt",ios_base::in);
	fout2.open("2.txt",ios_base::in);
	write1.open("final.txt");
	char l1[80],l2[80];
	string l3;
	while(fout1.getline(l1,80)&&fout2.getline(l2,80))
	{
		strcat(l1," ");
		l3=string(strcat(l1,l2));
		l3+="\n";
		write1<<l3;
	}
	if(l1)write1<<l1;
	if(l2)write1<<l2;
	write1<<endl;
	while(fout1.getline(l1,80))
	{
		write1<<l1<<endl;
	}
	while(fout2.getline(l2,80))
	{
		write1<<l2;
	}
	fout1.close();
	fout2.close();
	write1.close();
	return 0;
}
