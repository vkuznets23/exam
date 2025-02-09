#include "ATarget.hpp"

ATarget::ATarget() {}

ATarget::ATarget(const std::string &type): _type(type) {}

ATarget::ATarget(const ATarget &o): _type(o._type) {}

ATarget &ATarget::operator=(const ATarget &o) {
	if (this != &o) {
		_type = o._type;
	}
	return *this;
}

ATarget::~ATarget() {}

const std::string &ATarget::getType() const {
	return this->_type;
}

void	ATarget::getHitBySpell(ASpell const &ref) const {
	std::cout << this->_type << " has been " << ref.getEffects() << "!" << std::endl;
}
