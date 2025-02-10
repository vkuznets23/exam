#include "SpellBook.hpp"

SpellBook::SpellBook() {}

SpellBook::~SpellBook() {
	std::vector<ASpell *>::iterator it = this->spells.begin();
	while(it != this->spells.end()) {
		delete *it;
		++it;
	}
	this->spells.clear();
}

void	SpellBook::learnSpell(ASpell *spell) {
	if (spell) {
		std::vector<ASpell *> :: iterator it = this->spells.begin();
		while (it != this->spells.end()) {
			if ((*it)->getName() == spell->getName())
				return;
			++it;
		}
	}
	this->spells.push_back(spell->clone());
}

void	SpellBook::forgetSpell(std::string const &name) {
	std::vector<ASpell*> :: iterator it = this->spells.begin();
	while (it != this->spells.end()) {
		if ((*it)->getName() == name) {
			delete *it;
			it = this->spells.erase(it);
		}
		else
			++it;
	}
}

ASpell *SpellBook::createSpell(std::string const &name) {
	std::vector<ASpell *> :: iterator it = this->spells.begin();
	while (it != this->spells.end()) {
		if ((*it)->getName() == name) {
			return *it;
		}
		++it;
	}
	return nullptr;
}
