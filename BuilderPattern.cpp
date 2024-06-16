#include <iostream>
#include<string>
using namespace std;
class Burger
{
public:
	int tomato;
	string bread;
	string meat;
	int cucumber;

	void show() {
		cout << "Tomato: " << tomato << endl;
		cout << "Meat: " << meat << endl;
		cout << "Bread: " << bread << endl;
		cout << "Cucumber: " <<cucumber << endl;

	}
};

class Cook {
private:
	Burger* result;
public:
	Cook() {}
	~Cook() {
		delete result;
	}
	Cook& reset() {
		this->result = new Burger();
		return *this;
	}
	Cook& setTomato(int tomato) {
		this->result->tomato = tomato;
		return *this;
	}
	Cook& setBread(string bread) {
		this->result->bread = bread;
		return *this;

	}
	Cook& setMeat(string meat) {
		this->result->meat = meat;
		return *this;
	}
	Cook& setCucumber(int cucumber) {
		this->result->cucumber = cucumber;
		return *this;
	}
	Burger* getResult() {
		return this->result;
	}	
};

class Director {
	Cook bob;
public:
	Burger* createBalckbur() {
		return bob.reset().setBread("Black").setTomato(1).setMeat("Beef").setCucumber(4).getResult();
	}
	Burger* createAngus() {
		return bob.reset().setBread("White").setTomato(3).setMeat("Pork").setCucumber(2).getResult();
	}
};

int main()
{
	Director bobik;
	bobik.createBalckbur()->show();
	cout << endl;
	bobik.createAngus()->show();


	
}

