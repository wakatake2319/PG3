#include <iostream>
#include <Windows.h>
#include <stdio.h>
#include <list>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;


template<typename T> 
T Min(T a, T b) {
	if (a > b) {
		return static_cast<double>(b);
	} else {
		return static_cast<double>(a);
	}
}


int main() {

	//計算と結果出力
	printf("%d\n", Min<int>(128, 256));
	printf("%f\n", Min<float>(52.5f, 55.0f));
	printf("%lf\n", Min<double>(3.14159265, 2.7182818281));

	return 0;

}