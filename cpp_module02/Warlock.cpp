#include "Warlock.hpp"

Warlock::Warlock(std::string const &name, std::string const &title): _name(name), _title(title) {
	std::cout << _name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock() { //!
	std::cout << _name << ": My job here is done!" << std::endl;
}

const std::string &Warlock::getName() const {
	return _name;
}

const std::string &Warlock::getTitle() const {
	return _title;
}

void	Warlock::setTitle(std::string const &title) {
	_title = title;
}

void	Warlock::introduce() const {
	std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
}

void	Warlock::learnSpell(ASpell *ptr) { //!
	_spellBook.learnSpell(ptr);
}

void	Warlock::forgetSpell(std::string const &name) { //!
	_spellBook.forgetSpell(name);
}

void	Warlock::launchSpell(std::string const &name, ATarget const &ref) { //!
	ASpell *spell = _spellBook.createSpell(name);
	if (spell)
		spell->launch(ref);
}

