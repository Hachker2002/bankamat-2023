#include <iostream>
using namespace std;

int main() {

    const int cardPass = 1234;
    int parol , urunish = 3;
    double Balans = 1500000;
    metkaParol:
    cout << "Parol kiriting : "; cin >> parol;
    if(cardPass == parol){
        metkaMenu:
        cout<<"    Bosh menyu\n";
        cout << "1-Balans\n2-Naqt pul olish\n3-To'lovlar\n4-SMS xabarnomasi\n";
        int tanlovMenu;
        cout << "menu tanlang: ";
        cin >> tanlovMenu;
        /*system("cls");*/
        switch (tanlovMenu) {
            case 1:{
                //cout << "sizda " << fixed << Balans << " so'm bor\n";
                printf("sizda %.02f so'm bor\n", Balans);
            }
                break;
            case 2:{
                double yechibOlishSum;
                metkaYechSum:
                cout << "Summa kiriting : ";
                cin >> yechibOlishSum;
                if(Balans >= yechibOlishSum){
                    Balans -= yechibOlishSum;
                    printf("siz %.02f yechib oldingiz\n", yechibOlishSum);
                    printf("sizda %.02f so'm qoldi\n", Balans);
                    int tanlov;
                    metkaTanPulExit:
                    cout << "0-Dasturni yakunlash\n1-Bosh Menu\n";
                    cout << "menu tanlang: ";
                    cin >> tanlov;
                    if(tanlov == 0){
                        return 0;
                    }
                    else if(tanlov == 1){
                        goto metkaMenu;
                    } else{
                        cout << "siz 0 yoki 1 ni tanlang\n";
                        goto metkaTanPulExit;
                    }
                } else{
                    cout << "sizda mablag' yetarli emas\n";
                    printf("sizda %.02f so'm bor\n", Balans);
                    goto metkaYechSum;
                }

            }
                break;
            case 3:{
                cout << "1-Komunal\n2-Soliqlar\n3-Mobile\n4-Jarimi\n";
                int tanlov;
                cout << "menu tanlang : "; cin >> tanlov;
                switch (tanlov)
                {
                    case 1:{
                        cout << "1-Gaz\n2-Suv\n3-Svet\n4-Chiqindi\n";
                        int tanlovKom;
                        cout << "menu tanlang : "; cin >> tanlovKom;
                        switch (tanlovKom) {
                            case 1:{
                                int GazXR;
                                float gazTolSum;
                                cout << "Gaz xisib raqamini kiriting : ";
                                cin >> GazXR;
                                metkaGazSum:
                                cout << "Sum kiriting : ";
                                cin >> gazTolSum;
                                if(gazTolSum <= Balans){
                                    Balans -= gazTolSum;
                                    printf("siz %.02f gazga to'lov qildingiz\n", gazTolSum);
                                    printf("sizda %.02f so'm qoldi\n", Balans);
                                } else{
                                    cout << "sizda mablag' yetarli emas\n";
                                    printf("sizda %.02f so'm bor\n", Balans);
                                    goto metkaMenu;
                                }
                            }
                                break;
                            case 4:{
                                int chiqindi;
                                float musurtolovsum;
                                string vil,tum;
                                cout<<"viloyatni kiriting    :";cin>>vil;
                                cout<<"tumanni   kiriting    :";cin>>tum;
                                cout<<"xisobraqamni kiriting :";cin>>chiqindi;
                                metkacgiqindi:
                                cout<<"summani kiriting  :";cin>>musurtolovsum;
                                if (musurtolovsum <= Balans){
                                    Balans -= musurtolovsum;
                                    printf("siz %.02f tolov qildiz \n",musurtolovsum);
                                    printf("sizda %.02f som qoldi \n",Balans);
                                    goto metkaMenu;
                                } else{
                                    cout << "sizda mablag' yetarli emas\n";
                                    printf("sizda %.02f so'm bor\n", Balans);
                                    goto metkaMenu;
                                }

                            }
                                break;

                            case 3:{
                                int tok;
                                float toktolov;
                                string vil,tum;
                                cout<<"viloyatni kiriting   :";cin>>vil;
                                cout<<"tumanni   kiriting   :";cin>>tum;
                                cout<<"sivit xisob raqami   :";cin>>tok;
                                metkatok:
                                cout<<"summani kiriting    :";cin>>toktolov;
                                if (toktolov <= Balans){
                                    Balans -= toktolov;
                                    printf("siz %.02f tolov qildingiz  \n",toktolov);
                                    printf("sizda %.02f som qoldi\n",Balans);
                                } else{
                                    cout << "sizda mablag' yetarli emas\n";
                                    printf("sizda %.02f so'm bor\n", Balans);
                                    goto metkaMenu;
                                }




                            }
                                break;


                            case 2:{
                                string vil,tum;
                                int suv;
                                float suvtolovsum;
                                cout<<"viloyatni kiriting   :";cin>>vil;
                                metkasuvsum:
                                cout<<"tumanni kiriting  :";cin>>tum;
                                cout<<"xisob raqamni kiriting   :";cin>>suv;
                                cout<<"tolovsummani kiriting  :";cin>>suvtolovsum;
                                if (suvtolovsum<=Balans){
                                    Balans-=suvtolovsum;
                                    printf("siz %.02f suvga tolov qildiz \n",suvtolovsum);
                                    printf("sizda %.02f so'm bor  :\n",Balans);
                                } else{
                                    cout << "sizda mablag' yetarli emas\n";
                                    printf("sizda %.02f so'm bor\n", Balans);
                                    goto metkasuvsum;

                                }
                            }
                                break;




                        }

                    }
                        break;
                    case 2:{
                        int a;
                        cout << "1-Daromad\n2-QQS\n3-Akses\n4-Yer\n";
                        cout<<"qaysi soliq turini tallaysiz   :";cin>> a;
                        switch (a) {
                            case 1:{
                                int soliq,pas;
                                float soliqsu,tolash;
                                cout<<"pasport raqamni kiriting  :";cin>>pas;
                                metkasoliq:
                                cout<<"tolovni kiriting  ";cin>>tolash;
                                if (tolash<=Balans){
                                    Balans-=tolash;
                                    printf(" siz %.02f som pull tolandi  '\n",tolash);
                                    printf("sizda %.02f qoldi  \n",Balans);
                                    goto metkaMenu;
                                } else{
                                    cout<<"sizda mablag' yetarlimas ";
                                    printf("sizda %.02f som bor \n",Balans);
                                    goto metkasoliq;
                                }

                            }
                                break;
                            case 2:{
                                int qqs;
                                float qqstolov, qqssoloq;
                                cout<<"paspotr raqamni kiriting    :";cin>>qqs;
                                metkaqqs:
                                cout<<"tolovni kiriting  :";cin>>qqstolov;
                                if (qqstolov<=Balans){
                                    Balans-=qqstolov;
                                    printf("sizdan %.02f pull tolandi  \n",qqstolov);
                                    printf("sizda %.02f pull qoldi\n",Balans);
                                    goto metkaMenu;
                                } else{
                                    cout<<"sizda mablag' yetarlimas ";
                                    printf("sizda %.02f som bor \n",Balans);
                                    goto metkaqqs;
                                }
                            }
                                break;
                            case 3:{
                                int soliq,pas;
                                float soliqsu,tolash;
                                cout<<"pasport raqamni kiriting  :";cin>>pas;
                                metakses:
                                cout<<"tolovni kiriting  ";cin>>tolash;
                                if (tolash<=Balans){
                                    Balans-=tolash;
                                    printf(" siz %.02f som pull tolandi  '\n",tolash);
                                    printf("sizda %.02f qoldi  \n",Balans);
                                    goto metkaMenu;
                                } else{
                                    cout<<"sizda mablag' yetarlimas ";
                                    printf("sizda %.02f som bor \n",Balans);
                                    goto metakses;
                                }

                            }
                                break;
                            case 4:{
                                int soliq,pas;
                                float soliqsu,tolash;
                                cout<<"pasport raqamni kiriting  :";cin>>pas;
                                metkayer:
                                cout<<"tolovni kiriting  ";cin>>tolash;
                                if (tolash<=Balans){
                                    Balans-=tolash;
                                    printf(" siz %.02f som pull tolandi  '\n",tolash);
                                    printf("sizda %.02f qoldi  \n",Balans);
                                    goto metkaMenu;
                                } else{
                                    cout<<"sizda mablag' yetarlimas ";
                                    printf("sizda %.02f som bor \n",Balans);
                                    goto metkayer;
                                }

                            }
                                break;


                        }
                    }
                        break;
                    case 3:{
                        int kampanita ;
                        cout<<"1-usell\n2-beeline\n3-ums\n4-uztelecom\n";cin>>kampanita;
                        switch (kampanita) {
                            case 1:{
                                int usell1;
                                float usell,tolash;
                                cout<<"    usell  \n";

                                cout<<"nomerni kiriting    :\n  +998";cin>>usell;

                                metkaesell:
                                cout<<"tolovni kiriting  \n";cin>>tolash;
                                if (tolash<=Balans){
                                    Balans-=tolash;
                                    printf(" siz %.02f som pull tolandi  '\n",tolash);
                                    printf("sizda %.02f qoldi  \n",Balans);
                                    goto metkaMenu;
                                } else{
                                    cout<<"sizda mablag' yetarlimas ";
                                    printf("sizda %.02f som bor \n",Balans);
                                    goto metkaesell;
                                }

                            }
                                break;
                            case 2:{
                                int beeline;
                                float beline,belinetolov;
                                cout<<"      Beeline   \n";
                                cout<<"nomerni kiriting   :\n +998";cin>>beeline;
                                metkabeeline:
                                cout<<"summani kiriting    :\n";cin>>belinetolov;
                                if (belinetolov<=Balans){
                                    Balans-=belinetolov;
                                    printf("sizdan %.02f som yechildi \n",belinetolov);
                                    printf("sizda %.02f som pull bor  \n",Balans);
                                    goto metkaMenu;
                                } else{
                                    cout<<"sizda mablag yetarli emas\n";
                                    printf("sizda %.02f pull bor\n",Balans);
                                    goto metkabeeline;
                                }
                            }
                                break;
                            case 3:{
                                int ums;
                                float umss,umstolov;
                                cout<<"   ums    \n";
                                cout<<"nomerni kiriting \n +998";cin>>ums;
                                metkaums:
                                cout<<"summani kiriting  :\n";cin>>umstolov;
                                if (umstolov <= Balans){
                                    Balans-=umstolov;
                                    printf("sizga %.02f som pull  tushdi \n",umstolov);
                                    printf("sizda %.02f som pull bor \n",Balans);
                                    goto metkaMenu;
                                } else{
                                    cout<<"sizda mablag' yetarlimas  \n";
                                    printf("sizda %.02f pull bor \n",Balans);
                                    goto metkaums;
                                }
                            }
                                break;
                            case 4:{
                                int uxtelecom;
                                float uzmobile, uztelecompull;
                                cout<<"    Uztelecom \n";
                                cout<<"nomerni kiriting   \n +998";cin>>uxtelecom;
                                metauztelecom:
                                cout<<"summani kiriting     :\n";cin>>uztelecompull;
                                if(uztelecompull<=Balans){
                                    Balans-=uztelecompull;
                                    printf("sizga %.02f pull tushdi \n",uztelecompull);
                                    printf("sizning xisobingizda   %.02f pull qoldi   \n",Balans);
                                    goto metkaMenu;
                                } else{
                                    cout<<"sizning hisobingizda yetarli mablg' yoq! \n";
                                    ::printf("bizning hisibingizda %.02f  \n",Balans);
                                    goto metauztelecom;
                                }
                            }
                                break;

                        }
                    }
                        break;
                    case 4:{
                        int jarima;
                        float jarimapul,jarimatola;
                        cout<<"     Jarima  \n";
                        cout<<"paspotr raqamini kiriting  :";cin>>jarimapul;
                        metkajarima:
                        cout<<"summani kiriting  :";cin>>jarimatola;
                        if (jarimatola<=Balans){
                            Balans-=jarimatola;
                            ::printf("jarimaga %.02f pull tolandi \n",jarimatola);
                            ::printf("sizda %.02f pull qoldi\n",Balans);
                            goto metkaMenu;
                        } else{
                            cout<<"sizning hisobingizda yetarli mablg' yoq! \n";
                            ::printf("bizning hisibingizda %.02f  \n",Balans);
                            goto metkajarima;
                        }
                    }
                        break;

                }
            }
                break;
            case 4: {
                int sms,a;
                float mms;
                cout<<"sms habornoamni ozgartrmoqchimisiz 1 ni bossing  \n 0 bosh menyu";cin>>sms;
                if (sms==1){
                    cout<<"telefon nomerni kiriting     \n";cin>>mms;
                    cout<<"tasdiqlash uchun 1  ni bosing \n bosh menyuga qaytish uchun 0";cin>>a;
                    if (a==1){
                        cout<<"sms habarnoma ulandi!!  \n";
                        goto metkaMenu;
                    } else if (a==0){
                        goto metkaMenu;
                    }

                } else {
                    goto metkaMenu;
                }

            }
                break;
        }



    } else{
        urunish--;
        if(urunish == 0){
            cout << "sizni kartangiz bloklandi\n";
            return 0;
        }
        cout << "Parol xato!!!\n";
        cout << "sizda " << urunish << " urunish qoldi\n";
        goto metkaParol;
    }


    return 0;
}

































main();
    return 0;
}
