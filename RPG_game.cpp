#include <iostream>
using namespace std;

int main()
{
    int escolha1, escolha2=0, escolha3;
    string enigma;
    
    cout<<"Na Ilha da Aurora Silenciosa, a promessa do tesouro perdido há muito tempo alimenta suas esperanças e desperta sua determinação. Decidido a desvendar os segredos enterrados sob a areia e as ruínas, você se lança numa busca desafiadora e emocionante. Cada passo adiante é um eco de aventura, cada pista descoberta é um sussurro do destino, guiando-o através dos mistérios dessa ilha enigmática."<<endl;
    cout<<"Você tem 3 opções de caminhos a seguir:"<<endl<<"1. Desbravar a mata."<<endl<<"2. Trilhar uma espécie de caminho que está no chão."<<endl<<"3. Dar uma volta na costa da ilha."<<endl;
    cin>>escolha1;
    
    switch(escolha1){
        case 1:
            cout<<"À sombra das árvores, um murmúrio suave atrai sua atenção. Seguindo o som, você descobre uma pequena cachoeira, onde a água dança sobre pedras cobertas de musgo. A cena é um refúgio de tranquilidade, um momento de pausa na sua busca frenética pelo tesouro perdido. Diante dessa beleza serena, você se permite um breve instante de contemplação, renovando suas forças para continuar a jornada. \n";
            cout<<"1. Atravessar a cachoeira"<<endl<<"2. Investigar os arredores. \n";
            cin>>escolha2;
            break;
        case 2:
            cout<<"Enquanto trilha um caminho na ilha, depara-se com um vilarejo. Um morador se aproxima, curioso com sua presença. Você compartilha sua missão de encontrar o tesouro perdido. Com um sorriso misterioso, o local se oferece para ajudar. A partir daí, uma nova jornada começa, permeada por segredos e descobertas na Ilha da Aurora Silenciosa. \n";
            cout<<"1. Seguir ele."<<endl<<"2. Voltar para o ponto inicial. \n";
            cin>>escolha3;
            if(escolha3==2){
                cout<<"Você tem 3 opções de caminhos a seguir:"<<endl<<"1. Desbravar a mata."<<endl<<"2. Trilhar uma espécie de caminho que está no chão."<<endl<<"3. Dar uma volta na costa da ilha."<<endl;
                cin>>escolha1;
            }
            break;
        case 3:
            cout<<"Você perdeu o seu tempo e acabou parando no mesmo lugar. \n"<<endl;
            cout<<"Você tem 2 opções de caminhos a seguir:"<<endl<<"1. Desbravar a mata."<<endl<<"2. Trilhar uma espécie de caminho que está no chão."<<endl;
            cin>>escolha1;
            break;
            
        default: 
            cout<<"Resposta inválida.";
    }
    
    switch(escolha2){
        case 1:
            cout <<"Ao entrar na cachoeira se depara com uma porta gigantesca de pedra. Para abrir a porta você deve resolver o enigma: Quid semper frangit cum dicit?, que traduzido é ""O que sempre se quebra ao ser dito?""\n";
            cin>>enigma;
            if(enigma=="silencio"){
                cout<<"Com a última revelação decifrada, a porta majestosa se abriu, revelando o tesouro cintilante. Em um momento de triunfo e admiração, o explorador alcançou o objetivo de sua busca. Assim, a jornada na Ilha da Aurora Silenciosa alcançou seu glorioso desfecho, deixando para trás uma lenda que ecoará através dos tempos.";
            }else{
                cout<<"Em um instante de descuido, uma armadilha antiga e mortal foi ativada, selando o destino do explorador. Seu sacrifício ecoou pelas câmaras escuras da ilha, uma lembrança sombria da perigosa busca pelo tesouro perdido. Seu legado, agora, vive como parte das histórias contadas sobre a Ilha da Aurora Silenciosa, um lembrete para os futuros aventureiros dos perigos que aguardam na busca pela glória e riqueza.";
            }
            break;
        
        case 2:
            cout<<"Ao investigar os arredores, depara-se com um vilarejo. Um morador se aproxima, curioso com sua presença. Você compartilha sua missão de encontrar o tesouro perdido. Com um sorriso misterioso, o local se oferece para ajudar. A partir daí, uma nova jornada começa, permeada por segredos e descobertas na Ilha da Aurora Silenciosa. \n"<<endl;
            cout<<"Envolto em uma aura de mistério, o local te conduz de volta à cachoeira, onde a água continua a fluir como testemunha silenciosa dos eventos que se desenrolaram. Com um gesto solene, ele te guia para as águas tumultuadas, como se indicasse que ali, entre o rugido da queda d'água e os suspiros do vento, reside a verdadeira essência da ilha perdida. Em silêncio, você se entrega à correnteza, deixando para trás o peso da busca e abraçando a incerteza do desconhecido que aguarda rio abaixo.\n"<<endl;
            cout<<"Ao entrar na cachoeira se depara com uma porta gigantesca de pedra. Para abrir a porta você deve resolver o enigma: Quid semper frangit cum dicit?, que traduzido é ""O que sempre se quebra ao ser dito?""\n"<<endl;
            cin>>enigma;
            if(enigma=="silencio"){
                cout<<"Com a última revelação decifrada, a porta majestosa se abriu, revelando o tesouro cintilante. Em um momento de triunfo e admiração, o explorador alcançou o objetivo de sua busca. Assim, a jornada na Ilha da Aurora Silenciosa alcançou seu glorioso desfecho, deixando para trás uma lenda que ecoará através dos tempos.";
            }else{
                cout<<"Em um instante de descuido, uma armadilha antiga e mortal foi ativada, selando o destino do explorador. Seu sacrifício ecoou pelas câmaras escuras da ilha, uma lembrança sombria da perigosa busca pelo tesouro perdido. Seu legado, agora, vive como parte das histórias contadas sobre a Ilha da Aurora Silenciosa...";
            }
            break;
    }
    
    switch(escolha3){
        case 1:
            cout <<"Envolto em uma aura de mistério, o local te conduz de volta à cachoeira, onde a água continua a fluir como testemunha silenciosa dos eventos que se desenrolaram. Com um gesto solene, ele te guia para as águas tumultuadas, como se indicasse que ali, entre o rugido da queda d'água e os suspiros do vento, reside a verdadeira essência da ilha perdida. Em silêncio, você se entrega à correnteza, deixando para trás o peso da busca e abraçando a incerteza do desconhecido que aguarda rio abaixo. \n"<<endl;
            cout<<"Ao entrar na cachoeira se depara com uma porta gigantesca de pedra. Para abrir a porta você deve resolver o enigma: Quid semper frangit cum dicit?, que traduzido é ""O que sempre se quebra ao ser dito?""\n"<<endl;
            cin>>enigma;
            if(enigma=="silencio"){
                cout<<"Com a última revelação decifrada, a porta majestosa se abriu, revelando o tesouro cintilante. Em um momento de triunfo e admiração, o explorador alcançou o objetivo de sua busca. Assim, a jornada na Ilha da Aurora Silenciosa alcançou seu glorioso desfecho, deixando para trás uma lenda que ecoará através dos tempos.";
            }else{
                cout<<"Em um instante de descuido, uma armadilha antiga e mortal foi ativada, selando o destino do explorador. Seu sacrifício ecoou pelas câmaras escuras da ilha, uma lembrança sombria da perigosa busca pelo tesouro perdido. Seu legado, agora, vive como parte das histórias contadas sobre a Ilha da Aurora Silenciosa...";
            }
            break;
            
    }
    
    return 0;
}
