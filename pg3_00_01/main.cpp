#include <iostream>
#include <Windows.h>
#include <stdio.h>
#include <list>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main() {

	// inta (5)

	vector<string> a = {
	    "k024g1017 @g.neec.ac.jp", "k024g0033 @g.neec.ac.jp", "k024g0057 @g.neec.ac.jp", "k024g0020 @g.neec.ac.jp", "k024g0109 @g.neec.ac.jp", "k024g1031 @g.neec.ac.jp", "k024g0004 @g.neec.ac.jp",
	    "k024g0027 @g.neec.ac.jp",  "k024g0058 @g.neec.ac.jp", "k022g0113 @g.neec.ac.jp", "k024g0007 @g.neec.ac.jp", "k024g0083 @g.neec.ac.jp", "k024g0110 @g.neec.ac.jp", "k024g0066 @g.neec.ac.jp",
	    "k023g0029 @g.neec.ac.jp",  "k024g1030 @g.neec.ac.jp", "k024g0106 @g.neec.ac.jp", "k024g0089 @g.neec.ac.jp", "k024g0101 @g.neec.ac.jp", "k024g0035 @g.neec.ac.jp", "k024g1025 @g.neec.ac.jp",
	    "k024g0059 @g.neec.ac.jp",  "k024g0006 @g.neec.ac.jp", "k023g0122 @g.neec.ac.jp", "k024g0028 @g.neec.ac.jp", "k024g1024 @g.neec.ac.jp", "k024g0108 @g.neec.ac.jp", "k024g0061 @g.neec.ac.jp",
	    "k024g0104 @g.neec.ac.jp",  "k024g0038 @g.neec.ac.jp", "k024g0032 @g.neec.ac.jp", "k024g0026 @g.neec.ac.jp", "k024g0001 @g.neec.ac.jp", "k024g0009 @g.neec.ac.jp", "k024g0112 @g.neec.ac.jp",
	    "k024g0011 @g.neec.ac.jp",  "k024g0085 @g.neec.ac.jp", "k024g0111 @g.neec.ac.jp", "k024g0045 @g.neec.ac.jp", "k024g0103 @g.neec.ac.jp", "k024g1002 @g.neec.ac.jp", "k024g0078 @g.neec.ac.jp",
	    "k024g0044 @g.neec.ac.jp",  "k024g0008 @g.neec.ac.jp", "k024g0075 @g.neec.ac.jp", "k024g0091 @g.neec.ac.jp", "k024g0064 @g.neec.ac.jp", "k024g0051 @g.neec.ac.jp", "k024g0093 @g.neec.ac.jp",
	    "k024g0024 @g.neec.ac.jp",
	};
	cout << "*学籍番号*" << endl; 
	for (int i = 0; i < a.size(); i++) 
	{
	cout << a[i] << endl;
	}
	// 昇順に並べ替え
	sort(a.begin(), a.end());

	cout<<"*学籍番号の整列*" << endl;
	// 全要素を表示
	for (int i = 0; i < a.size(); i++)
	{
		cout << a[i] << endl;
	}

	return 0;
}