#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "stdint.h"
#include <stack>
#include <stdio.h>

const uint8_t MainWindow::patternArray[] = {3,3,1,2,2,3,2,1,2,3,3,1,3,3,3,2,
                                            2,2,3,3,2,1,1,3,2,1,3,2,2,3,1,3,
                                            1,3,2,3,3,2,1,3,1,3,3,3,2,3,2,1,
                                            3,2,3,1,1,3,1,2,3,3,3,1,2,2,2,1,
                                            2,3,3,2,3,1,2,1,1,3,1,3,1,1,2,2,
                                            1,1,2,2,1,1,1,3,3,2,3,2,3,2,3,1,
                                            1,1,2,2,3,1,3,2,1,1,1,2,3,1,2,3,
                                            3,1,2,2,2,2,2,3,3,3,3,1,2,1,1,3,
                                            3,3,3,3,3,2,2,2,2,3,1,1,3,2,1,3,
                                            3,3,3,3,3,2,1,3,3,1,3,3,1,2,2,2,
                                            2,2,2,2,2,1,2,2,3,1,1,2,3,1,2,2,
                                            2,2,2,2,3,2,2,2,2,2,2,3,1,2,3,1,
                                            2,2,2,2,3,2,1,1,2,2,2,2,2,1,3,2,
                                            1,2,2,1,2,1,1,3,2,3,1,1,2,3,2,2,
                                            2,2,3,3,1,3,3,1,3,2,2,1,3,3,1,3,
                                            2,1,2,2,1,2,1,2,3,1,1,3,1,2,1,1,
                                            2,3,2,3,2,2,3,2,2,2,1,3,3,3,2,3,
                                            3,2,3,3,2,3,3,2,1,3,2,1,3};
const std::vector<QString> MainWindow::EnQuestionText = {"REMEMBER NOW BEFORE YOU LOSE, WHAT TYPE OF TOOTHPASTE DO I USE?",
                                                         "LOOK AT MY HAIR, SEE IT FLOW, WHAT'S IT WASHED WITH, DO YOU KNOW?",
                                                         "GRUNTY'S GOT A BEAUTIFUL POSE, WHERE DO I GET MY DELIGHTFUL CLOTHES?",
                                                         "BANJO'S STUPID, GRUNTY'S COOL, WHAT WAS MY NAME AT WITCHES SCHOOL?",
                                                         "DO YOU KNOW AND CAN YOU TELL, WHAT ON EARTH IS MY FAVORITE SMELL?",
                                                         "GUESS THIS RIGHT OR YOU MAY LOSE, WHAT'S THE ONLY COLOR I'D CHOOSE?",
                                                         "LOOK AT MY BUILD, MUSCLES TAUT, WHAT'S MY MOST ENJOYABLE SPORT?",
                                                         "WE DIDN'T WASH, THERE WAS NO POOL, WHERE DID I GO TO WITCH SCHOOL?",
                                                         "HERE'S THREE ANSWERS, ONE YOU'LL PICK, WHAT'S MY AMAZING PARTY TRICK?",
                                                         "I LIKE 'EM FRIED, THEY'RE QUITE A TREAT, WHAT FOR BREAKFAST DO I EAT?",
                                                         "I REALLY WISH I WAS THINNER, WHAT DOES GRUNTY LIKE FOR DINNER?",
                                                         "A LITTLE MORE, IT WON'T HURT, WHAT WOULD I HAVE FOR DESSERT?",
                                                         "I CANNOT LIE, I TELL THE TRUTH, WHAT'S HANGING FROM MY BEDROOM ROOF?",
                                                         "A LOVELY SPECIMAN IN ITS POT, IT'S BY MY BED, WHAT HAVE I GOT?",
                                                         "HOW DARE YOU LOOK, STOPTHAT STARE, WHAT COLOR UNDIES DO I WEAR?",
                                                         "'CUZ OF ALL THOSE SPELLS I LEND, WHOM AT SCHOOL WAS MY BEST FRIEND?",
                                                         "THE NEWS STAND IS WHERE I'VE BEEN, WHAT'S MY FAVORITE MAGAZINE?",
                                                         "IS IT THIS, NOW LET ME THINK, WHAT IS GRUNTY'S FAVORITE DRINK?",
                                                         "I USUALLY CURL UP IN A HEAP, WHERE DOES GRUNTY LIKE TO SLEEP?",
                                                         "MY LOOKS AT SCHOOL WERE NEVER THIN, WHAT AWARD DID I WIN?",
                                                         "FAT HAG MONTHLY THINKS I'M HOT, WHAT DID I DO ON THE COVER SHOT?",
                                                         "APART FROM DOING STUPID RHYMES, WHAT'S ANOTHER OF MY PASTIMES?",
                                                         "GRUNTY'S CUTE, SHE'S QUITE A DAME, WHAT WAS MY FIRST BOYFRIEND'S NAME?",
                                                         "DON'T BE SMART YOU'VE NOT WON YET, WHEN I WAS SMALL WHAT WAS MY PET?",
                                                         "IT KEEPS ME SAFE AND FREE FROM HARM, WHAT HAVE I AS A LUCKY CHARM?",
                                                         "I LIKE A CUDDLE AND A FIGHT, WHAT DO I TAKE TO BED AT NIGHT?",
                                                         "ACROSS THE SKY I LOVE TO GLIDE, WHAT TYPE OF BROOM STICK DO I RIDE?",
                                                         "I'M NOT PRETTY, I'M QUITE A MESS, WHAT DO I HIDE UNDER MY DRESS?",
                                                         "LET'S SEE IF YOUR MEMORY'S FOGGY, WHAT'S THE NAME OF MY PET DOGGY?",
                                                         "YOU WANT TO HEAR UP, I CAN TELL, IN WHICH BAND DO I SING SO WELL?"
                                                        };

const std::vector<QString> MainWindow::EnAnswerText = {"Tuna Ice Cream", "Salted Slug","Mouldy Cheese",
                                                       "Baked Beans", "Engine Oil", "Rancid Milk",
                                                       "The Trashcan", "Saggy Maggy's Boutique", "The Witches Warehouse",
                                                       "Hog Breath", "Cauldron Butt", "Jelly Belly",
                                                       "Putrid Parrot Puke", "Sweaty Gorilla Feet", "Freshly Burst Boils",
                                                       "Ghastly Grey", "Dung Brown", "Gruesome Green",
                                                       "Loogie Flicking", "Belly Barging", "Broomstick Racing",
                                                       "Cauldron College", "Fat Hag High", "St. Dungball's",
                                                       "To Blow Ballons Up With My Butt", "To Perform A Striptease", "To Eat A Bucket Of Beans",
                                                       "Rat Bagels", "Spider Pancakes", "Tadpoles On Toast",
                                                       "Dog Dung Burgers", "Slug Stew", "Maggot Pie",
                                                       "Eyeball Ice-Cream", "Cockroaches And Cream", "Rat Sorbet",
                                                       "Rotting Fish", "Smelly Socks", "Dirty Undies",
                                                       "An Eyeball Flower", "A Verruca Plant", "A Loogie Bush",
                                                       "Streaky Brown", "Spotty Purple", "Sweaty Yellow",
                                                       "Saggy Maggy", "Sweaty Betty", "Fatty Hatty",
                                                       "Fat Hag Monthly", "Warty Girls Weekly", "Big Butts And Guts",
                                                       "Camel Spit Milkshake", "Smoothie Elephant Sweat", "Cold Worm Juice",
                                                       "A Comfy Dumpster", "On A Pile Of Treasure", "In A Pid Sty",
                                                       "Biggest Butt", "Dirtiest Undies", "Sweatiest Socks",
                                                       "Sat On My Broomstick", "Posed In My Longjohns", "Polished My Crystal Ball",
                                                       "Collecting Dragon Teeth", "Bursting Boils", "Flying Radio Controlled Bats",
                                                       "Greasy Grant", "Dirty Berty", "Undead Ed",
                                                       "A Baby Dragon", "A Greasy Warthog", "A mad Vulture",
                                                       "A Shrunken Head", "A Loogie Filled Hanky", "A Dragon's Foot",
                                                       "A Scary Teddy Bear", "A Huge Sweaty Baboon", "My Dirty Undies",
                                                       "Lardmaster 2000", "Rough Rider Deluxe","Super Gutlifter Pro",
                                                       "Massive Bloomers", "A Flea Circus", "A Reinforced Girdle",
                                                       "Legchomper", "Ripper", "Bignacka",
                                                       "Grunty And The Monster Mob", "Grunty And The Broomstick Boys", "Grunty And The Cauldron Crew"
                                                      };

