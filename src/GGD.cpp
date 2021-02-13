#include "GGD.hpp"
#include "DeGroteOverlegRonde.hpp"

std::queue<std::unique_ptr<Heini>> GGD::kom_achter_jullie_scherm_vandaan(int aantal, ideetje hoe_gaan_ze_het_aanpakken) {
    const int pogingen = aantal / 2;

    std::queue<std::unique_ptr<Heini>> crew;
    for (int bsn_nummerke = 1 ; bsn_nummerke <= aantal ; bsn_nummerke++) {
        
        std::unique_ptr<EenIdee> idee = DeGroteOverlegRonde::kom_met_een_idee( hoe_gaan_ze_het_aanpakken ,pogingen);

        std::unique_ptr<Heini> heini = std::make_unique<Heini>(bsn_nummerke, std::move(idee));

        crew.push(std::move(heini));
    }
    return crew;
}