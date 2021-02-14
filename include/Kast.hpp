#ifndef KAST_H
#define KAST_H
#pragma once
#include <ostream>
#include <vector>

class Kast
{
	private:
		std::vector<int> laatjes;
	friend std::ostream& operator<<(std::ostream& os, const Kast& obj);

	public:

		Kast(size_t aantal_laatjes);
		~Kast() = default;

		int schuif_laatje_open(size_t nummer_van_laatje) const;

};

std::ostream& operator<<(std::ostream& os, const Kast& obj);

#endif