const std::vector<QString> MainWindow::FrQuestionText = {QString::fromUtf8("DIS-MOI DE QUEL PARFUM, EST MON DENTIFRICE, GROS CRÉTIN"),
                                                         QString::fromUtf8("REGARDE-MOI BIEN ET DEVINE UN PEU, AVEC QUOI JE ME LAVE LES CHEVEUX!"),
                                                         QString::fromUtf8("JE SUIS CLASSE ET SUPER POLIE, D'OÙ VIENNENT DONC MES HABITS?"),
                                                         QString::fromUtf8("BANJO, TU PUES LE SAUCISSON, AL'ÉCOLE QUEL ÉTA IT MON SURNOM?"),
                                                         QString::fromUtf8("JE N'AI PLUS BEAUCOUP D'AMIS, QUEL EST DONC MON PARFUM FAVORI?"),
                                                         QString::fromUtf8("RESPONDS OU JETE CASSE LE NEZ, QUELLE EST MA COULEUR PRÉFÉRÉ?"),
                                                         QString::fromUtf8("MON CORPS EST BEAU ET PLEIN DE VIE, QUEL EST MON SPORT FAVORI?"),
                                                         QString::fromUtf8("JE NE SUPPORTE PAS LES MÔMES, OÙ AI-JE OBTENU MON DIPLÔME?"),
                                                         QString::fromUtf8("DEVINE COMMENT, MON P'TIT BIQUET, JE METS DE L'AMBIANCE DANS LES SOIRÉES?"),
                                                         QString::fromUtf8("DEVINE POUR VOIR SI TU ES MALIN, QUEL EST DONC MON PLAT DU MATIN?"),
                                                         QString::fromUtf8("J'AI UN LÉGER PROBLÈME DE POIDES, POUR LE DÎNER, QUEL EST MON PLAT?"),
                                                         QString::fromUtf8("J'AI DU GRAS AUTOUR DES PIEDS, QUESL EST MON DESSERT PRÉFÉRÉ?"),
                                                         QString::fromUtf8("MA PETITE CHAMBRE J'AI DÉCORÉ, QU'AI-JE BIEN PU UTILISER?"),
                                                         QString::fromUtf8("DANS UN POT PRÈ DE MON LIT, QUE FAIS-JE POUSSER, GROS ABRUTI?"),
                                                         QString::fromUtf8("RESPONDS-MOI VITE, MON P'TIT POTE, QUELLE COULEUR SONT MES CULOTTES?"),
                                                         QString::fromUtf8("A L'ÉCOLE J'AI SOUVENT VOMI QUI ÉTAIT ME MEILLEURE AMIE?"),
                                                         QString::fromUtf8("J'AIME BEAUCOUP LIRE ET MANGER, QUEL EST MON ROMAN PRÉFÉRÉ?"),
                                                         QString::fromUtf8("IL M'ARRIVE PARFOIS DE ME SOiLER, QUELLE EST MA BOISSON PRÉFÉRÉ?"),
                                                         QString::fromUtf8("LA NUIT MES DENTS UNT TENDANCE À POURRIR, OÙ AI-JE DONC L'HABITUDE DE DORMIR?"),
                                                         QString::fromUtf8("IL EST VRAI QUE JE PUE DES PIEDS MAIS... QUEL CONCUOURS AI-JE UN JOUR REMPORTÉ?"),
                                                         QString::fromUtf8("LE JOURNAL DES LAIDEURS ME TROUVE À CROQUER, COMMENT M'A-T-ON PHOTOGRAPHIÉE"),
                                                         QString::fromUtf8("J'AIME LES RIMES ET LE VOMI, MAIS QUEL EST MON HOBI FAVORI?"),
                                                         QString::fromUtf8("J'AI DU CHARME, ÇA NE FAIT PAS UN PLI, COMMENT S'APPELAIT MON PETIT AMI?"),
                                                         QString::fromUtf8("J'AI PLEIN DE TRUCS DANS MON NEZ, QUEL ÉTAIT MON ANIMAL FAMILIER?"),
                                                         QString::fromUtf8("TOUTE NUE JE FAIS SOUVENT PEUR, QUEL EST DONC MON PORTE-BONHEUR?"),
                                                         QString::fromUtf8("ETRE GENTILLE? PLUTÔT MOURIR! AVEC QUOI AI-JE L'HABITUDE DE DORMIR?"),
                                                         QString::fromUtf8("COMME LES VAUTOURS J'ADORE VOLER, QUEL EST LA MARQUE DE MON BALAIS?"),
                                                         QString::fromUtf8("MIS À PART LES MICROBES, QU'Y A-T-IL SOUS MA ROBE?"),
                                                         QString::fromUtf8("IL ME LAISSE SOUVENT PEINARDE, COMMENT S'APPELLE MON CHIEN DE GARDE?"),
                                                         QString::fromUtf8("LORSQUE JE CHANTE, PERSONNE NE SE MOQUE, COMMENT S'APPELLE MON GROUPE DE ROCK?")
                                                        };


