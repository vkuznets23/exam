#pragma once
#include <iostream>
# include <string> //!
# include <vector> //!
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"

class Warlock {
private:
	std::string _name;
	std::string _title;
	SpellBook _spellBook; //!
	Warlock();
	Warlock(const Warlock &o);
	Warlock &operator=(const Warlock &o);

public:
	Warlock(std::string const &name, std::string const &title);
	~Warlock();

	std::string const &getName() const;
	std::string const &getTitle() const;

	void	setTitle(std::string const &title);

	void	introduce() const;

	void	learnSpell(ASpell *ptr);
	void	forgetSpell(std::string const &name); //!
	void	launchSpell(std::string const &name, ATarget const &ref); //!
};
