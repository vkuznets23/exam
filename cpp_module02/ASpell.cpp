#include "ASpell.hpp"

ASpell::ASpell() {}

ASpell::ASpell(std::string const &name, std::string const &effects): _name(name), _effects(effects) {}

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
	return _name;
}

const std::string &ASpell::getEffects() const {
	return _effects;
}

void	ASpell::launch(ATarget const &ref) const {
	ref.getHitBySpell(*this);
}
