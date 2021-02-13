#pragma once
#include "Kast.hpp"
#include "Heini.hpp"
#include "Ideetje.hpp"
#include <queue>
#include <memory>

class GemeenSpelletjeVanHugo {
    private:
     Kast hugos_kast;
     std::queue<std::unique_ptr<Heini>> wachtkamer;
      bool een_ongelukige_gevonden;

    public:
    GemeenSpelletjeVanHugo(int aantal_heinies, ideetje hoe_gaan_ze_het_aanpakken);

    void speel();

    bool hugo_heeft_gewonnen() const;
    
};