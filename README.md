# evilhugo

Een opwarmer voor morgen op het gebied van wiskunde waar ik de slechtste punten voor heb gehaald omdat ik het gewoon niet begrijp: kansrekenen e.d.

100 software engineers die onder leiding van Hugo de J. de exportfuntie hebben gemaakt voor de GGD staan op het punt op door dezelfde Hugo de J. op straat te worden gezet. Maar, vind Hugo de J., ik wil ze best clementie geven en ze in dienst houden maar alleen als zij slagen in de volgende opgave.

Elke software heini krijgt een uniek BSN nummer aangewezen. De nummer 1 t/m 100. Daarnaast is er een hele grote kast met 100 laden. In elke lade wordt totaal willekeurig een kaart gelegd met daarop een een getal tussen 1 en 100. Ook deze kaarten zijn uniek, dus elk nummer tussen 1 en 100 komt maar één keer voor.

Iedere software heini krijgt, zonder dat de andere heinies mogen meekijken, één kans om van de 100 laden van de kast er 50 open te maken. Elke keer kijkt de heini of in de la de kaart ligt met zijn BSN nummer. Zo ja: mooi. Hugo maakt de heinies blij met de volgende mededeling: ‘“Als jullie het voor elkaar krijgen om allemaal jullie eigen nummer te vinden in de kast dan mogen jullie allemaal blijven”.

“Er zijn nog wel twee voorwaarde” zegt Hugo. “Jullie mogen van te voren even als slimme heinies overleggen, maar als de spel op de wagen is mogen jullie niet meer met elkaar praten.” 

De opwarmer is: wat is de kans dat de software heinies bij de GGD mogen blijven? 


 De moeilijkheid komt morgen, dus het antwoord op deze vraag kan hier bediscussieerd worden.


./bin/main 10 1000 WILLEKEUR of ./bin/main 10 1000 EERSTE

Wil je zelf een strategie testen:

1) maak een nieuwe enum ```ideetje``` in [Ideetje.hpp](include/Ideetje.hpp)
2) complementeer ```ideetje maak_es_een_ideetje(const std::string &ideetje_als_een_woordje)``` in [Ideetje.cpp](src/Ideetje.cpp)
3) complementeer ```std::string maak_es_een_woordje(const ideetje idee)``` in [Ideetje.cpp](src/Ideetje.cpp)
4) maak je eigen class gebasees op ```class EenIdee``` in [EenIdee.hpp](include/EenIdee.hpp)
5) breid de factory method ```static std::unique_ptr<EenIdee> DeGroteOverlegRonde::kom_met_een_idee(ideetje welk, int aantal_keer_open_en_dicht)``` in [DeGroteOverlegRonde.cpp](src/DeGroteOverlegRonde.cpp) uit met de net gemaakt ingredienten

Nu even een make in de root en voila. Er kan een onderzoekje worden gestart.