const std::vector<QString> MainWindow::FrAnswerText = {QString::fromUtf8("Au Thon Pourri"), QString::fromUtf8("A La Limace Salée"), QString::fromUtf8("Au Fromage Qui Pue"),
                                                       QString::fromUtf8("Des Fayots"), QString::fromUtf8("De L'huille De Vindange"), QString::fromUtf8("Du Lait De Porc"),
                                                       QString::fromUtf8("De La Décharge Municipal"), QString::fromUtf8("De La Boutique Des Horreurs"), QString::fromUtf8("Du SuperMarchédégueu"),
                                                       QString::fromUtf8("Haleine De Jambon"), QString::fromUtf8("Grosses Fesses"), QString::fromUtf8("Ventre Mou"),
                                                       QString::fromUtf8("Le Vomi De Hamster Séché"), QString::fromUtf8("La Sueur De Gorille"), QString::fromUtf8("Le Crachat De Chameau"),
                                                       QString::fromUtf8("Gris Pourri"), QString::fromUtf8("Marron Bouse"), QString::fromUtf8("Vert Crade"),
                                                       QString::fromUtf8("Le Concours De Grimace"), QString::fromUtf8("Le Lancer De Gras De Jambon"), QString::fromUtf8("Le Course De Ba Lais"),
                                                       QString::fromUtf8("A L'école Supérieure Des Grosses"), QString::fromUtf8("A L'école Des Boudins"), QString::fromUtf8("A L'école Des Fesses Molles"),
                                                       QString::fromUtf8("Je Gonfle Des Ballons Avec Mes Fesses"), QString::fromUtf8("Je Me Déshabille Et Danse La Salsa"), QString::fromUtf8("J'avale Un Seau Entier De Fayots"),
                                                       QString::fromUtf8("Des Tartine De Rats"), QString::fromUtf8("Des Beignets D'Aragnées"), QString::fromUtf8("Des TéTards à La Crème"),
                                                       QString::fromUtf8("Des Steaks Au Poil De Porc"), QString::fromUtf8("Des Limaces Au Crottin"), QString::fromUtf8("Des Tartes à La Bouse"),
                                                       QString::fromUtf8("La Glace À L'oeil De Goret"), QString::fromUtf8("Le G'tea U Aux Cafards"), QString::fromUtf8("Le Rat En Sorbet"),
                                                       QString::fromUtf8("Du Poisson Pourri"),QString::fromUtf8("Des Chaussettes Sales"), QString::fromUtf8("Des Vielles Culottes"),
                                                       QString::fromUtf8("Une Plante Cranivore"), QString::fromUtf8("Une Verrue Plantaire"), QString::fromUtf8("Un ongle De Pied"),
                                                       QString::fromUtf8("Maron Et Moites"),QString::fromUtf8("Grises Et Vieilles"), QString::fromUtf8("Jaunes Et Puantes"),
                                                       QString::fromUtf8("Maggy-La-Grosse"), QString::fromUtf8("Betty-Qui-Pue"), QString::fromUtf8("Hatty-Qui-Rotte"),
                                                       QString::fromUtf8("L'histoire D'une Vache"), QString::fromUtf8("Lv Vie De Bigru Le Porc"), QString::fromUtf8("Le Jambon Magique"),
                                                       QString::fromUtf8("La Bave D'Huitre"), QString::fromUtf8("La Sueur De Chameau"), QString::fromUtf8("La Jus De Limace"),
                                                       QString::fromUtf8("Dans Une Poubelle"), QString::fromUtf8("Sur Mon Trésor"), QString::fromUtf8("Dans Une Fosse Septique"),
                                                       QString::fromUtf8("Des Plus Grosses Fesses"), QString::fromUtf8("De La Culotte La Plus Sale"), QString::fromUtf8("Des Chaussettes Les Plus Collantes"),
                                                       QString::fromUtf8("Debout Sur Un Tas De Fumier"), QString::fromUtf8("Assise Sure Les Toilettes"), QString::fromUtf8("Allongée Sur Du Crottin"),
                                                       QString::fromUtf8("Collectionner Les Dents De Dragon"), QString::fromUtf8("Eclater Mes Boutons Avec Une Perceuse"), QString::fromUtf8("Manger Sans Les Mains"),
                                                       QString::fromUtf8("Gary Le Graisseux"), QString::fromUtf8("Gérard Le Gerbeux"), QString::fromUtf8("Bobby Le Zombie"),
                                                       QString::fromUtf8("Un Bébé Dragon"), QString::fromUtf8("Un Sanglier Siffleur"), QString::fromUtf8("Un Vautour Dingue"),
                                                       QString::fromUtf8("Une Téte De Lapin"), QString::fromUtf8("Un Mouchoir Sale"), QString::fromUtf8("Une Patte De Dragon"),
                                                       QString::fromUtf8("Un Ours En Peluche Décapité"), QString::fromUtf8("Un Vieux Babouin"), QString::fromUtf8("Un Crocodile Empaillé"),
                                                       QString::fromUtf8("Gras-Master 2000"), QString::fromUtf8("Boudin Deluxe"), QString::fromUtf8("Super Tas Pro"),
                                                       QString::fromUtf8("Une Culoote Pour Vaches"), QString::fromUtf8("Des Puces Savantes"), QString::fromUtf8("Une Gaine Renforcée"),
                                                       QString::fromUtf8("Hache-Viande"), QString::fromUtf8("Mange-Tout"), QString::fromUtf8("Teigneux"),
                                                       QString::fromUtf8("Grunty Et Les Grosses"), QString::fromUtf8("Grunty Et Les Balais"), QString::fromUtf8("Grunty Et Les Chaudrons")
                                                       };

const std::vector<QString> MainWindow::DeQuestionText = {QString::fromUtf8("MACHE MIR JETZT KEINE SZENE, WOMIT PUTZE ICH MEINE ZÄHNE?!"),
                                                         QString::fromUtf8("WOMIT WASCHE ICH MEIN HAAR, DASS ES WIRD SO WUNDERBAR?"),
                                                         QString::fromUtf8("MEINE KLAMOTTEN, ES IST NICHT SCHWER, WO HABE ICH SIE WOHL HER?"),
                                                         QString::fromUtf8("DU BIST ZWAR NICHT SEHR HELLE, DOCH WIE WAR IN DER SCHULE MEIN NAME, AUF DIE SCHNELE?"),
                                                         QString::fromUtf8("WELCHER IST MEIN LIEBLINGSDUFT, DU KLEINER SCHUFT?"),
                                                         QString::fromUtf8("SAGE MIR GESHWIND, WLECHE MEINE LIEBSTEN FARBEN SIND!"),
                                                         QString::fromUtf8("WAS TREIBE ICH FÜR EINEN SPORT? SAGE ES MIR SCHNELL SONST GESHIEHT EIN MORD!"),
                                                         QString::fromUtf8("AUF WELCHER SCHULE BIN ICH GEWESEN? SAGE ES MIR, SONST SPRICHT MEIN BESEN!"),
                                                         QString::fromUtf8("SAGE ES MIR HEUT', WIE GRUNTILDA PARTYGÄSTE ERFREUT!"),
                                                         QString::fromUtf8("ZUM FRÜHSTÜCK ICH DAS HIER GERNE ESSE, SONST IST GELESEN DIE MESSE!"),
                                                         QString::fromUtf8("WAS ESSE ICH AM ABEND, ERQUICKEND UND LABEND?"),
                                                         QString::fromUtf8("SEI NICHT ÄNGSTLICH UND KOMME HER, VERRATE MIR MEIN LIEB LINGSDESSERT!"),
                                                         QString::fromUtf8("ICH MACHE DICH ZUR SCHNECKE, WAS HÄNGT IM SCHLAFZIMMER AN DER DECKKE?"),
                                                         QString::fromUtf8("ES IST WIE VERHEXT, WAS IN MEINEM BLUMENTOPF SO WÄCHST!"),
                                                         QString::fromUtf8("MEIN UNTERWÄSCHE IST NICHT NEU, IST MICH AN WELCH EM DESIGN ERFREU'?"),
                                                         QString::fromUtf8("BALD WIRD ESDONNERN MIT GERUMPEL, WER WAR IN DER SCHULE MEIN BESTER KUMPEL?"),
                                                         QString::fromUtf8("WENN DU MICH STEHST, AM ZEITUNGSSTAND, WELCHES BLATT HABE ICH IN DER HAND?"),
                                                         QString::fromUtf8("WER MEINEN LIEBSTEN TRUNK NICHT KENNT, DER HAT DAS HALBE SPIEL VERPENNT!"),
                                                         QString::fromUtf8("ANDERE SCHLAFEN IM BETT, WO FINDE ICH ES NACHTS DENN NETT?"),
                                                         QString::fromUtf8("ES WAR EINE ECHTE HATZ, BEI WELCHEM WETTBEWERB GEWANN ICH DEN 1. PLATZ?"),
                                                         QString::fromUtf8("HEXEN SPEZIAL IST NACH MIR GANZ WILD, WAS MACHE ICH AUF DEM TITELBILD?"),
                                                         QString::fromUtf8("EIN HOBBY HABE ICH DOCH, VIELL EICHT WEISST DU ES NOCH!"),
                                                         QString::fromUtf8("EIN JÜNGLING MIR GUT GEFIEL, ER HATTE CHARME UND STIL!"),
                                                         QString::fromUtf8("MEIN LIEBSTES HAUSTIER WAR SEHR NETT, ES SCHLIEF SOGAR IN MEINEM BETT!"),
                                                         QString::fromUtf8("EINEN GLÜCKSBRINGER ICH TRAGE. WAS IST ES DENN, DAS IST DIE FRAGE!"),
                                                         QString::fromUtf8("KNUDDELN TUE ICH FAST NIE, DOCH WENN, DANN WOHL MIT WELCHEM VIEH?"),
                                                         QString::fromUtf8("ICH HABE DEN BESTEN HEXENBESEN, WIE SCHNELL BIN ICH DAMIT GEWESEN?"),
                                                         QString::fromUtf8("WAS TRAGE ICH WOHL UNTER MEINER KLUFT, DU FRECHER KLEINER SCHUFT?"),
                                                         QString::fromUtf8("NUN LASSE ERKLINGEN AUS DEINEM MUND, AUF WELCHEN NAMEN HÖRTE MEIN HUND?"),
                                                         QString::fromUtf8("MEINE TOLLE BAND IST WELTBEKANNT, WIE HABE ICH SIE BLOSS GENANNT?")
                                                        };


