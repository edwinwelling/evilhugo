#include "Heini.hpp"
#include <iterator>

Heini::Heini(int bsn, std::unique_ptr<EenIdee> een_idee)
    : nummerkes_die_ik_gezien_heb(), slim_idee(std::move(een_idee)),
      mijn_bsn(bsn) {
  slim_idee->bevind_zich_in_mijn_hoofd(*this);
}

void Heini::doorzoek(OpenTeSchuiven &iets_met_meerdere_laatjes) {

  while (slim_idee->ik_mag_nog_iets_mag_doen()) {
    int dit_laatje = slim_idee->welk_laatje_trek_ik_open();

    nummerkes_die_ik_gezien_heb.push_back(
        iets_met_meerdere_laatjes.schuif_laatje_open(dit_laatje));
  };
}

bool Heini::heeft_geluk() const {
  return std::find(std::begin(nummerkes_die_ik_gezien_heb),
                   std::end(nummerkes_die_ik_gezien_heb),
                   mijn_bsn) != std::end(nummerkes_die_ik_gezien_heb);
}

std::ostream &operator<<(std::ostream &os, const Heini &heini) {
  os << "Heini met BSN " << heini.mijn_bsn
     << " geeft de volgende nummerkes gezien: ";

  std::copy(heini.nummerkes_die_ik_gezien_heb.begin(),
            heini.nummerkes_die_ik_gezien_heb.end(),
            std::ostream_iterator<int>(os, ","));

  os << " en heeft ";

  if (!heini.heeft_geluk()) {
    os << "geen ";
  }
  os << "geluk.";

  return os;
}
