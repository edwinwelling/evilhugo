#include "EenIdee.hpp"

class PakAltijdEerste : public EenIdee {

public:
    PakAltijdEerste( int aantal_keer_open_en_dicht) : EenIdee( aantal_keer_open_en_dicht ) {

    }

    int welk_laatje_trek_ik_echt_open() override {
        return 1;
    };
};