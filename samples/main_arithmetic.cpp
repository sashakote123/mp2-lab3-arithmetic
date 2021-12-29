// реализация пользовательского приложения
#include <arithmetic.h>

using namespace std;

int main()
{
	string str;
	char tmp;
	char tmp2;
	for (int i = 0; i < 100; i++) {
		try {
			cout << "Enter your expression:\n";
			getline(cin, str);
			isCorrect(str);

			for (size_t i = 0; i < str.size(); i++) 
				if (str[i] == 'x') {
					
					cout << "Enter 'x':\n";
					cin >> tmp;
					str[i] = tmp;
					break;
				}
			for (size_t i = 0; i < str.size(); i++)
				if (str[i] == 'x') 
					str[i] = tmp;

			for (size_t i=0;i<str.size(); i++)
				if (str[i] == 'y') {				
					cout << "Enter 'y':\n";
					cin >> tmp2;
					str[i] = tmp2;
					break;
				}
			for (size_t i = 0; i < str.size(); i++)
				if (str[i] == 'y')
					str[i] = tmp2;



			Arithmetic res;
			cout << "Your expression is:\n";
			res.stringTo(str);
			res.print();
			cout << endl;
			res.ToPostfix();
			cout << endl;
			double result = res.calculate();
			cout << "Result:\n" << result << endl;
		}
		catch (char* smth) {
			cout << smth << endl;
		}
		cout << endl;
	}
	return 0;
	
}