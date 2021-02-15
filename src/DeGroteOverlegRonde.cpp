#include "DeGroteOverlegRonde.hpp"
#include "PakAltijdEerste.hpp"
#include "PakWillekeurig.hpp"
#include "WereldIdee.hpp"

std::unique_ptr<EenIdee>
DeGroteOverlegRonde::kom_met_een_idee(ideetje welk,
                                      int aantal_keer_open_en_dicht) {
  std::unique_ptr<EenIdee> idee;

  switch (welk) {
  case ideetje::PAK_EERSTE:
    idee = std::make_unique<PakAltijdEerste>(aantal_keer_open_en_dicht);
    break;
  case ideetje::PAK_WILLEKEURIG:
    idee = std::make_unique<PakWillekeurig>(aantal_keer_open_en_dicht);
    break;
  case ideetje::WERELDIDEE:
    idee = std::make_unique<WereldIdee>(aantal_keer_open_en_dicht);
    break;
  default:
    idee = std::make_unique<PakAltijdEerste>(aantal_keer_open_en_dicht);
  };

  return idee;
}

