#pragma once

void main() {
	int fav_number; // What is your favorite number?
	char first_letter; // What is the first letter of your last name?
	bool like_Comp_Sci; // Do you like Computer Science?
	double fresh_gpa; // What was your Freshman GPA?

	cout << "What is you favorite number (whole number)?";
	cin >> fav_number;
	cout << "What is the first letter of your last name (Capital Letter)?";
	cin >> first_letter;
	cout << "Do you like Computer Sciece, yes (1) or no (0)? (1/0)";
	cin >> like_Comp_Sci;
	cout << "What was your Freshman GPA (to the hundreths place)?";
	cin >> fresh_gpa;


	cout << "Your favorite number is : " << fav_number << endl;
	cout << "Your first letter of your last name is : " << first_letter << "\n";
	cout << boolalpha << "It is " << like_Comp_Sci << " that you are in Computer Science." "\n";
	cout << "Your freshman GPA was : " << fresh_gpa << "\n";



		pause();
}
