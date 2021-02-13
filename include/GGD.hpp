#pragma once
#include <queue>
#include <memory>
#include "Heini.hpp"
#include "Ideetje.hpp"

class GGD {
    public:
    static std::queue<std::unique_ptr<Heini>> kom_achter_jullie_scherm_vandaan(int aantal, ideetje hoe_gaan_ze_het_aanpakken);
};