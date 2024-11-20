#pragma once
#include <string>
#include <memory>

namespace vsite::oop::v4 
{
	class animal {
	public:
		virtual ~animal() = default;
		virtual std::string species() const = 0;
		virtual unsigned legs() const = 0;
	};
	
	class insect : public animal {
	public:
		unsigned legs() const override;
	};
	class cockroach : public insect {
	public :
		std::string species() const override;
		
	};

	class bird : public animal {
	public:
		unsigned legs() const override;
	};
	class sparrow : public bird {
	public:
		std::string species() const override;
	};

	class spider : public animal {
		unsigned legs() const override;
	};
	class tarantula : public spider {
	public:
		std::string species() const override;
	};



	class leg_counter {
	private:
		unsigned int sumLegs = 0;

	public:
		virtual std::string add_animal(animal* x);
		unsigned legs() const;
	};

	std::unique_ptr<animal> animal_factory(int anm);

}