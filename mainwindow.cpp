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

const std::vector<QString> MainWindow::FrQuestionText = {"DIS-MOI DE QUEL PARFUM, EST MON DENTIFRICE, GROS CRÉTIN",
                                                         "REGARDE-MOI BIEN ET DEVINE UN PEU, AVEC QUOI JE ME LAVE LES CHEVEUX!",
                                                         "JE SUIS CLASSE ET SUPER POLIE, D'Ok VIENNENT DONC MES HABITS?",
                                                         "BANJO, TU PUES LE SAUCISSON, AL'ÉCOLE QUEL ÉTA IT MON SURNOM?",
                                                         "JE N'AI PLUS BEAUCOUP D'AMIS, QUEL EST DONC MON PARFUM FAVORI?",
                                                         "RESPONDS OU JETE CASSE LE NEZ, QUELLE EST MA COULEUR PRÉFÉRÉ?",
                                                         "MON CORPS EST BEAU ET PLEIN DE VIE, QUEL EST MON SPORT FAVORI?",
                                                         "JE NE SUPPORTE PAS LES MhMES, Ok AI-JE OBTENU MON DIPLhME?",
                                                         "DEVINE COMMENT, MON P'TIT BIQUET, JE METS DE L'AMBIANCE DANS LES SOIRÉES?",
                                                         "DEVINE POUR VOIR SI TU ES MALIN, QUEL EST DONC MON PLAT DU MATIN?",
                                                         "J'AI UN LÉGER PROBLcME DE POIDES, POUR LE DfNER, QUEL EST MON PLAT?",
                                                         "J'AI DU GRAS AUTOUR DES PIEDS, QUESL EST MON DESSERT PRÉFÉRÉ?"
                                                         "MA PETITE CHAMBRE J'AI DÉCORÉ, QU'AI-JE BIEN PU UTILISER?",
                                                         "DANS UN POT PRc DE MON LIT, QUE FAIS-JE POUSSER, GROS ABRUTI?",
                                                         "RESPONDS-MOI VITE, MON P'TIT POTE, QUELLE COULEUR SONT MES CULOTTES?",
                                                         "A L'ÉCOLE J'AI SOUVENT VOMI QUI ÉTAIT ME MEILLEURE AMIE?",
                                                         "J'AIME BEAUCOUP LIRE ET MANGER, QUEL EST MON ROMAN PRÉFÉRÉ?",
                                                         "IL M'ARRIVE PARFOIS DE ME SOiLER, QUELLE EST MA BOISSON PRÉFÉRÉ?",
                                                         "LA NUIT MES DENTS UNT TENDANCE _ POURRIR, Ok AI-JE DONC L'HABITUDE DE DORMIR?",
                                                         "IL EST VRAI QUE JE PUE DES PIEDS MAIS... QUEL CONCUOURS AI-JE UN JOUR REMPORTÉ?",
                                                         "LE JOURNAL DES LAIDEURS ME TROUVE _ CROQUER, COMMENT M'A-T-ON PHOTOGRAPHIÉE",
                                                         "J'AIME LES RIMES ET LE VOMI, MAIS QUEL EST MON HOBI FAVORI?",
                                                         "J'AI DU CHARME, aA NE FAIT PAS UN PLI, COMMENT S'APPELAIT MON PETIT AMI?",
                                                         "J'AI PLEIN DE TRUCS DANS MON NEZ, QUEL ÉTAIT MON ANIMAL FAMILIER?",
                                                         "TOUTE NUE JE FAIS SOUVENT PEUR, QUEL EST DONC MON PORTE-BONHEUR?",
                                                         "ETRE GENTILLE? PLUThT MOURIR! AVEC QUOI AI-JE L'HABITUDE DE DORMIR?",
                                                         "COMME LES VAUTOURS J'ADORE VOLER, QUEL EST LA MARQUE DE MON BALAIS?",
                                                         "MIS _ PART LES MICROBES, QU'Y A-T-IL SOUS MA ROBE?",
                                                         "IL ME LAISSE SOUVENT PEINARDE, COMMENT S'APPELLE MON CHIEN DE GARDE?",
                                                         "LORSQUE JE CHANTE, PERSONNE NE SE MOQUE, COMMENT S'APPELLE MON GROUPE DE ROCK?"
                                                        };