const std::vector<QString> MainWindow::DeAnswerText = {QString::fromUtf8("Matsch"), QString::fromUtf8("Fledermaushaut"), QString::fromUtf8("Stinkender Käse"),
                                                       QString::fromUtf8("Fledermausköttel"), QString::fromUtf8("Motoröl"), QString::fromUtf8("Ranzige Milch"),
                                                       QString::fromUtf8("Aus Der Mülltonne"), QString::fromUtf8("Saggy Maggys Boutique"), QString::fromUtf8("Vom Hexendiscounter"),
                                                       QString::fromUtf8("Bussardfratze"), QString::fromUtf8("Adlernase"), QString::fromUtf8("Warzenkopf"),
                                                       QString::fromUtf8("Stinkender Schwefel"), QString::fromUtf8("Schwitzender Affenfüss"), QString::fromUtf8("Ranziges Schlangenfett"),
                                                       QString::fromUtf8("Grabstein-Grau"), QString::fromUtf8("Bluetorangen-Rot"), QString::fromUtf8("Spei-Grün"),
                                                       QString::fromUtf8("Kesselheben"), QString::fromUtf8("Zauberbuch-Werfen"), QString::fromUtf8("Besenstiel-Rennen"),
                                                       QString::fromUtf8("Hexen-Uni"), QString::fromUtf8("Pommesbude"), QString::fromUtf8("Bushaltestelle"),
                                                       QString::fromUtf8("Alle Güste Fressen"), QString::fromUtf8("Geiseln Nehmen"), QString::fromUtf8("Aus Der Toilet Te Trinken"),
                                                       QString::fromUtf8("Gegrillte Grillen"), QString::fromUtf8("Zerquetschte Froschaugen"), QString::fromUtf8("Raupen Auf Toast"),
                                                       QString::fromUtf8("Schneckenschleim"), QString::fromUtf8("Fledermausburger"), QString::fromUtf8("Katzensteaks"),
                                                       QString::fromUtf8("Augapfel-Eiscreme"), QString::fromUtf8("Hackepeter Mit Marmelade"), QString::fromUtf8("Regenwurmsalat"),
                                                       QString::fromUtf8("Verfaulte Fische"), QString::fromUtf8("Stinkende Socken"), QString::fromUtf8("Schimmelnde Würmer"),
                                                       QString::fromUtf8("Glubschaugen-Baum"), QString::fromUtf8("Venusfleigenfalle"), QString::fromUtf8("Giftdornen-Rose"),
                                                       QString::fromUtf8("Schwarzblau Gestreift"), QString::fromUtf8("Rosagrün Gepunktet"), QString::fromUtf8("Giftgelb Gesprenkelt"),
                                                       QString::fromUtf8("Eine Klapperschlange"), QString::fromUtf8("Die Tafel"), QString::fromUtf8("Der Hausmeister"),
                                                       QString::fromUtf8("Die Bunte Hexenwelt"), QString::fromUtf8("Die Hexenrundschau"), QString::fromUtf8("Den Kesselkurier"),
                                                       QString::fromUtf8("Ratten-Milchshake"), QString::fromUtf8("Spinnenbein-Cocktail"), QString::fromUtf8("Tenschleim-Drink"),
                                                       QString::fromUtf8("In Einem Nagelbett"), QString::fromUtf8("In Einer Mülltonne"), QString::fromUtf8("In Einem Schwienestall"),
                                                       QString::fromUtf8("Warzenfratzen-Wettbewerb"), QString::fromUtf8("Miesmacher-Wettbewerb"), QString::fromUtf8("Stinkesocken-Wettbewerb"),
                                                       QString::fromUtf8("Kleine Kinder Zerprügeln"), QString::fromUtf8("In Unterhosen Posieren"), QString::fromUtf8("In Der Nase Bohren"),
                                                       QString::fromUtf8("Ameisenschokolade Essen"), QString::fromUtf8("Pickel Ausdrücken"), QString::fromUtf8("Fussnägel Abkauen"),
                                                       QString::fromUtf8("Joe Klo"), QString::fromUtf8("Kain Spass"), QString::fromUtf8("Will Hirn"),
                                                       QString::fromUtf8("Ein Toter Frosch"), QString::fromUtf8("Eine Dreiköpfige Fledermaus"), QString::fromUtf8("Ein Kopfloses Huhn"),
                                                       QString::fromUtf8("Ein Schrumpfkopf"), QString::fromUtf8("Ein Stinktierschanz"), QString::fromUtf8("Ein Schweinefuss"),
                                                       QString::fromUtf8("Mit Einem Totenschädel"), QString::fromUtf8("Mit Einer Lebenden Kobra"), QString::fromUtf8("Mit Einer Voodoo-Puppe"),
                                                       QString::fromUtf8("Schnell Wie Der Schall"), QString::fromUtf8("Schnell Wie Das Licht"), QString::fromUtf8("Stubenfliege"),
                                                       QString::fromUtf8("Eine Tote Ratte"), QString::fromUtf8("Ein Sabberlätzchen"), QString::fromUtf8("Einen Flohzirkus"),
                                                       QString::fromUtf8("Waldi"), QString::fromUtf8("Ripper"), QString::fromUtf8("Lassie"),
                                                       QString::fromUtf8("Gruntys Monstermob"), QString::fromUtf8("Gruntys Schürzenjäger"), QString::fromUtf8("Gruntys Kesselreiher")
                                                      };

