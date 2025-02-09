#pragma once
#include <iostream>

class	ASpell;

class	ATarget {
	private:
		std::string	_type;
	public:
		ATarget();
		ATarget(const std::string &type);
		ATarget(const ATarget &o);
		ATarget &operator=(const ATarget &o);
		virtual ~ATarget();

		std::string const &getType() const;

		virtual ATarget *clone() const = 0;

		void	getHitBySpell(ASpell const &ref) const;
};

#include "ASpell.hpp"
