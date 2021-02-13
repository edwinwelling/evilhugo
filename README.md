# evilhugo

./bin/main 10 1000 WILLEKEUR of ./bin/main 10 1000 EERSTE

Wil je zelf een strategie testen:

1) maak een nieuwe enum ```ideetje``` in [Ideetje.hpp](include/Ideetje.hpp)
2) complementeer ```ideetje maak_es_een_ideetje(const std::string &ideetje_als_een_woordje)``` in [Ideetje.cpp](src/Ideetje.cpp)
3) complementeer ```std::string maak_es_een_woordje(const ideetje idee)``` in [Ideetje.cpp](src/Ideetje.cpp)
4) maak je eigen class gebasees op ```class EenIdee``` in [EenIdee.hpp](include/EenIdee.hpp)
5) breid de factory method ```static std::unique_ptr<EenIdee> DeGroteOverlegRoude::kom_met_een_idee(ideetje welk, int aantal_keer_open_en_dicht)``` in [DeGroteOverlegRoude.hpp](include/DeGroteOverlegRoude.hpp) uit met de net gemaakt ingredienten

Nu even een make in de root en voila. Er kan een onderzoekje worden gestart.
