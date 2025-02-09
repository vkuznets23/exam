#pragma once
#include <iostream>

class	ATarget;

class	ASpell {
	private:
		std::string	_name;
		std::string	_effects;
	public:
		ASpell();
		ASpell(const std::string &name, const std::string &effects);
		ASpell(const ASpell &o);
		ASpell &operator=(const ASpell &o);
		virtual ~ASpell();

		std::string const &getName() const;
		std::string const &getEffects() const;

		void	launch(ATarget const &target) const;
		virtual ASpell *clone() const = 0;
};

#include "ATarget.hpp"
