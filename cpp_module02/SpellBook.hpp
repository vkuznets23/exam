#pragma once
#include <vector>
#include "ASpell.hpp"

class	SpellBook {
	private:
		std::vector <ASpell *> spells;
		SpellBook(const SpellBook &o);
		SpellBook &operator=(const SpellBook &o);
	public:
		SpellBook();
		virtual ~SpellBook();

		void learnSpell(ASpell*spell);
		void forgetSpell(std::string const &name);
		ASpell* createSpell(std::string const &name);
};
