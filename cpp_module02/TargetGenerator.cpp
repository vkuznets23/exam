#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}

TargetGenerator::~TargetGenerator() {
	std::vector<ATarget *>::iterator it = this->spells.begin();
	while(it != this->spells.end()) {
		delete *it;
		++it;
	}
	this->spells.clear();
}

void	TargetGenerator::learnTargetType(ATarget *spell) {
	if (spell) {
		std::vector<ATarget *> :: iterator it = this->spells.begin();
		while (it != this->spells.end()) {
			if ((*it)->getType() == spell->getType())
				return;
			++it;
		}
	}
	this->spells.push_back(spell->clone());
}

void	TargetGenerator::forgetTargetType(std::string const &name) {
	std::vector<ATarget*> :: iterator it = this->spells.begin();
	while (it != this->spells.end()) {
		if ((*it)->getType() == name) {
			delete *it;
			it = this->spells.erase(it);
		}
		else
			++it;
	}
}

ATarget *TargetGenerator::createTarget(std::string const &name) {
	std::vector<ATarget *> :: iterator it = this->spells.begin();
	while (it != this->spells.end()) {
		if ((*it)->getType() == name) {
			return *it;
		}
		++it;
	}
	return nullptr;
}
