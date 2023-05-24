#include <iostream>
#include <vector>
#include <iterator>
#include <string>

class Snake  {
private:
	int _bones;
	double _meat;
	int _skin;
public:
	Snake(int bones, double meat, int skin) {
		_bones = bones;
		_meat = meat;
		_skin = skin;
	}
	void print_Snake() {
		std::cout << "Bones: " << _bones << std::endl;
		std::cout << "Meat: " << _meat << std::endl;
		std::cout << "Skin: " << _skin << std::endl;
	}
	int SetBones(int bones) {
		_bones = bones;
	}
	double SetMeat(double meat) {
		_meat = meat;
	}
	int SetSkin (int skin) {
		_skin = skin;
	}
	int GetBones() {
		return _bones;
	}
	double GetMeat() {
		return _meat;
	}
	int GetSkin() {
		return _skin;
	}
};
class Person {
private:
	std::string _name;
	int _age;
public:
	Person(std::string name, int age) {
		_name = name;
		_age = age;
	}
	void print_Person() {
		std::cout << "Name: " << _name << std::endl;
		std::cout << "Age: " << _age << std::endl;
	}
};
class Pupil {
private:
	std::string _name1;
	int _age1;
	std::vector <double> _marks;
public:
	Pupil(std::string name1, int age1, std::vector<double> marks) {
		_name1 = name1;
		_age1 = age1;
		_marks = marks;
	}
	void print_Pupil() {
		std::cout << "Name: " << _name1 << std::endl;
		std::cout << "Age: " << _age1 << std::endl;
		std::cout << "Marks: " << std::endl;
		for (int i = 0; i < _marks.size(); i++) {
			std::cout << _marks.at(i) << ' ';
		}
		std::cout << std::endl;
	}
};
class Professor {
private:
	std::string _name2;
	std::string _degree;
public:
	Professor(std::string name2, std::string degree) {
		_name2 = name2;
		_degree = degree;
	}
	void print_Professor() {
		std::cout << "Name: " << _name2 << std::endl;
		std::cout << "Degree: " << _degree << std::endl;
		
	}
};

class Client {
private:
	std::string _name3;
	int _Age;
	double _bill;
public:
	Client(std::string name, int age, double bill) {
		_name3 = name;
		_Age = age;
		_bill = bill;
	}
	void ShowData() {
		std::cout << "Name: " << _name3 << std::endl;
		std::cout << "Age: " << _Age << std::endl;
		std::cout << "Bill: " << _bill << std::endl;
	}
};

class Bank {
private:
	std::vector<Client*>_clients;
public:

	void AddClient(Client* client) {
		_clients.push_back(client);
	}
	void ShowClients() {
		for (const auto &it : _clients) // Определяет тип данных автоматически 
			it->ShowData();
	}
	void ShowClient(int index) {
		if (index > _clients.size())
			return;
		_clients.at(index - 1)->ShowData();
	}
};




int main() {
	setlocale(LC_ALL, "Ru");
	/*Snake S1(20, 25.0, 6);
	Snake S2(15, 19.85, 8);
	S1.print_Snake();
	std::cout << std::endl;
	S2.print_Snake();*/
	/*std::vector<double> marks = {7.0, 8.5};
	Person P1("John Snow", 18);
	Pupil S1("Luci Stone", 19, marks);
	Professor Pr1("Dr.Dre", "Medium");

	P1.print_Person();
	S1.print_Pupil();
	Pr1.print_Professor();*/
	Bank* bank = new Bank();
	Client* client1 = new Client("Bob", 20, 654166);
	Client* client2 = new Client("Alex", 21, 654171);
	Client* client3 = new Client("Alexa", 22, 654831);
	Client* client4 = new Client("John", 23, 643411);
	Client* client5 = new Client("Zoe", 24, 653266);
	bank->AddClient(client1);
	bank->AddClient(client2);
	bank->AddClient(client3);
	bank->AddClient(client4);
	bank->AddClient(client5);
	bank->ShowClients();
	bank->ShowClient(2);





	return 0;
}