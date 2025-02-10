#include "ATarget.hpp"

ATarget::ATarget() {}

ATarget::ATarget(std::string const &type): _type(type) {}

ATarget::ATarget(const ATarget &o): _type(o._type) {}

ATarget &ATarget::operator=(const ATarget &o) {
	if (this != &o)
		_type = o._type;
	return *this;
}

ATarget::~ATarget() {}

const std::string &ATarget::getType() const {
	return _type;
}

void	ATarget::getHitBySpell(ASpell const &ref) const {
	std::cout << _type << " has been " << ref.getEffects() << "!" << std::endl;
}
