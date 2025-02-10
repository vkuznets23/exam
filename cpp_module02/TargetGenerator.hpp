#pragma once
#include <vector>
#include "ATarget.hpp"

class	TargetGenerator {
	private:
		std::vector <ATarget *> spells;
		TargetGenerator(const TargetGenerator &o);
		TargetGenerator &operator=(const TargetGenerator &o);
	public:
		TargetGenerator();
		virtual ~TargetGenerator();

		void learnTargetType(ATarget*spell);
		void forgetTargetType(std::string const &name);
		ATarget* createTarget(std::string const &name);
};
