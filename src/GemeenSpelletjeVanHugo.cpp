#include "GemeenSpelletjeVanHugo.hpp"
#include "Ideetje.hpp"
#include "GGD.hpp"
#include <iostream>

GemeenSpelletjeVanHugo::GemeenSpelletjeVanHugo(int aantal_heinies, ideetje hoe_gaan_ze_het_aanpakken)
    : hugos_kast(aantal_heinies),
      wachtkamer(GGD::kom_achter_jullie_scherm_vandaan(aantal_heinies, hoe_gaan_ze_het_aanpakken)), een_ongelukige_gevonden(false) {}

void GemeenSpelletjeVanHugo::speel() {

    std::vector<std::unique_ptr<Heini>> slachtbank;
    slachtbank.reserve(wachtkamer.size());

    while( !wachtkamer.empty() ) {
        Heini& heini= *wachtkamer.front();
        heini.doorzoek(hugos_kast);
        slachtbank.push_back(std::move(wachtkamer.front()));
        wachtkamer.pop();
    }

  
  for( auto& heini : slachtbank ) {
      std::cout << *heini << '\n';
  }

  een_ongelukige_gevonden = ( std::find_if(std::begin(slachtbank), std::end(slachtbank),[](const std::unique_ptr<Heini>& heini) -> bool
    { return !heini->heeft_geluk(); } ) != std::end(slachtbank) );
}

bool GemeenSpelletjeVanHugo::hugo_heeft_gewonnen() const {
    return een_ongelukige_gevonden;
}