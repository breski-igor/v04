#include "app.h"
#include <algorithm>

namespace vsite::oop::v4
{
	std::string cockroach::species() const {
		return "cockroach";
	}
	unsigned int insect::legs() const {
		return 6;
	}

	std::string sparrow::species() const {
		return "sparrow";
	}
	unsigned int bird::legs() const {
		return 2;
	}

	std::string tarantula::species() const {
		return "tarantula";
	}
	unsigned int spider::legs() const {
		return 8;
	}

	std::string leg_counter::add_animal(animal* x) {
		sumLegs += x->legs();
		return x->species();
	}

	unsigned int leg_counter::legs() const {
		return sumLegs;
	}

	std::unique_ptr<animal> animal_factory(int anm) {
		switch (anm) {
		case 1:
			return std::make_unique<cockroach>();
		case 2:
			return std::make_unique<sparrow>();
		case 3:
			return std::make_unique<tarantula>();
		default:
			return nullptr;
		}
	}
}