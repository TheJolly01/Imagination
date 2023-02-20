#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
    string player,risp, tipo;
    int x;
    cout<<"TAVERNIERE: Salute viandante..."<<endl;
    system("PAUSE");
    cout<<"TAVERNIERE: TU...NON PUOI...PASSAREEEEEEE"<<endl;
    system("PAUSE");
    cout<<"TAVERNIERE: Ah no scusa, ho confuso gioco..."<<endl;
    system("PAUSE");
    cout<<"TAVERNIERE: Dimmi un po', qual'e' il tuo nome?"<<endl;
    cin>>player;
    cout<<"TAVERNIERE: Ah... "<<player<<". Molto piacere, Io sono..."<<endl;
    system("PAUSE");
    cout<<"E mentre il TAVERNIERE stava dicendo il suo nome, un'esplosione distrusse tutto"<<endl;
    system("PAUSE");
    cout<<"E da qui ebbe inizio la storia di "<<player<<"."<<endl;
    system("PAUSE");
    while (risp!="si")
    {
    cout<<"Sei pronto, si o no?"<<endl;
    cin>>risp;
    if (risp=="si")
    {}
    else{
    if (risp=="no")
    {
                   cout<<"ALLORA ADDIO"<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
    }
    if (risp!="no")
    {
                   cout<<"NON HO CAPITO BENE"<<endl;
                   }
                   }
    }
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    cout<<"..."<<endl;
    system("PAUSE");
    cout<<player<<" si risveglia in una strana caverna"<<endl;
    system("PAUSE");
    cout<<"D'ora in poi potrai fare le tue scelte, scegliendo il numero della scelta."<<endl;
    system("PAUSE");
    cout<<"SE RISPONDERAI IN UN ALTRO MODO CHE NON SIA UN NUMERO MORIRAI"<<endl;
    system("PAUSE");
    cout<<"***MENU***"<<endl;
    cout<<"1-CHI SONO?"<<endl;
    cout<<"2-COSA CI FACCIO QUI?"<<endl;
    cout<<"3-DOV'E FINITA LA TAVERNA?"<<endl;
    cout<<"Segli il numero"<<endl;
    cin>>x;
    switch (x) {
           case 1:
                cout<<"SCONOSCIUTO: E la stessa domanda che mi sto facendo anche io"<<endl;
                system("PAUSE");
                cout<<"***MENU***"<<endl;
                cout<<"1-COSA CI FACCIO QUI?"<<endl;
                cout<<"2-DOV'E FINITA LA TAVERNA?"<<endl;
                cout<<"Segli il numero"<<endl;
                cin>>x;
                switch(x) {
                          case 1:
                               cout<<"SCONOSCIUTO: Sei caduto qui dal muro, non so come"<<endl;
                               system("PAUSE");
                               cout<<player<<": DOV'E FINITA LA TAVERNA?"<<endl;
                               system("PAUSE");
                               cout<<"SCONOSCIUTO: Di quale taverna stai parlando?"<<endl;
                               system("PAUSE");
                               break;
                               case 2:
                                    cout<<"SCONOSCIUTO: Di quale taverna stai parlando?"<<endl;
                                    system("PAUSE");
                                    cout<<player<<": COSA CI FACCIO QUI?"<<endl;
                                    system("PAUSE");
                                    cout<<"SCONOSCIUTO: Sei caduto qui dal muro, non so come"<<endl;
                                    system("PAUSE");
                                    break;
                                    default:
                                            cout<<"SEI MORTO"<<endl;
                                            system("PAUSE");
    return EXIT_SUCCESS;
    break;
    
                                    }
                                    break;
                                    case 2:
                                    cout<<"SCONOSCIUTO: Sei caduto qui dal muro, non so come"<<endl;
                                    system("PAUSE");
                                    cout<<"***MENU***"<<endl;
                                    cout<<"1-CHI SONO?"<<endl;
                                    cout<<"2-DOV'E FINITA LA TAVERNA?"<<endl;
                                    cout<<"Segli il numero"<<endl;
                                    cin>>x;
                                    switch(x) {
                                              case 1:
                                                   cout<<"SCONOSCIUTO: E la stessa domanda che mi sto facendo anche io"<<endl;
                                                   system("PAUSE");
                                                   cout<<player<<": DOV'E FINITA LA TAVERNA?"<<endl;
                                                   system("PAUSE");
                                                   cout<<"SCONOSCIUTO: Di quale taverna stai parlando?"<<endl;
                                                   system("PAUSE");
                                                   break;
                                                   case 2:
                                                        cout<<"SCONOSCIUTO: Di quale taverna stai parlando?"<<endl;
                                                        system("PAUSE");
                                                        cout<<player<<": CHI SONO?"<<endl;
                                                        system("PAUSE");
                                                        cout<<"SCONOSCIUTO: E la stessa domanda che mi sto facendo anche io"<<endl;
                                                        system("PAUSE");
                                                        break;
                                                        default:
                                            cout<<"SEI MORTO"<<endl;
                                            system("PAUSE");
    return EXIT_SUCCESS;
    break;
                                                        }
                                                        break;
                                                        case 3:
                                                        cout<<"SCONOSCIUTO: Di quale taverna stai parlando?"<<endl;
                                                        system("PAUSE");
                                                        cout<<"***MENU***"<<endl;
                                                        cout<<"1-CHI SONO?"<<endl;
                                                        cout<<"2-COSA CI FACCIO QUI?"<<endl;
                                                        cout<<"Segli il numero"<<endl;
                                                        cin>>x;
                                                        switch(x) {
                                                                  case 1:
                                                                       cout<<"SCONOSCIUTO: E la stessa domanda che mi sto facendo anche io"<<endl;
                                                                       system("PAUSE");
                                                                       cout<<player<<": COSA CI FACCIO QUI?"<<endl;
                                                                       system("PAUSE");
                                                                       cout<<"SCONOSCIUTO: Sei caduto qui dal muro, non so come"<<endl;
                                                                       system("PAUSE");
                                                                       break;
                                                                       case 2:
                                                                            cout<<"SCONOSCIUTO: Sei caduto qui dal muro, non so come"<<endl;
                                                                            system("PAUSE");
                                                                            cout<<player<<": CHI SONO?"<<endl;
                                                                            system("PAUSE");
                                                                            cout<<"SCONOSCIUTO: E la stessa domanda che mi sto facendo anche io"<<endl;
                                                                            system("PAUSE");
                                                                            break;
                                                                            default:
                                            cout<<"SEI MORTO"<<endl;
                                            system("PAUSE");
                                            break;
                                            }
                                                                            break;
                                                                            default:
                                            cout<<"SEI MORTO"<<endl;
                                            system("PAUSE");
    return EXIT_SUCCESS;
    break;}
                                     
                                     cout<<"SCONOSCIUTO: Sei un tipo strano..."<<endl;
                                     system("PAUSE");
                                     cout<<player<<": E tu chi sei?"<<endl;
                                     system("PAUSE");
                                     cout<<"CAPRIZIO: Io sono CAPRIZIO, e tu chi sei?"<<endl;
                                     system("PAUSE");
                                     cout<<player<<": Non me lo ricordo"<<endl;
                                     system("PAUSE");
                                     cout<<"CAPRIZIO: Dovrai sceglierne uno nuovo allora"<<endl;
                                     system("PAUSE");
                                     cout<<player<<": scegliero' "<<player<<", ha qualcosa di familiare"<<endl;
                                     system("PAUSE");
                                     cout<<"CAPRIZIO: Va bene,"<<player<<", ma che cosa sei?"<<endl;
                                     system("PAUSE");
                                     cout<<"DOPO L'ESPLOSIONE SEI DIVENTATO UN ALTRA COSA, SCEGLI TU"<<endl;
                                     system("PAUSE");
                                     cout<<"***MENU***"<<endl;
                                     cout<<"1-UN ELFO"<<endl;
                                     cout<<"2-UN CAVALIERE"<<endl;
                                     cout<<"3-UNO STREGONE"<<endl;
                                     cout<<"4- UN NINJA"<<endl;
                                     cout<<"Scegli il numero:"<<endl;
                                     cin>>x;
                                     switch (x) {
                                            case 1:
                                                 tipo=="ELFO";
                                                 break;
                                                 case 2:
                                                      tipo=="CAVALIERE";
                                                      break;
                                                      case 3:
                                                           tipo=="STREGONE";
                                                           break;
                                                           case 4:
                                                           tipo=="NINJA";
                                                           break;
                                                           default:
                                                                   cout<<"SEI MORTO"<<endl;
                                            system("PAUSE");
    return EXIT_SUCCESS;
    break;}
    cout<<player<<": Sono un "<<tipo<<endl;
    system("PAUSE");
    cout<<"CAPRIZIO: Ah, un "<<tipo<<"... lo e' anche mio cugino, pero' lui e' morto"<<endl;
    system("PAUSE");
    cout<<"CAPRIZIO: Percio' lo sarai anche tu..."<<endl;
    system("PAUSE");
    cout<<"SEI MORTO"<<endl;
    system("PAUSE");
    cout<<"HO DETTO CHE SEI MORTO"<<endl;
    system("PAUSE");
    cout<<"SEI MORTO BASTA PREMERE I TASTI"<<endl;
    system("PAUSE");
    cout<<"CON IL CUGINO DI CAPRIZIO HA FUNZIONATO"<<endl;
    system("PAUSE");
    cout<<"Mannaggia, vabe, vuoi continuare?"<<endl;
    cin>>risp;
    while (risp!="si")
    {
    if (risp=="si")
    {}
    else{
    if (risp=="no")
    {
                   cout<<"ALLORA ADDIO"<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
    }
    if (risp!="no")
    {
                   cout<<"NON HO CAPITO BENE"<<endl;
                   }
                   }
    }
                                    
                                    
    system("PAUSE");
    return EXIT_SUCCESS;
}
