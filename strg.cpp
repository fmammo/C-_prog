// A program which Inserts a dash character (-) between two odd numbers in a given string of numbers
#include <iostream>
#include <string>

using namespace std;

string Insert_dash(string n_str) {

	string res_str = n_str;

	for (int x = 0; x < n_str.length() - 1; x++)
	{
		if ((n_str[x] == '1' || n_str[x] == '3' || n_str[x] == '5' || n_str[x] == '7' || n_str[x] == '9') && (n_str[x + 1] == '1' || n_str[x + 1] == '3' || n_str[x + 1] == '5' || n_str[x + 1] == '7' || n_str[x + 1] == '9'))
		{
			res_str.insert(x+1,"-");
			n_str = res_str;
		}
	}

	return res_str;
}

int main() {

	cout << "Original num-890654378 : Result-> "<< Insert_dash("890654378") << endl;
	cout << "\nOriginal num-432156743 : Result-> "<< Insert_dash("432156743") << endl;
	cout << "\nOriginal num-432156743 : Result-> "<< Insert_dash("34635323928477") << endl;
	return 0;
}
