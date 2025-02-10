#pragma once
#include <iostream>

class	ATarget;

class	ASpell {
	private:
		std::string	_name;
		std::string	_effects;
	public:
		ASpell();
		ASpell(std::string const &name, std::string const &effects);
		ASpell(const ASpell &o);
		ASpell &operator=(const ASpell &o);
		virtual ~ASpell();

		std::string const &getName() const;
		std::string const &getEffects() const;

		virtual	ASpell *clone() const = 0;

		void	launch(ATarget const &ref) const;
};

#include "ATarget.hpp"
