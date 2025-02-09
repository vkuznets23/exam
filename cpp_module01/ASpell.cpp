#include "ASpell.hpp"

ASpell::ASpell() {}

ASpell::ASpell(const std::string &name, const std::string &effects): _name(name), _effects(effects) {}

ASpell::ASpell(const ASpell &o): _name(o._name), _effects(o._effects) {}

ASpell &ASpell::operator=(const ASpell &o) {
	if (this != &o) {
		_name = o._name;
		_effects = o._effects;
	}
	return *this;
}

ASpell::~ASpell() {}

const std::string &ASpell::getName() const {
	return this->_name;
}

const std::string &ASpell::getEffects() const {
	return this->_effects;
}

void	ASpell::launch(ATarget const &target) const {
	target.getHitBySpell(*this);
}
