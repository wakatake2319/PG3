#include <iostream>
#include <Windows.h>
#include <stdio.h>
#include <list>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;



int Recursive(int kyuuryou, int zikan, int kotei) {
	if (kyuuryou >= kotei) {
		printf("%d時間後に超える", zikan);
		return zikan;
	}
	printf("%d時間 |  %d　%d\n", zikan,kyuuryou, kotei);
	kyuuryou = kyuuryou * 2 - 50;

	return (Recursive(kyuuryou, ++zikan, kotei +1226));
}

int main() {

	int saiki = 100;
	int ippan = 1226;
	int zikan = 1;
	int resullt1 = Recursive(saiki, zikan, ippan);

	return 0;
}
