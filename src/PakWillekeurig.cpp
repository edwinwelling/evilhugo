#include "PakWillekeurig.hpp"
#include <chrono>
#include <iostream>

PakWillekeurig::PakWillekeurig(int aantal_keer_open_en_dicht)
    : EenIdee(aantal_keer_open_en_dicht) {
  unsigned een_zaadje_geplant =
      std::chrono::system_clock::now().time_since_epoch().count();
  std::vector<int> we_gaan_hierin_husselen(aantal_keer_open_en_dicht * 2);
  we_gaan_hierin_husselen.reserve(aantal_keer_open_en_dicht * 2);

  std::iota(std::begin(we_gaan_hierin_husselen),
            std::end(we_gaan_hierin_husselen), 0);
  std::shuffle(std::begin(we_gaan_hierin_husselen),
               std::end(we_gaan_hierin_husselen),
               std::default_random_engine(een_zaadje_geplant));

  for (const auto &een_nummerke : we_gaan_hierin_husselen)
    deze_ga_ik_kiezen.push(een_nummerke);
}

int PakWillekeurig::welk_laatje_trek_ik_echt_open() {
  int het_wordt_deze = deze_ga_ik_kiezen.front();
  deze_ga_ik_kiezen.pop();
  return het_wordt_deze;
}