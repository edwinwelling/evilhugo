#include "Ideetje.hpp"

ideetje maak_es_een_ideetje(const std::string &ideetje_als_een_woordje) {
  ideetje dit_gaan_we_doen = ideetje::GEEN_IDEE;
  if (ideetje_als_een_woordje.compare("WILLEKEUR") == 0) {
    dit_gaan_we_doen = ideetje::PAK_WILLEKEURIG;
  } else if (ideetje_als_een_woordje.compare("EERSTE") == 0) {
    dit_gaan_we_doen = ideetje::PAK_EERSTE;
  } else if (ideetje_als_een_woordje.compare("WERELDIDEE") == 0) {
    dit_gaan_we_doen = ideetje::WERELDIDEE;
  }
  return dit_gaan_we_doen;
}

std::string maak_es_een_woordje(const ideetje idee) {
  switch (idee) {
  case ideetje::PAK_WILLEKEURIG:
    return "het idee van totale willekeur";
    break;
  case ideetje::PAK_EERSTE:
    return "het idee van pak altijd laatje 1";
    break;
  case ideetje::WERELDIDEE:
    return "het idee is werelds";
    break;
  default:
    return "een onbekend idee";
    break;
  }
}