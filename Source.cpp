#include "c:\Users\james\Desktop\std_lib_facilities.h"

int main()
{
	vector<int> test{1, 2, 3, 4, 5}; //initialisation.
	/*vector <string> philosophers{"John", "Humes", "Hanjoy"};
	
	for (int i = 0; i < test.size(); i++)
		if (test[i] > philosophers.size())
			simple_error("Out of philosophers!");
		
		else cout << test[i] << " " << philosophers[i] << "\n";

	
	cout << test.size() << "\n";

	vector<int> v = { 5, 7, 9, 4, 6, 8 };
	for (int x : v) //for each int x in vector v
		v.push_back(999); //member function
		cout << x;
	*/

	/*read some temperatures into a vector
	vector <double> temps; //double declared, we need decimals for temperatures.
	for (double temp; cin >> temp;) //initialise temp, and while cin>temp is satisfied:
		temps.push_back(temp); //add the value of temp to temps.
	cout << "Temperatures entered: " << temps.size() << "\n"; //temps.size used to indicate objects stored.
	*/

	//compute mean and median temperatures

	/*vector<double> temps;
	for (double in_temp; cin >> in_temp;)
		temps.push_back(in_temp);

	//compute mean temp;
	double sum = 0;
	for (int x : temps) sum += x; //for every number x in temps, add this number x to sum.
	cout << "average(mean) temperature: " << sum / temps.size() << " degrees.\n";

	//compute median temp
	sort(temps); // set must be sorted first.
	cout << "average(median) temperature: " << temps[temps.size() / 2] << "\n";
	*/


	//simple dictionary: list of sorted roads

	/*vector<string> words;
	for (string temp; cin >> temp;)
		words.push_back(temp);
	cout << "Number of words: " << words.size() << ".\n";

	//sorting
	sort(words); //  !!!!THE TEST IS CONTINGENT UPON THIS SORTING- NO SORT, NO SIMPLE TEST!!!!

	for (int i = 0; i < words.size(); ++i)
		if (i == 0 || words[i - 1] != words[i]) //is this a new word?
			cout << words[i] << "\n"; //if it is, print.x

*/

	//bleeper

	string disliked = "Broccoli";
	vector<string> memwords;
	
	for (string input; cin >> input;) //for all string inputs #input#
		memwords.push_back(input);


			cout << " BEEP ";




		





}