const std::vector<QString> MainWindow::FrAnswerText = {"Au Thon Pourri", "A La Limace Salée", "Au Fromage Qui Pue",
                                                       "Des Fayots", "De L'huille De Vindange", "Du Lait De Porc",
                                                       "De La Décharge Municipal", "De La Boutique Des Horreurs", "Du SuperMarchédégueu",
                                                       "Haleine De Jambon", "Grosses Fesses", "Ventre Mou",
                                                       "Le Vomi De Hamster Séc???", "La Sueur De Gorille", "Le Crachat De Chameau",
                                                       "Gris Pourri", "Marron Bouse", "Vert Crade",
                                                       "Le Concours De Grimace", "Le Lancer De Gras De Jambon", "Le Course De Ba Lais",
                                                       "A L'école Supérieure Des Grosses", "A L'école Des Boudins", "A L'école Des Fesses Molles",
                                                       "Je Gonfle Des Ballons Avec Mes Fesses", "Je Me Déshabille Et Danse La Salsa", "J'avale Un Seau Entier De Fayots",
                                                       "Des Tartine De Rats", "Des Beignets D'Aragnées", "Des TéTards à La Cr?me",
                                                       "Des Steaks Au Poil De Porc", "Des Limaces Au Crottin", "Des Tartes à La Bouse",
                                                       "La Glace ? L'oeil De Goret", "Le G'tea U Aux Cafards", "Le Rat En Sorbet",
                                                       "Du Poisson Pourri","Des Chaussettes Sales", "Des Vielles Culottes",
                                                       "Une Plante Cranivore", "Une Verrue Plantaire", "Un ongle De Pied",
                                                       "Maron Et Moites","Grises Et Vieilles", "Jaunes Et Puantes",
                                                       "Maggy-La-Grosse", "Betty-Qui-Pue", "Hatty-Qui-Rotte",
                                                       "L'histoire D'une Vache", "Lv Vie De Bigru Le Porc", "Le Jambon Magique",
                                                       "La Bave D'Huitre", "La Sueur De Chameau", "La Jus De Limace",
                                                       "Dans Une Poubelle", "Sur Mon Trésor", "Dans Une Fosse Septique",
                                                       "Des Plus Grosses Fesses", "De La Culotte La Plus Sale", "Des Chaussettes Les Plus Collantes",
                                                       "Debout Sur Un Tas De Fumier", "Assise Sure Les Toilettes", "Allongée Sur Du Crottin",
                                                       "Collectionner Les Dents De Dragon", "Eclater Mes Boutons Avec Une Perceuse", "Manger Sans Les Mains",
                                                       "Gary Le Graisseux", "Gérard Le Gerbeux", "Bobby Le Zombie",
                                                       "Un Bébé Dragon", "Un Sanglier Siffleur", "Un Vautour Dingue",
                                                       "Une Téte De Lapin", "Un Mouchoir Sale", "Une Patte De Dragon",
                                                       "Un Ours En Peluche Décapité", "Un Vieux Babouin", "Un Crocodile Empaillé",
                                                       "Gras-Master 2000", "Boudin Deluxe", "Super Tas Pro",
                                                       "Une Culoote Pour Vaches", "Des Puces Savantes", "Une Gaine Renforcée",
                                                       "Hache-Viande", "Mange-Tout", "Teigneux",
                                                       "Grunty Et Les Grosses", "Grunty Et Les Balais", "Grunty Et Les Chaudrons"
                                                       };