const std::vector<QString> MainWindow::styleSheetText = {"QPushButton {color: black; background-color: rgb(200,200,200); text-align: right; font: bold 11px; padding: 0px; border: none}"
                                                            "\n QPushButton[flat=\"true\"] {color: black; background-color: none; text-align: right; font: bold 11px; padding: 0px; border: none}"
                                                         ,"QPushButton {color: blue; background-color: rgb(200,200,200); text-align: right; font: bold 11px; padding: 0px; border: none}"
                                                            "\n QPushButton[flat=\"true\"] {color: blue; background-color: none; text-align: right; font: bold 11px; padding: 0px; border: none}"
                                                            "\n QPushButton[default=\"true\"] {color: blue; background-color: none; text-align: center; font: bold 11px; padding: 0px; border: none}"
                                                         ,"QPushButton {color: green; background-color: rgb(200,200,200); text-align: right; font: bold 11px; padding: 0px; border: none}"
                                                            "\n QPushButton[flat=\"true\"] {color: green; background-color: none; text-align: right; font: bold 11px; padding: 0px; border: none}"
                                                            "\n QPushButton[default=\"true\"] {color: green; background-color: none; text-align: center; font: bold 11px; padding: 0px; border: none}"
                                                         ,"QPushButton {color: rgb(255,175,175); background-color: rgb(200,200,200); text-align: right; font: bold 11px; padding: 0px; border: none}"
                                                            "\n QPushButton[flat=\"true\"] {color:rgb(255,175,175); background-color: none; text-align: right; font: bold 11px; padding: 0px; border: none}"
                                                        };

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->questions->hide();
    currLang=ENGLISH;
    setWindowIcon(QIcon(":/FFImage/Images/Brentilda_icon.ico"));
    ui->patternNumInput->setMaxLength(3);
    linkButtons();
    on_EnRadioButton_clicked();
    on_resetButton_clicked();
    connect(ui->actionDouble, SIGNAL(toggled(bool)), this, SLOT(on_doubleClick_checked(bool)));
    connect(ui->actionSingle, SIGNAL(toggled(bool)), this, SLOT(on_singleClick_checked(bool)));
    connect(ui->actionFull_Calculator, SIGNAL(toggled(bool)), this, SLOT(on_fullCalc_checked(bool)));
    connect(ui->minipatternNumInput,SIGNAL(textEdited(QString)),this, SLOT(on_patternNumInput_textEdited(QString)));
    connect(ui->miniEnRadioButton,SIGNAL(clicked(bool)),this,SLOT(on_EnRadioButton_clicked()));
    connect(ui->miniFrRadioButton,SIGNAL(clicked(bool)),this,SLOT(on_FrRadioButton_clicked()));
    connect(ui->miniDeRadioButton,SIGNAL(clicked(bool)),this,SLOT(on_DeRadioButton_clicked()));
    on_actionFull_Calculator_triggered();
    //link buttons to answers
}

MainWindow::~MainWindow()
{
    delete ui;
}

float MainWindow::answerProbability(uint8_t answerLoc)
{
    return probabilityMatrix[answerLoc];
}

void MainWindow::on_EnRadioButton_clicked()
{
    ui->EnRadioButton->setChecked(true);
    ui->miniEnRadioButton->setChecked(true);
    currLang=ENGLISH;
    for(int i=0; i<90;i++){
        buttonArray[i]->setText(EnAnswerText[i] + " : " + QString::number(probabilityMatrix[buttonArray[i]->getAnsNumber()],'f',1));
    }
    for(int i=0; i<30;i++){
        questionArray[i]->setText(EnQuestionText[i]);
    }
    for(int i=0; i<5; i++){
        if(!miniButtonArray[i]->isHidden()){
            miniButtonArray[i]->setText(buttonArray[miniButtonArray[i]->getAnsNumber()]->text());
            miniButtonArray[i]->setStyleSheet(buttonArray[miniButtonArray[i]->getAnsNumber()]->styleSheet());
        }
    }

}

void MainWindow::on_FrRadioButton_clicked()
{
    currLang=FRENCH;
    ui->FrRadioButton->setChecked(true);
    ui->miniFrRadioButton->setChecked(true);
    for(int i=0; i<90;i++){
        buttonArray[i]->setText(FrAnswerText[i] + " : " + QString::number(probabilityMatrix[buttonArray[i]->getAnsNumber()],'f',1));
    }
    for(int i=0; i<30;i++){
        questionArray[i]->setText(FrQuestionText[i]);
    }
    for(int i=0; i<5; i++){
        if(!miniButtonArray[i]->isHidden()){
            miniButtonArray[i]->setText(buttonArray[miniButtonArray[i]->getAnsNumber()]->text());
            miniButtonArray[i]->setStyleSheet(buttonArray[miniButtonArray[i]->getAnsNumber()]->styleSheet());
        }
    }

}

void MainWindow::on_DeRadioButton_clicked()
{
    currLang=GERMAN;
    ui->DeRadioButton->setChecked(true);
    ui->miniDeRadioButton->setChecked(true);
    for(int i=0; i<90;i++){
        buttonArray[i]->setText(DeAnswerText[i] + " : " + QString::number(probabilityMatrix[buttonArray[i]->getAnsNumber()],'f',1));
    }
    for(int i=0; i<30;i++){
        questionArray[i]->setText(DeQuestionText[i]);
    }
    for(int i=0; i<5; i++){
        if(!miniButtonArray[i]->isHidden()){
            miniButtonArray[i]->setText(buttonArray[miniButtonArray[i]->getAnsNumber()]->text());
            miniButtonArray[i]->setStyleSheet(buttonArray[miniButtonArray[i]->getAnsNumber()]->styleSheet());
        }
    }

}

void MainWindow::on_radioButton_clicked()
{
    ui->answers->show();
    ui->questions->hide();

}

void MainWindow::on_questionToggle_clicked()
{
    ui->answers->hide();
    ui->questions->show();

}

void MainWindow::updateVariables(void){
    std::stack<int16_t> tempStack1;
    std::stack<int16_t> tempStack2;

    while(!possibleAnswers.empty()){
        possibleAnswers.pop();
    }
    for(int16_t i=0;i<256;i++){
        possibleAnswers.push(i);
    }
    //update possible patterns
    while(!userInputs.empty()){//eliminate possible parters using user input
        if(userInputs.top()>0){//answer found
            while(!possibleAnswers.empty()){
               if(patternArray[possibleAnswers.top()+((userInputs.top()-1)/3)] == (uint8_t) ((userInputs.top())-1)%3+1){
                    tempStack2.push(possibleAnswers.top());
                }
                possibleAnswers.pop();
            }
        }
        else if(userInputs.top()<0){//wrong answer found
            while(!possibleAnswers.empty()){
               if(patternArray[possibleAnswers.top()+((0-(userInputs.top()+1))/3)] != (uint8_t) ((0-userInputs.top())-1)%3+1){
                    tempStack2.push(possibleAnswers.top());
                }
                possibleAnswers.pop();
            }
        }

        while(!tempStack2.empty()){//return possible answers to possible answer stack
            possibleAnswers.push(tempStack2.top());
            tempStack2.pop();
        }

        tempStack1.push(userInputs.top());
        userInputs.pop(); //perform on all inputs in stack
    }
    while(!tempStack1.empty()){//return user inputs to input stack
        userInputs.push(tempStack1.top());
        tempStack1.pop();
    }

    ui->remainingPatterns->setText(QString::number(possibleAnswers.size()));
    ui->miniremainingPatterns->setText(QString::number(possibleAnswers.size()));
    if (possibleAnswers.size()== 1){
        ui->patternNumInput->setText(QString::number(possibleAnswers.top()));
        ui->minipatternNumInput->setText(QString::number(possibleAnswers.top()));
    }
    else{
        ui->patternNumInput->setText("");
        ui->minipatternNumInput->setText("");
    }

    //update probabilities
    for(int i=0; i<90;i++){
        probabilityMatrix[i]=0;
    }
    while(!possibleAnswers.empty()){
        for(int i=0; i<30; i++){
            if(patternArray[possibleAnswers.top()+i]==1){
                probabilityMatrix[i*3]++;
            }
            else if(patternArray[possibleAnswers.top()+i]==2){
                probabilityMatrix[i*3+1]++;
            }
            else{
                probabilityMatrix[i*3+2]++;
            }
        }
        tempStack2.push(possibleAnswers.top()); //next pattern
        possibleAnswers.pop();
    }
    while(!tempStack2.empty()){//return possible answers to possible answer stack
        possibleAnswers.push(tempStack2.top());
        tempStack2.pop();
    }
    for(int i=0; i<90; i++){
        probabilityMatrix[i]*=100;
        probabilityMatrix[i]/=possibleAnswers.size();
    }

    //update fonts
    searchTextEdited(ui->lineEdit->text());
    //updateText();
}

