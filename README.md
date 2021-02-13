# evilhugo

## Een stukkie tekst van een WhatsApp aan de Crew of 42 (https://www.42solutions.nl)

Een opwarmer voor morgen op het gebied van wiskunde waar ik de slechtste punten voor heb gehaald omdat ik het gewoon niet begrijp: kansrekenen e.d.

100 software engineers die onder leiding van Hugo de J. de exportfuntie hebben gemaakt voor de GGD staan op het punt op door dezelfde Hugo de J. op straat te worden gezet. Maar, vind Hugo de J., ik wil ze best clementie geven en ze in dienst houden maar alleen als zij slagen in de volgende opgave.

Elke software heini krijgt een uniek BSN nummer aangewezen. De nummer 1 t/m 100. Daarnaast is er een hele grote kast met 100 laden. In elke lade wordt totaal willekeurig een kaart gelegd met daarop een een getal tussen 1 en 100. Ook deze kaarten zijn uniek, dus elk nummer tussen 1 en 100 komt maar één keer voor.

Iedere software heini krijgt, zonder dat de andere heinies mogen meekijken, één kans om van de 100 laden van de kast er 50 open te maken. Elke keer kijkt de heini of in de la de kaart ligt met zijn BSN nummer. Zo ja: mooi. Hugo maakt de heinies blij met de volgende mededeling: ‘“Als jullie het voor elkaar krijgen om allemaal jullie eigen nummer te vinden in de kast dan mogen jullie allemaal blijven”.

“Er zijn nog wel twee voorwaarde” zegt Hugo. “Jullie mogen van te voren even als slimme heinies overleggen, maar als de spel op de wagen is mogen jullie niet meer met elkaar praten.” 

De opwarmer is: wat is de kans dat de software heinies bij de GGD mogen blijven? 


De moeilijkheid komt morgen, dus het antwoord op deze vraag kan hier bediscussieerd worden.

## Het stukkie tekst de dag erna

Terugkomende op de software heinies van Hugo de J.

De discussie in de WhatsApp heeft geleid tot het juiste kansreken-inzicht. De eerste software heini heeft 0.5 kans dat hij zijn eigen BSN treft tijdens het open maken van de 50 van de 100 laatjes (en hij doet ze natuurlijk weer netjes dicht zodat de volgende niks kan zien). De volgende in de rij heeft ook weer 0.5 kans etc etc. Nu leert de kansrekenwet dat we de kansen kunnen vermenigvuldigen. Dus te kans dat alle software heinies allemaal hun eigen BSN hebben gezien is inderdaad 0.5^100. Das een hele kleine kans. Eigenlijk is Hugo de J. ze met aan zekerheid grenzende waarschijnlijkheid kwijt. Hij wrijft zich al in zijn handen.

MAAR, één van de heinies heeft tijdens het overleg wat ze mogen hebben een goed idee. Hij denkt een manier gevonden te hebben om hun kansen te vergroten. Niet dat ze met zekerheid bij de GGD mogen blijven werken, maar ze kunnen de kans met een aardige factor vergroten.

Dus aan jullie de vraag wat de slimme software heini in het overleg met alle andere software heinies te melden heeft hoe ze hun zoektocht gaan aanpakken. Het zou mooi zijn als je ook nog weet wat ongeveer de kans wordt dat ze wel mogen blijven en waarom de manier die de slimme software heini voorstelt blijkt te werken.

(eigenlijk klopt het verhaal voor geen meter, anders had de slimmerik nooit bij de GGD gewerkt aan een exportfunctie, maar goed)

Een tip. Je kunt natuurlijk ook even kijken wat als er 6 heinies zijn die een kast met 6 laatjes mogen bezoeken en 3 laatjes open trekken.

## Nog een extraatje uit de conversatie 

Ha, een der leden van de crew is weer slimmer dan de schrijver van het verhaaltje. Laten we zeggen dat de heinies elkaar niet meer zien tussendoor.

## De toepassing

Als de make zijn werk heeft gedaan kun je de app zo starten:

De applicatie kan als volgt worden gebruikt:
./bin/evil_hugo \<aantal heinies\> \<aantal pogingen\> \<'WILLEKEUR'|'EERSTE'\>

./bin/evil_hugo 10 1000 WILLEKEUR of ./bin/evil_hugo 10 1000 EERSTE

Wil je zelf een strategie testen:

1) maak een nieuwe enum ```ideetje``` in [Ideetje.hpp](include/Ideetje.hpp)
2) complementeer ```ideetje maak_es_een_ideetje(const std::string &ideetje_als_een_woordje)``` in [Ideetje.cpp](src/Ideetje.cpp)
3) complementeer ```std::string maak_es_een_woordje(const ideetje idee)``` in [Ideetje.cpp](src/Ideetje.cpp)
4) maak je eigen class gebasees op ```class EenIdee``` in [EenIdee.hpp](include/EenIdee.hpp)
5) breid de factory method ```static std::unique_ptr<EenIdee> DeGroteOverlegRonde::kom_met_een_idee(ideetje welk, int aantal_keer_open_en_dicht)``` in [DeGroteOverlegRonde.cpp](src/DeGroteOverlegRonde.cpp) uit met de net gemaakt ingredienten
6) vergeet de header file van het nieuwe idee niet toe te voegen aan [DeGroteOverlegRonde.cpp](src/DeGroteOverlegRonde.cpp)

Nu even een make in de root en voila. Er kan een onderzoekje worden gestart.
