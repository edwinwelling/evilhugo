#ifndef KAST_H
#define KAST_H
#pragma once
#include <ostream>
#include <vector>


class OpenTeSchuiven {
	public:
		virtual int schuif_laatje_open(size_t nummer_van_laatje) const = 0;
};

class Kast : public OpenTeSchuiven
{
	private:
		std::vector<int> laatjes;
	friend std::ostream& operator<<(std::ostream& os, const Kast& obj);

	public:

		Kast(size_t aantal_laatjes);
		~Kast() = default;

		int schuif_laatje_open(size_t nummer_van_laatje) const override;

};

std::ostream& operator<<(std::ostream& os, const Kast& obj);

#endif