const std::vector<QString> MainWindow::DeQuestionText = {"MACHE MIR JETZT KEINE SZENE, WOMIT PUTZE ICH MEINE ZÄHNE?!",
                                                         "WOMIT WASCHE ICH MEIN HAAR, DASS ES WIRD SO WUNDERBAR?",
                                                         "MEINE KLAMOTTEN, ES IST NICHT SCHWER, WO HABE ICH SIE WOHL HER?",
                                                         "DU BIST ZWAR NICHT SEHR HELLE, DOCH WIE WAR IN DER SCHULE MEIN NAME, AUF DIE SCHNELE?",
                                                         "WELCHER IST MEIN LIEBLINGSDUFT, DU KLEINER SCHUFT?",
                                                         "SAGE MIR GESHWIND, WLECHE MEINE LIEBSTEN FARBEN SIND!",
                                                         "WAS TREIBE ICH FÜR EINEN SPORT? SAGE ES MIR SCHNELL SONST GESHIEHT EIN MORD!",
                                                         "AUF WELCHER SCHULE BIN ICH GEWESEN? SAGE ES MIR, SONST SPRICHT MEIN BESEN!",
                                                         "SAGE ES MIR HEUT', WIE GRUNTILDA PARTYGÄSTE ERFREUT!",
                                                         "ZUM FRÜHSTÜCK ICH DAS HIER GERNE ESSE, SONST IST GELESEN DIE MESSE!",
                                                         "WAS ESSE ICH AM ABEND, ERQUICKEND UND LABEND?",
                                                         "SEI NICHT ÄNGSTLICH UND KOMME HER, VERRATE MIR MEIN LIEB LINGSDESSERT!",
                                                         "ICH MACHE DICH ZUR SCHNECKE, WAS HÄNGT IM SCHLAFZIMMER AN DER DECKKE?",
                                                         "ES IST WIE VERHEXT, WAS IN MEINEM BLUMENTOPF SO WÄCHST!",
                                                         "MEIN UNTERWÄSCHE IST NICHT NEU, IST MICH AN WELCH EM DESIGN ERFREU'?",
                                                         "BALD WIRD ESDONNERN MIT GERUMPEL, WER WAR IN DER SCHULE MEIN BESTER KUMPEL?",
                                                         "WENN DU MICH STEHST, AM ZEITUNGSSTAND, WELCHES BLATT HABE ICH IN DER HAND?",
                                                         "WER MEINEN LIEBSTEN TRUNK NICHT KENNT, DER HAT DAS HALBE SPIEL VERPENNT!"
                                                         "ANDERE SCHLAFEN IM BETT, WO FINDE ICH ES NACHTS DENN NETT?",
                                                         "ES WAR EINE ECHTE HATZ, BEI WELCHEM WETTBEWERB GEWANN ICH DEN 1. PLATZ?",
                                                         "HEXEN SPEZIAL IST NACH MIR GANZ WILD, WAS MACHE ICH AUF DEM TITELBILD?",
                                                         "EIN HOBBY HABE ICH DOCH, VIELL EICHT WEISST DU ES NOCH!",
                                                         "EIN JÜNGLING MIR GUT GEFIEL, ER HATTE CHARME UND STIL!",
                                                         "MEIN LIEBSTES HAUSTIER WAR SEHR NETT, ES SCHLIEF SOGAR IN MEINEM BETT!",
                                                         "EINEN GLÜCKSBRINGER ICH TRAGE. WAS IST ES DENN, DAS IST DIE FRAGE!",
                                                         "KNUDDELN TUE ICH FAST NIE, DOCH WENN, DANN WOHL MIT WELCHEM VIEH?",
                                                         "ICH HABE DEN BESTEN HEXENBESEN, WIE SCHNELL BIN ICH DAMIT GEWESEN?",
                                                         "WAS TRAGE ICH WOHL UNTER MEINER KLUFT, DU FRECHER KLEINER SCHUFT?",
                                                         "NUN LASSE ERKLINGEN AUS DEINEM MUND, AUF WELCHEN NAMEN HÖRTE MEIN HUND?",
                                                         "MEINE TOLLE BAND IST WELTBEKANNT, WIE HABE ICH SIE BLOSS GENANNT?"
                                                        };


