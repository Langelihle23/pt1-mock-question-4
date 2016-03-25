///////////////////////////////////////////////////////////////////////////////////////////////////
//                         COMPUTER METHODS 3 PRACTICAL TEST 1 (MOCK)
// Name:Langelihle Ngobese
// Student No:213571644
// Date: 
///////////////////////////////////////////////////////////////////////////////////////////////////

// ***** QUESTION 4 ****
// Question 4 has 3 parts (you do NOT need to include each class in a separate file!)
// 4.1 Create a virtual base class "Animal" which has two methods, name() and does(). 
// 4.2 From class "Animal", derive a concrete class "Bird" and "Dog".  Print appropriate message for
//     each method.
// 4.3 Write a driver program which creates an object of each type and demonstrates POLYMORPHISM. 

#include<iostream>
#include<string>
using namespace std;

class Animal{
public:
	virtual void name(){
		cout << "I am a animal" << endl;
	}
	virtual void does(){
		cout << "I can do many actions"<< endl;
	}

};

class Bird :public Animal{
public:
	void name(){
		cout << "I am a bird." << endl;
	}

	void does(){
		cout << "I fly and chirp." << endl;
	}
};

class Dog :public Animal{
public:
	void name(){
		cout << "I am a dog" << endl;
	}

	void does(){
		cout << "I run and bark." << endl;
	}
};

int main(){
	Animal anil;
	Bird andy;
	Dog anne;

	anil.name();
	anil.does();

	andy.name();
	andy.does();

	anne.name();
	anne.does();

	return 0;
}