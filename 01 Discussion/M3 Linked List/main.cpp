#include <string>
#include "Person.h"


int main() {
	Person p;
	p.SetName("Alice");
	p.SetAge(30);
	p.SetHeight(160);
	p.SetWeight(50);
	p.Display();
}