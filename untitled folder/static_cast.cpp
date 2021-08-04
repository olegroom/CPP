#include <iostream>
#include <string>

class Parent {
	public:
		std::string parent_name;
		int age;
		Parent () {
			this->age = 50;
			this->parent_name = "Afanasiy";
		}
};

class child1 : public Parent {
	public:
		child1 () : Parent() {
			this->age = 25;
			this->child_name = "Igor";

		}
		std::string child_name;
};

class child2 : public Parent {
	public:
		child2 () : Parent () {
			this->age = 20;
			this->nam = "Lena";
		}
		std::string nam;
};

int		main(void) {
	child1 childone;
	std::cout << childone.child_name << std::endl;
	childone.child_name = "Sasha";
	Parent *par = &childone;
	child1 *childTwo = dynamic_cast<child1 *>(par);
	
	return (0);
}