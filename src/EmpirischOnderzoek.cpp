#include "EmpirischOnderzoek.hpp"
#include "GemeenSpelletjeVanHugo.hpp"
#include <iostream>

EmpirischOnderzoek::EmpirischOnderzoek(
    int hoe_vaak_gaan_we_een_spelletje_spelen, int aantal_heinies, ideetje hoe_gaan_ze_het_aanpakken )
    : aantal_keren_dat_ze_eruit_gegooid_worden(0),
      aantal_keren_dat_ze_bij_de_GGD_mogen_blijven(0),
      hoe_vaak_gaan_we_een_spelletje_spelen(
          hoe_vaak_gaan_we_een_spelletje_spelen),
      aantal_heinies(aantal_heinies),
      hoe_gaan_ze_het_aanpakken(hoe_gaan_ze_het_aanpakken) {}

void EmpirischOnderzoek::hugo_klaar_beginnen_maar() {
  for (int we_tellen_een_spelletje = 0;
       we_tellen_een_spelletje < hoe_vaak_gaan_we_een_spelletje_spelen;
       we_tellen_een_spelletje++) {

    GemeenSpelletjeVanHugo een_spelletje(aantal_heinies, hoe_gaan_ze_het_aanpakken);

    een_spelletje.speel();

    if (een_spelletje.hugo_heeft_gewonnen()) {
      std::cout << "Helaas, Hugo de J. mag de software heinies naar huis "
                   "sturen zonder water en brood.\n";
      aantal_keren_dat_ze_eruit_gegooid_worden++;
    } else {
      std::cout << "Hugo de J. heeft pech. De softwware heinies kunnen bij de "
                   "GGD blijven werken.\n";
      aantal_keren_dat_ze_bij_de_GGD_mogen_blijven++;
    }
  }
}

double EmpirischOnderzoek::wat_was_nu_de_kans_dat_ze_mochten_blijven() {
  const int hoeveel_pogingen_hadden_we_eigenlijk =
      aantal_keren_dat_ze_eruit_gegooid_worden +
      aantal_keren_dat_ze_bij_de_GGD_mogen_blijven;
  return static_cast<double>(aantal_keren_dat_ze_bij_de_GGD_mogen_blijven) /
         static_cast<double>(hoeveel_pogingen_hadden_we_eigenlijk);
}