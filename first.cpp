#include <iostream>

using namespace std;

int main(){
	cout << "Hello World"<<endl;
	cout << "My name is Abhiraj";
	cout << "I am 18 years old";
	cout << "I study in Chitkara University";
	cout << "I am in group 1";
	return 0;
}
void group(){
	string group;
	cout << "Enter your group -->";
	cin >> group;
}
void Student(){
	string name;
	cout << "Enter your name:-- ";
	cin >> name;
	cout << "Hi " << name << " .";
}
group();
Student();