void MainWindow::linkButtons(void){
    uint16_t i =0;

    buttonArray[i++]=ui->Q1A1; buttonArray[i++]=ui->Q1A2; buttonArray[i++]=ui->Q1A3;
    buttonArray[i++]=ui->Q2A1; buttonArray[i++]=ui->Q2A2; buttonArray[i++]=ui->Q2A3;
    buttonArray[i++]=ui->Q3A1; buttonArray[i++]=ui->Q3A2; buttonArray[i++]=ui->Q3A3;
    buttonArray[i++]=ui->Q4A1; buttonArray[i++]=ui->Q4A2; buttonArray[i++]=ui->Q4A3;
    buttonArray[i++]=ui->Q5A1; buttonArray[i++]=ui->Q5A2; buttonArray[i++]=ui->Q5A3;
    buttonArray[i++]=ui->Q6A1; buttonArray[i++]=ui->Q6A2; buttonArray[i++]=ui->Q6A3;
    buttonArray[i++]=ui->Q7A1; buttonArray[i++]=ui->Q7A2; buttonArray[i++]=ui->Q7A3;
    buttonArray[i++]=ui->Q8A1; buttonArray[i++]=ui->Q8A2; buttonArray[i++]=ui->Q8A3;
    buttonArray[i++]=ui->Q9A1; buttonArray[i++]=ui->Q9A2; buttonArray[i++]=ui->Q9A3;
    buttonArray[i++]=ui->Q10A_1; buttonArray[i++]=ui->Q10A_2; buttonArray[i++]=ui->Q10A_3;
    buttonArray[i++]=ui->Q11A_1; buttonArray[i++]=ui->Q11A_2; buttonArray[i++]=ui->Q11A_3;
    buttonArray[i++]=ui->Q12A_1; buttonArray[i++]=ui->Q12A_2; buttonArray[i++]=ui->Q12A_3;
    buttonArray[i++]=ui->Q13A_1; buttonArray[i++]=ui->Q13A_2; buttonArray[i++]=ui->Q13A_3;
    buttonArray[i++]=ui->Q14A_1; buttonArray[i++]=ui->Q14A_2; buttonArray[i++]=ui->Q14A_3;
    buttonArray[i++]=ui->Q15A_1; buttonArray[i++]=ui->Q15A_2; buttonArray[i++]=ui->Q15A_3;
    buttonArray[i++]=ui->Q16A_1; buttonArray[i++]=ui->Q16A_2; buttonArray[i++]=ui->Q16A_3;
    buttonArray[i++]=ui->Q17A_1; buttonArray[i++]=ui->Q17A_2; buttonArray[i++]=ui->Q17A_3;
    buttonArray[i++]=ui->Q18A_1; buttonArray[i++]=ui->Q18A_2; buttonArray[i++]=ui->Q18A_3;
    buttonArray[i++]=ui->Q19A_1; buttonArray[i++]=ui->Q19A_2; buttonArray[i++]=ui->Q19A_3;
    buttonArray[i++]=ui->Q20A_1; buttonArray[i++]=ui->Q20A_2; buttonArray[i++]=ui->Q20A_3;
    buttonArray[i++]=ui->Q21A_1; buttonArray[i++]=ui->Q21A_2; buttonArray[i++]=ui->Q21A_3;
    buttonArray[i++]=ui->Q22A_1; buttonArray[i++]=ui->Q22A_2; buttonArray[i++]=ui->Q22A_3;
    buttonArray[i++]=ui->Q23A_1; buttonArray[i++]=ui->Q23A_2; buttonArray[i++]=ui->Q23A_3;
    buttonArray[i++]=ui->Q24A_1; buttonArray[i++]=ui->Q24A_2; buttonArray[i++]=ui->Q24A_3;
    buttonArray[i++]=ui->Q25A_1; buttonArray[i++]=ui->Q25A_2; buttonArray[i++]=ui->Q25A_3;
    buttonArray[i++]=ui->Q26A_1; buttonArray[i++]=ui->Q26A_2; buttonArray[i++]=ui->Q26A_3;
    buttonArray[i++]=ui->Q27A_1; buttonArray[i++]=ui->Q27A_2; buttonArray[i++]=ui->Q27A_3;
    buttonArray[i++]=ui->Q28A_1; buttonArray[i++]=ui->Q28A_2; buttonArray[i++]=ui->Q28A_3;
    buttonArray[i++]=ui->Q29A_1; buttonArray[i++]=ui->Q29A_2; buttonArray[i++]=ui->Q29A_3;
    buttonArray[i++]=ui->Q30A_1; buttonArray[i++]=ui->Q30A_2; buttonArray[i++]=ui->Q30A_3;

    i=0;
    questionArray[i++]=ui->Q_1;
    questionArray[i++]=ui->Q_2;
    questionArray[i++]=ui->Q_3;
    questionArray[i++]=ui->Q_4;
    questionArray[i++]=ui->Q_5;
    questionArray[i++]=ui->Q_6;
    questionArray[i++]=ui->Q_7;
    questionArray[i++]=ui->Q_8;
    questionArray[i++]=ui->Q_9;
    questionArray[i++]=ui->Q_10;
    questionArray[i++]=ui->Q_11;
    questionArray[i++]=ui->Q_12;
    questionArray[i++]=ui->Q_13;
    questionArray[i++]=ui->Q_14;
    questionArray[i++]=ui->Q_15;
    questionArray[i++]=ui->Q_16;
    questionArray[i++]=ui->Q_17;
    questionArray[i++]=ui->Q_18;
    questionArray[i++]=ui->Q_19;
    questionArray[i++]=ui->Q_20;
    questionArray[i++]=ui->Q_21;
    questionArray[i++]=ui->Q_22;
    questionArray[i++]=ui->Q_23;
    questionArray[i++]=ui->Q_24;
    questionArray[i++]=ui->Q_25;
    questionArray[i++]=ui->Q_26;
    questionArray[i++]=ui->Q_27;
    questionArray[i++]=ui->Q_28;
    questionArray[i++]=ui->Q_29;
    questionArray[i++]=ui->Q_30;

    miniButtonArray[0]=ui->MiniAns_1;
    miniButtonArray[1]=ui->MiniAns_2;
    miniButtonArray[2]=ui->MiniAns_3;
    miniButtonArray[3]=ui->MiniAns_4;
    miniButtonArray[4]=ui->MiniAns_5;

    for(i = 0; i<90; i++){
        buttonArray[i]->setAnsNumber(i);
        buttonArray[i]->setStyleSheet(styleSheetText[DEFAULT]);
        connect(buttonArray[i], SIGNAL(rightDoubleClicked(uint8_t)), this, SLOT(newNegInput(uint8_t)));
        connect(buttonArray[i], SIGNAL(leftDoubleClicked(uint8_t)), this, SLOT(newPosInput(uint8_t)));
    }
    for(i=0;i<5;i++){
        connect(miniButtonArray[i], SIGNAL(rightDoubleClicked(uint8_t)), this, SLOT(newNegInput(uint8_t)));
        connect(miniButtonArray[i], SIGNAL(leftDoubleClicked(uint8_t)), this, SLOT(newPosInput(uint8_t)));
    }

}

