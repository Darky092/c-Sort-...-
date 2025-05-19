#pragma once
#include <iostream>
#include <numeric>
#include <vector>
#include <algorithm>
using namespace std;

double Average(const vector<int>& xs)
{
	if (xs.empty()) 
	{
		return 0.0;
	}
	double sum = accumulate(xs.begin(), xs.end(), 0.0);
	return sum / xs.size();
}

string StopWordsSum(const string &  x, const string & y) 
{
	return x.empty() ? "-" + y : x + " -" + y;
}



string AddStopWords(const string& query, const vector<string>& stop_words) {
	string sum = accumulate(stop_words.begin(), stop_words.end(), string(), StopWordsSum);
	return query +" " + sum;
}


void TaskThree();

void Choise() {

	cout << "do you want try again? y/n";
	char choise;
	cin >> choise;
	if (choise == 'y') {
		TaskThree();
	}
	else if (choise == 'n') {
		cout << "out" << endl;
	}
	else {
		Choise();
	}
}


void TaskOne() 
{



	cout << Average({ 1, 2, 2 }) << endl;




}



void TaskTwo() 
{
	vector <string> stop = { "hello","bye" };
	string query = "see you next time";
	cout << AddStopWords(query, stop) << endl;
}

void TaskThree() 
{
	int randNumber = rand() % 100 + 1;

	for (int i = 0; i <= 7; i++) 
	{
		cout << "enter the number \n";
		int x;
		cin >> x;
		if (randNumber == x) 
		{
			cout << "you was right, number is " << randNumber << endl;
			Choise();
			break;
		}
		else if (randNumber != x) 
		{
			if (randNumber - x > 10) 
			{
				cout << "you wasnt right, very cold, try bigger" << endl;
			}
			else if (randNumber - x <= 10) 
			{
				cout << "you wasnt right, hot"<< endl;
			}
			else if (randNumber - x < 0) 
			{
				cout << "you wasnt right, very cold, try less"<< endl;
			}

		}
	}
	Choise();

}

