#include <iostream>
#include <string>

using namespace std; 

struct classmate_info{
	string name;
	int age;
	bool male;
	int grade;
	int Class;
 	int score;
};

int main(){
	classmate_info kevin = {
		"Kevin",
		10,
		true,
		4,
		1,
		100
	};
	cout << "Your name is " << kevin.name << "\nYour"
		 " age is " << kevin.age;
		  
}