void MainWindow::newNegInput(uint8_t newUserInput){
    userInputs.push(0-(((int16_t) newUserInput)+1));
    buttonArray[newUserInput]->setStyleSheet(styleSheetText[WRONG]);
    updateVariables();
}

void MainWindow::newPosInput(uint8_t newUserInput){
    userInputs.push((int16_t) newUserInput+1);
    buttonArray[newUserInput]->setStyleSheet(styleSheetText[CORRECT]);
    updateVariables();
}

void MainWindow::on_undoButton_clicked()
{
    if(!userInputs.empty())
        userInputs.pop();
    updateVariables();
}

void MainWindow::updateText(){
    if(currLang==ENGLISH){
        on_EnRadioButton_clicked();
    }
    else if(currLang==FRENCH){
        on_FrRadioButton_clicked();
    }
    else{
        on_DeRadioButton_clicked();
    }

    for(int i=0; i<30; i++){//set style sheets based on probability
        buttonArray[i*3]->setStyleSheet(styleSheetText[DEFAULT]);
        buttonArray[i*3+1]->setStyleSheet(styleSheetText[DEFAULT]);
        buttonArray[i*3+2]->setStyleSheet(styleSheetText[DEFAULT]);
        if(probabilityMatrix[i*3]>=probabilityMatrix[i*3+1] && probabilityMatrix[i*3]>=probabilityMatrix[i*3+2]){
            buttonArray[i*3]->setStyleSheet(styleSheetText[MOST_LIKELY]);
        }
        else if(probabilityMatrix[i*3+1]>=probabilityMatrix[i*3+2]){
            buttonArray[i*3+1]->setStyleSheet(styleSheetText[MOST_LIKELY]);
        }
        else{
            buttonArray[i*3+2]->setStyleSheet(styleSheetText[MOST_LIKELY]);
        }
    }
    for(int i=0; i<90; i++){
        if(probabilityMatrix[i]==100.0){
            buttonArray[i]->setStyleSheet(styleSheetText[CORRECT]);
            buttonArray[i]->setEnabled(false);
        }
        else if(probabilityMatrix[i]==0.0){
            buttonArray[i]->setStyleSheet(styleSheetText[WRONG]);
            buttonArray[i]->setEnabled(false);
        }else{
            buttonArray[i]->setEnabled(true);
        }
    }


    for(int i=0; i<5; i++){
        if(!miniButtonArray[i]->isHidden()){
            miniButtonArray[i]->setText(buttonArray[miniButtonArray[i]->getAnsNumber()]->text());
            miniButtonArray[i]->setStyleSheet(buttonArray[miniButtonArray[i]->getAnsNumber()]->styleSheet());
        }
    }

}

void MainWindow::on_patternNumInput_textEdited(const QString &arg1)
{
    ui->patternNumInput->setText(arg1);
    ui->minipatternNumInput->setText(arg1);

    if(arg1.isEmpty()){
        on_resetButton_clicked();
    }
    else{
        while(!userInputs.empty()){//clear user input
            userInputs.pop();
        }
        for(int i=0;i<30;i++){//force correct pattern input
            userInputs.push(i*3+patternArray[i+arg1.toInt()]);
        }
        updateVariables();
   }
    if(!ui->actionMini_mode->isChecked()){
        ui->patternNumInput->setFocus();
    }
    else{
        ui->minipatternNumInput->setFocus();
    }
}

void MainWindow::on_resetButton_clicked()
{
    ui->patternNumInput->setText("");
    while(!userInputs.empty()){
        userInputs.pop();
    }
    ui->lineEdit->clear();
    updateVariables();
}

void MainWindow::on_actionDouble_triggered()
{
        for(int i = 0; i<90; i++){
            connect(buttonArray[i], SIGNAL(rightDoubleClicked(uint8_t)), this, SLOT(newNegInput(uint8_t)));
            connect(buttonArray[i], SIGNAL(leftDoubleClicked(uint8_t)), this, SLOT(newPosInput(uint8_t)));
            disconnect(buttonArray[i], SIGNAL(rightClicked(uint8_t)), this, SLOT(newNegInput(uint8_t)));
            disconnect(buttonArray[i], SIGNAL(leftClicked(uint8_t)), this, SLOT(newPosInput(uint8_t)));
        }
        for(int i = 0; i<5; i++){
            connect(miniButtonArray[i], SIGNAL(rightDoubleClicked(uint8_t)), this, SLOT(newNegInput(uint8_t)));
            connect(miniButtonArray[i], SIGNAL(leftDoubleClicked(uint8_t)), this, SLOT(newPosInput(uint8_t)));
            disconnect(miniButtonArray[i], SIGNAL(rightClicked(uint8_t)), this, SLOT(newNegInput(uint8_t)));
            disconnect(miniButtonArray[i], SIGNAL(leftClicked(uint8_t)), this, SLOT(newPosInput(uint8_t)));
        }
        ui->actionSingle->setChecked(false);
        ui->actionDouble->setChecked(true);
}

void MainWindow::on_actionSingle_triggered()
{
        for(int i = 0; i<90; i++){
            connect(buttonArray[i], SIGNAL(rightClicked(uint8_t)), this, SLOT(newNegInput(uint8_t)));
            connect(buttonArray[i], SIGNAL(leftClicked(uint8_t)), this, SLOT(newPosInput(uint8_t)));
            disconnect(buttonArray[i], SIGNAL(rightDoubleClicked(uint8_t)), this, SLOT(newNegInput(uint8_t)));
            disconnect(buttonArray[i], SIGNAL(leftDoubleClicked(uint8_t)), this, SLOT(newPosInput(uint8_t)));
        }
        for(int i = 0; i<5; i++){
            connect(miniButtonArray[i], SIGNAL(rightClicked(uint8_t)), this, SLOT(newNegInput(uint8_t)));
            connect(miniButtonArray[i], SIGNAL(leftClicked(uint8_t)), this, SLOT(newPosInput(uint8_t)));
            disconnect(miniButtonArray[i], SIGNAL(rightDoubleClicked(uint8_t)), this, SLOT(newNegInput(uint8_t)));
            disconnect(miniButtonArray[i], SIGNAL(leftDoubleClicked(uint8_t)), this, SLOT(newPosInput(uint8_t)));
        }
        ui->actionSingle->setChecked(true);
        ui->actionDouble->setChecked(false);
}

