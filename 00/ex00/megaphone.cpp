#include <iostream>
using namespace std;

int	main(int argc, char **argv) {
	string str;

	if (argc == 1) {
		cout<<"SILENCE"<<endl;
		return 1;
	}
	for (int i = 1; i < argc; i++) {
		str = argv[i];
		for (size_t j = 0; j < str.length(); j++) {
			cout<<(char)toupper(str[j]);
		}
	}
	cout<<endl;
}
