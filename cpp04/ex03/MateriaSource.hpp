#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"


class MateriaSource : public IMateriaSource
{
	protected:
		AMateria *inventory[4];
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &obj);
		MateriaSource &operator=(const MateriaSource &obj);
		void learnMateria(AMateria *m);
		AMateria* createMateria(std::string const & type);
		virtual ~MateriaSource();
};

#endif