void MainWindow::searchTextEdited(const QString &userSearchInput)
{
    std::stack <uint8_t> possibleQuestion;
    int miniButtonCount=0;

    ui->lineEdit->setText(userSearchInput);
    ui->MiniStringSearch->setText(userSearchInput);

    if(userSearchInput.isEmpty()){//user cleared string
        ui->lineEdit->clear();
        ui->miniStringSearchLabel->clear();
        for(uint8_t i=0; i<90; i++){
            buttonArray[i]->setFlat(true);
        }
    }
    else{//user entered string
        for(uint8_t i=0; i<30; i++){
            if(((currSearchLang==ALL_LANGUAGES || currLang==ENGLISH) && (((currSearchMode!=ANSWERS)&& EnQuestionText[i].contains(userSearchInput,Qt::CaseInsensitive))
                                                                         || ((currSearchMode!=QUESTIONS) && (EnAnswerText[i*3].contains(userSearchInput,Qt::CaseInsensitive)
                                                                                                            || EnAnswerText[i*3+1].contains(userSearchInput,Qt::CaseInsensitive)
                                                                                                            || EnAnswerText[i*3+2].contains(userSearchInput,Qt::CaseInsensitive)
                                                                                                            )
                                                                            )
                                                                        ))
                    ||((currSearchLang==ALL_LANGUAGES || currLang==FRENCH) && (((currSearchMode!=ANSWERS)&& FrQuestionText[i].contains(userSearchInput,Qt::CaseInsensitive))
                                                                               || ((currSearchMode!=QUESTIONS) && (FrAnswerText[i*3].contains(userSearchInput,Qt::CaseInsensitive)
                                                                                                                   || FrAnswerText[i*3+1].contains(userSearchInput,Qt::CaseInsensitive)
                                                                                                                   || FrAnswerText[i*3+2].contains(userSearchInput,Qt::CaseInsensitive)
                                                                                                                  )
                                                                                    )
                                                                                ))
                    ||((currSearchLang==ALL_LANGUAGES || currLang==GERMAN) && (((currSearchMode!=ANSWERS)&& DeQuestionText[i].contains(userSearchInput,Qt::CaseInsensitive))
                                                                               || ((currSearchMode!=QUESTIONS) && (DeAnswerText[i*3].contains(userSearchInput,Qt::CaseInsensitive)
                                                                                                                   || DeAnswerText[i*3+1].contains(userSearchInput,Qt::CaseInsensitive)
                                                                                                                   || DeAnswerText[i*3+2].contains(userSearchInput,Qt::CaseInsensitive)
                                                                                                                  )
                                                                                               )
                                                                                            ))
               )
                {
                    buttonArray[i*3]->setFlat(false); //highlight
                    buttonArray[i*3+1]->setFlat(false);
                    buttonArray[i*3+2]->setFlat(false);

                    //push most likely onto possible results stack
                    if((probabilityMatrix[i*3]>=probabilityMatrix[i*3+1]) && (probabilityMatrix[i*3]>=probabilityMatrix[i*3+2])){
                        possibleQuestion.push(i*3);
                    }
                    else if((probabilityMatrix[i*3+1]>=probabilityMatrix[i*3+2])){
                       possibleQuestion.push(i*3+1);
                    }
                    else{
                       possibleQuestion.push(i*3+2);
                    }
                }
                else{
                    buttonArray[i*3]->setFlat(true); //unhighlight
                    buttonArray[i*3+1]->setFlat(true);
                    buttonArray[i*3+2]->setFlat(true);
                }
        }
    }

    if(possibleQuestion.size()<6){
        while(!possibleQuestion.empty()){
            miniButtonArray[miniButtonCount]->setAnsNumber(buttonArray[possibleQuestion.top()]->getAnsNumber());
            miniButtonArray[miniButtonCount]->show();
            miniButtonCount++;
            possibleQuestion.pop();
        }
    }
    while(miniButtonCount<5){
        miniButtonArray[miniButtonCount]->hide();
       miniButtonCount++;
    }
    updateText();
}

void MainWindow::on_lineEdit_cursorPositionChanged(int arg1, int arg2)
{
    if(arg1>arg2){
        ui->lineEdit->clear();
        ui->MiniStringSearch->clear();
        for(uint8_t i=0; i<90; i++){
            buttonArray[i]->setFlat(true);
        }
        for(int i=0; i<5; i++){
            miniButtonArray[i]->hide();
        }
    }
    else{
        searchTextEdited(ui->lineEdit->text());
    }
    //updateText();
}

void MainWindow::on_actionFull_Calculator_triggered(){
        ui->actionMini_mode->setChecked(false);
        ui->actionFull_Calculator->setChecked(true);
        setFixedSize(750,576);
        ui->miniCalcWidget->hide();
        ui->fullCalcWidget->show();
}

void MainWindow::on_actionMini_mode_triggered(){
        ui->actionFull_Calculator->setChecked(false);
        ui->actionMini_mode->setChecked(true);
        setFixedSize(272,213);
        ui->fullCalcWidget->hide();
        ui->miniCalcWidget->show();
}

void MainWindow::on_MiniStringSearch_cursorPositionChanged(int arg1, int arg2)
{
    if(arg1>arg2){
        ui->lineEdit->clear();
        ui->MiniStringSearch->clear();
        for(uint8_t i=0; i<90; i++){
            buttonArray[i]->setFlat(true);
        }
        for(int i=0; i<5; i++){
            miniButtonArray[i]->hide();
        }
    }
    else{
        searchTextEdited(ui->MiniStringSearch->text());
    }
    updateText();
}

void MainWindow::keyPressEvent(QKeyEvent *e){
    if(e->matches(QKeySequence::Undo)){
       on_undoButton_clicked();
    }
    else if(e->matches(QKeySequence::FullScreen)){
        if(ui->actionFull_Calculator->isChecked()){
            on_actionMini_mode_triggered();
        }
        else{
            on_actionFull_Calculator_triggered();
        }
    }
    else if(e->matches(QKeySequence::New)){
        on_resetButton_clicked();
    }
    else if(e->key()==Qt::Key_Backspace || e->key() == Qt::Key_Enter || e->key() == Qt::Key_Return || e->key() == Qt::Key_Delete || e->key() == Qt::Key_Escape){
        ui->lineEdit->clear();
        ui->MiniStringSearch->clear();
        for(uint8_t i=0; i<90; i++){
            buttonArray[i]->setFlat(true);
        }
        for(int i=0; i<5; i++){
            miniButtonArray[i]->hide();
        }
    }
    else{
        ui->lineEdit->setText(ui->lineEdit->text()+e->text());
        ui->lineEdit->setFocus();
    }
}

void MainWindow::on_actionQuestions_triggered(){
        ui->actionQuestions->setChecked(true);
        ui->actionAnswers->setChecked(false);
        ui->actionQuestions_Answers->setChecked(false);
        currSearchMode = QUESTIONS;
}

void MainWindow::on_actionAnswers_triggered(){
        ui->actionAnswers->setChecked(true);
        ui->actionQuestions->setChecked(false);
        ui->actionQuestions_Answers->setChecked(false);
        currSearchMode = ANSWERS;
}

void MainWindow::on_actionQuestions_Answers_triggered(){
        ui->actionQuestions_Answers->setChecked(true);
        ui->actionAnswers->setChecked(false);
        ui->actionQuestions->setChecked(false);
        currSearchMode = QUESTION_AND_ANSWERS;
}

void MainWindow::on_actionCurrent_Language_triggered(){
    ui->actionCurrent_Language->setChecked(true);
    ui->actionAll_Languages->setChecked(false);
    currSearchLang = CURRENT;
}

void MainWindow::on_actionAll_Languages_triggered(){
    ui->actionCurrent_Language->setChecked(false);
    ui->actionAll_Languages->setChecked(true);
    currSearchLang = ALL_LANGUAGES;
}