const std::vector<QString> MainWindow::DeAnswerText = {"Matsch", "Fledermaushaut", "Stinkender Käse",
                                                       "Fledermausköttel", "Motoröl", "Ranzige Milch",
                                                       "Aus Der Mülltonne", "Saggy Maggys Boutique", "Vom Hexendiscounter",
                                                       "Bussardfratze", "Adlernase", "Warzenkopf",
                                                       "Stinkender Schwefel", "Schwitzender Affenfüss", "Ranziges Schlangenfett",
                                                       "Grabstein-Grau", "Bluetorangen-Rot", "Spei-Grün",
                                                       "Kesselheben", "Zauberbuch-Werfen", "Besenstiel-Rennen",
                                                       "Hexen-Uni", "Pommesbude", "Bushaltestelle",
                                                       "Alle Güste Fressen", "Geiseln Nehmen", "Aus Der Toilet Te Trinken",
                                                       "Gegrillte Grillen", "Zerquetschte Froschaugen", "Raupen Auf Toast",
                                                       "Schneckenschleim", "Fledermausburger", "Katzensteaks",
                                                       "Augapfel-Eiscreme", "Hackepeter Mit Marmelade", "Regenwurmsalat",
                                                       "Verfaulte Fische", "Stinkende Socken", "Schimmelnde Würmer",
                                                       "Glubschaugen-Baum", "Venusfleigenfalle", "Giftdornen-Rose",
                                                       "Schwarzblau Gestreift", "Rosagrün Gepunktet", "Giftgelb Gesprenkelt",
                                                       "Eine Klapperschlange", "Die Tafel", "Der Hausmeister",
                                                       "Die Bunte Hexenwelt", "Die Hexenrundschau", "Den Kesselkurier",
                                                       "Ratten-Milchshake", "Spinnenbein-Cocktail", "Tenschleim-Drink",
                                                       "In Einem Nagelbett", "In Einer Mülltonne", "In Einem Schwienestall",
                                                       "Warzenfratzen-Wettbewerb", "Miesmacher-Wettbewerb", "Stinkesocken-Wettbewerb",
                                                       "Kleine Kinder Zerprügeln", "In Unterhosen Posieren", "In Der Nase Bohren",
                                                       "Ameisenschokolade Essen", "Pickel Ausdrücken", "Fussnägel Abkauen",
                                                       "Joe Klo", "Kain Spass", "Will Hirn",
                                                       "Ein Toter Frosch", "Eine Dreiköpfige Fledermaus", "Ein Kopfloses Huhn",
                                                       "Ein Schrumpfkopf", "Ein Stinktierschanz", "Ein Schweinefuss",
                                                       "Mit Einem Totenschädel", "Mit Einer Lebenden Kobra", "Mit Einer Voodoo-Puppe",
                                                       "Schnell Wie Der Schall", "Schnell Wie Das Licht", "Stubenfliege",
                                                       "Eine Tote Ratte", "Ein Sabberlätzchen", "Einen Flohzirkus",
                                                       "Waldi", "Ripper", "Lassie",
                                                       "Gruntys Monstermob", "Gruntys Schürzenjäger", "Gruntys Kesselreiher"
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
    connect(ui->actionMini_mode, SIGNAL(toggled(bool)), this, SLOT(on_miniCalc_checked(bool)));
    connect(ui->minipatternNumInput,SIGNAL(textEdited(QString)),this, SLOT(on_patternNumInput_textEdited(QString)));
    connect(ui->miniEnRadioButton,SIGNAL(clicked(bool)),this,SLOT(on_EnRadioButton_clicked()));
    connect(ui->miniFrRadioButton,SIGNAL(clicked(bool)),this,SLOT(on_FrRadioButton_clicked()));
    connect(ui->miniDeRadioButton,SIGNAL(clicked(bool)),this,SLOT(on_DeRadioButton_clicked()));
    on_fullCalc_checked(true);
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
    ui->Q_1->setText("REMEMBER NOW BEFORE YOU LOSE, WHAT TYPE OF TOOTHPASTE DO I USE?");
    ui->EnRadioButton->setChecked(true);
    ui->miniEnRadioButton->setChecked(true);
    currLang=ENGLISH;
    for(int i=0; i<90;i++){
        buttonArray[i]->setText(EnAnswerText[i] + " : " + QString::number(probabilityMatrix[buttonArray[i]->getAnsNumber()],'f',1));
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
    ui->Q_1->setText("DIS?MOI DE QUEL PARFUM EST MON DENTIFRICE, GROSCRÉTIN!");
    currLang=FRENCH;
    ui->FrRadioButton->setChecked(true);
    ui->miniFrRadioButton->setChecked(true);
    for(int i=0; i<90;i++){
        buttonArray[i]->setText(FrAnswerText[i] + " : " + QString::number(probabilityMatrix[buttonArray[i]->getAnsNumber()],'f',1));
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
    ui->Q_1->setText("MACHE MIR JETZT KEINE SZENE, WOMIT PUTZE ICH MIENE ZÄHNE?!");
    currLang=GERMAN;
    ui->DeRadioButton->setChecked(true);
    ui->miniDeRadioButton->setChecked(true);
    for(int i=0; i<90;i++){
        buttonArray[i]->setText(DeAnswerText[i] + " : " + QString::number(probabilityMatrix[buttonArray[i]->getAnsNumber()],'f',1));
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

void MainWindow::on_doubleClick_checked(bool userWantsDouble)
{
    if(userWantsDouble){
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
    }
}

void MainWindow::on_singleClick_checked(bool userWantsSingle)
{
    if(userWantsSingle){
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
        ui->actionDouble->setChecked(false);
    }
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
            if(((EnQuestionText[i].contains(userSearchInput,Qt::CaseInsensitive))))//question contains search string
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

void MainWindow::on_fullCalc_checked(bool userWantsFullCalc){
    if(userWantsFullCalc){
        ui->actionMini_mode->setChecked(false);
        ui->actionFull_Calculator->setChecked(true);
        setFixedSize(750,576);
        ui->miniCalcWidget->hide();
        ui->fullCalcWidget->show();
    }
}

void MainWindow::on_miniCalc_checked(bool userWantsMiniCalc){
    if(userWantsMiniCalc){
        ui->actionFull_Calculator->setChecked(false);
        ui->actionMini_mode->setChecked(true);
        setFixedSize(272,213);
        ui->fullCalcWidget->hide();
        ui->miniCalcWidget->show();
    }
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
            on_miniCalc_checked(true);
        }
        else{
            on_fullCalc_checked(true);
        }
    }
    else if(e->matches(QKeySequence::New)){
        on_resetButton_clicked();
    }
}
