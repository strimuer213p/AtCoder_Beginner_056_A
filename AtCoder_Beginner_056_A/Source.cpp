/*
問題文
シカのAtCoDeerくんとTopCoDeerくんが「正直者か嘘つきか」ゲームをしています。 このゲームでは、正直者は常にほんとうのことを言い、嘘つきは常に嘘を言います。 文字 a と b が入力として与えられます。これらはそれぞれ H か D のどちらかです。
a=H のとき、AtCoDeerくんは正直者です。 a=D のとき、AtCoDeerくんは嘘つきです。 b=H のとき、AtCoDeerくんは「TopCoDeerくんは正直者だ」と発言しています。 b=D のとき、AtCoDeerくんは「TopCoDeerくんは嘘つきだ」と発言しています。
これらから判断して、TopCoDeerくんが正直者かどうか判定してください。
*/

//敗因日本語が読めない

#include<iostream>

int main() {
	char a, b;
	std::cin >> a >> b;

	if (a == 'H') {
		std::cout << (b == 'H' ? 'H' : 'D') << std::endl;
	}

	if (a == 'D') {
		std::cout << (b == 'H' ? 'D' : 'H') << std::endl;
	}

	return 0;
}