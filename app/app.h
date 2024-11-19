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
		virtual ~insect() = default;
	};

	class spider : public animal {
	public:

		virtual ~spider() = default;
	};

	class bird : public animal {
	public:
		virtual ~bird() = default;
	};

	class cockroach : public insect {
	public :
		virtual std::string species() const override;
		virtual unsigned legs() const override;
	};

	class sparrow : public bird {
	public:
		virtual std::string species() const override;
		virtual unsigned legs() const override;
	};

	class tarantula : public spider {
	public:
		virtual std::string species() const override;
		virtual unsigned legs() const override;
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