#include <cstdlib>
#include <ctime>
#include <iostream>
class Base {
	public:
		virtual ~Base() {}
};

class A : public Base {
};

class B : public Base {
};

class C : public Base {
};

void identify(Base* p) {
	A *a = NULL;
	B *b = NULL;
	C *c = NULL;

	a = dynamic_cast<A *>(p);
	if (a)
		std::cout << "pointer identifyer: it's A!" << std::endl;
	b = dynamic_cast<B *>(p);
	if (b)
		std::cout << "pointer identifyer: it's B!" << std::endl;
	c = dynamic_cast<C *>(p);
	if (c)
		std::cout << "pointer identifyer: it's C!" << std::endl;
}

void identify(Base& p) {
	A a;
	B b;
	C c;
	try {
		a = dynamic_cast<A&>(p);
		std::cout << "reference identifyer: it's A!" << std::endl;
	}
	catch (std::bad_cast) {}
	try {
		b = dynamic_cast<B&>(p);
		std::cout << "reference identifyer: it's B!" << std::endl;
	}
	catch (std::bad_cast) {}
	try {
		c = dynamic_cast<C&>(p);
		std::cout << "reference identifyer: it's C!" << std::endl;
	}
	catch (std::bad_cast) {}
}

Base *generate(void) {
	int nu = std::rand() % 3;
	Base *ptr;

	if (nu == 0) {
	 	ptr = new A();
		 std::cout << "A created" << std::endl;
	}
	else if (nu == 1) {
		ptr = new B();
		std::cout << "B created" << std::endl;
	}
	else  {
		ptr = new C();
		std::cout << "C created" << std::endl;
	}
	return (ptr);
}

int main () {
	Base *ptr;
	std::srand(std::time(NULL));
	ptr = generate();
	identify(ptr);
	identify(*ptr);

	return (0);
}