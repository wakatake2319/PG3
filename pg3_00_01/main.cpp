#include <iostream>
#include <Windows.h>
#include <stdio.h>
#include <list>
using namespace std;

int main() {

	// 1970年の山手線の駅名を格納する可変長配列
	list<string> yamanoteLine = {"Tokyo",  "Kannda",    "Akihabara", "Okachimachi",  "Ueno",       "Uguisudani",   "Nippori",   "Tabata",   "Komagome", "Sugamo",
	                             "Otsuka", "Ikebukuro", "Mejiro",    "Takadanobaba", "Shin-Okubo", "Shinjuku",     "Yoyogi",    "Harajuku", "SHibuya",  "Ebisu",
	                             "Meguro", "Gotanda",   "Osaki",     "Shinagawa",    "Tamachi",    "Hamamatsucho", "Shimbashi", "Yurakucho"};

	printf("1970年\n"); 

	// 1970年の山手線表示
	for (const auto& station : yamanoteLine) {
		printf("%s\n", station.c_str()); // 各駅名を表示
	}

	printf("\n2019年\n"); 


	// 1970年の山手線に新駅を追加
	for (list<string>::iterator itr = yamanoteLine.begin(); itr != yamanoteLine.end(); ++itr) {
		if (*itr == "Nippori") {
			yamanoteLine.insert(++itr, "Nishi-Nippori"); // 田端の次に西日暮里追加
			break;                                         // 追加後、ループを終了
		}
	}

	// 1970年の山手線表示
	for (const auto& station : yamanoteLine) {
		printf("%s\n", station.c_str()); // 各駅名を表示
	}

		printf("\n2022年\n");

	// 1970年の山手線に新駅を追加
	for (list<string>::iterator itr = yamanoteLine.begin(); itr != yamanoteLine.end(); ++itr) {
		if (*itr == "Shinagawa") {
			yamanoteLine.insert(++itr, "Takanawa Gateway"); // 品川の次に高輪ゲートウェイ追加
			break;                                       // 追加後、ループを終了
		}
	}

	// 1970年の山手線表示
	for (const auto& station : yamanoteLine) {
		printf("%s\n", station.c_str()); // 各駅名を表示
	}



	return 0;
}