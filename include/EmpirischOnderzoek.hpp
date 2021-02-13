#pragma once
#include "Ideetje.hpp"

class EmpirischOnderzoek {
private:
  int aantal_keren_dat_ze_eruit_gegooid_worden;

  int aantal_keren_dat_ze_bij_de_GGD_mogen_blijven;

  int hoe_vaak_gaan_we_een_spelletje_spelen;

  int aantal_heinies;

  ideetje hoe_gaan_ze_het_aanpakken;

public:
  EmpirischOnderzoek(int hoe_vaak_gaan_we_een_spelletje_spelen,
                     int aantal_heinies, ideetje hoe_gaan_ze_het_aanpakken);

  void hugo_klaar_beginnen_maar();

  double wat_was_nu_de_kans_dat_ze_mochten_blijven();
};
