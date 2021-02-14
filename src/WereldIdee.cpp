#include "WereldIdee.hpp"
#include "Heini.hpp"
#include <vector>

WereldIdee::WereldIdee(int aantal_keer_open_en_dicht)
    : EenIdee(aantal_keer_open_en_dicht) {}

int WereldIdee::welk_laatje_trek_ik_echt_open(){
    std::vector<int> nummerkes_gezien = ik_zit_in_het_hoofd_van_deze_heini->geef_nummerkes_die_ik_gezien_heb();
    if ( nummerkes_gezien.empty() ) {
        return ik_zit_in_het_hoofd_van_deze_heini->geef_mijn_bsn();
    }
    return nummerkes_gezien.back();
};