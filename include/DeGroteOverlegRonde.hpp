#pragma once
#include <memory>
#include "EenIdee.hpp"
#include "Ideetje.hpp"

class DeGroteOverlegRonde { 
public:
    static std::unique_ptr<EenIdee> kom_met_een_idee(ideetje welk, int aantal_keer_open_en_dicht);
};