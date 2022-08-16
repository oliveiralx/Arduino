//Declaração de Variaveis

//----------Variáveis dos Itens-----------------
int mit = 2; //Mitocôndria
int clo = 3; //Cloroplasto
int per = 4; //Peroxissomos
int vac = 5; //Vacúolo
int nuc = 6; //Núcleo
int com = 7; //Complexo de Golgi
int rer = 8; //Retículo Endoplasmático Rugoso
int rel = 9; //Retículo Endoplasmático Liso

//----------Variáveis do Display 7 Seg----------
int a = 10;
int b = 11;
int c = 12;
int d = 13;
int e = A0;
int f = A2;
int g = A3;

//----------Variáveis do Delay------------------
int dl = 0; //Delay Variável
int vdp = 0; //Valor do Potenciômetro
int pot = A1; //Leitura do Potenciômetro

void setup() 
{  
//----------Define pino dos LED como saida------
  pinMode(mit, OUTPUT);
  pinMode(clo, OUTPUT);
  pinMode(per, OUTPUT);
  pinMode(vac, OUTPUT);
  pinMode(nuc, OUTPUT);
  pinMode(com, OUTPUT);
  pinMode(rer, OUTPUT);
  pinMode(rel, OUTPUT);
  
//----Define Potenciômetro como entrada---------
  pinMode(pot, INPUT);
  
//----------------Padrão Serial-----------------
  Serial.begin(9600);
  
//----------Display 7 Seg como saida------------
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
}

void loop() 
{
//------Função do Delay/Potenciômetro-----------
  lepot();
  
//----------Função do Display 7 Seg-------------
  tela();
  
//---------------Função dos LEDs----------------
  LED();
}

//Funções do Programa
//Função Ler Potenciômetro
void lepot()
{  
  vdp = analogRead (pot);//Le o valor do potenciometro e armazena na variavel
  
  dl = map(vdp, 0, 1023, 1000, 5000); //Comando map: Mapeia o 
                                      //valor do potenciômetro 
                                      //para o valor em segundos
                                      
  Serial.println(dl); //Mostra o valor exato no Monitor Serial
}

//Função Display
void tela()
{  
//Define o display de 1 SEGUNDO
  if(dl >= 1000 && dl < 2000)
  {
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, LOW);
  }
  
//Define o display de 2 SEGUNDOS
  if(dl >= 2000 && dl < 3000)
  {
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, LOW);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, LOW);
    digitalWrite(g, HIGH);
  }
  
//Define o display de 3 SEGUNDOS
  if(dl >= 3000 && dl < 4000)
  {
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, HIGH);
  }
  
//Define o display de 4 SEGUNDOS
  if(dl >= 4000 && dl < 5000)
  {
    digitalWrite(a, LOW);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
  }
  
//Define o display de 5 SEGUNDOS
  if(dl >= 5000)
  {
    digitalWrite(a, HIGH);
    digitalWrite(b, LOW);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, LOW);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
  }  
}

//Função dos LEDs
void LED(){
  digitalWrite(mit, HIGH);
  digitalWrite(clo, LOW);
  digitalWrite(per, LOW);
  digitalWrite(vac, LOW);
  digitalWrite(nuc, LOW);
  digitalWrite(com, LOW);
  digitalWrite(rer, LOW);
  digitalWrite(rel, LOW);
  delay(dl);

  digitalWrite(mit, LOW);
  digitalWrite(clo, HIGH);
  digitalWrite(per, LOW);
  digitalWrite(vac, LOW);
  digitalWrite(nuc, LOW);
  digitalWrite(com, LOW);
  digitalWrite(rer, LOW);
  digitalWrite(rel, LOW);
  delay(dl);

  digitalWrite(mit, LOW);
  digitalWrite(clo, LOW);
  digitalWrite(per, HIGH);
  digitalWrite(vac, LOW);
  digitalWrite(nuc, LOW);
  digitalWrite(com, LOW);
  digitalWrite(rer, LOW);
  digitalWrite(rel, LOW);
  delay(dl);

  digitalWrite(mit, LOW);
  digitalWrite(clo, LOW);
  digitalWrite(per, LOW);
  digitalWrite(vac, HIGH);
  digitalWrite(nuc, LOW);
  digitalWrite(com, LOW);
  digitalWrite(rer, LOW);
  digitalWrite(rel, LOW);
  delay(dl);

  digitalWrite(mit, LOW);
  digitalWrite(clo, LOW);
  digitalWrite(per, LOW);
  digitalWrite(vac, LOW);
  digitalWrite(nuc, HIGH);
  digitalWrite(com, LOW);
  digitalWrite(rer, LOW);
  digitalWrite(rel, LOW);
  delay(dl);

  digitalWrite(mit, LOW);
  digitalWrite(clo, LOW);
  digitalWrite(per, LOW);
  digitalWrite(vac, LOW);
  digitalWrite(nuc, LOW);
  digitalWrite(com, HIGH);
  digitalWrite(rer, LOW);
  digitalWrite(rel, LOW);
  delay(dl);

  digitalWrite(mit, LOW);
  digitalWrite(clo, LOW);
  digitalWrite(per, LOW);
  digitalWrite(vac, LOW);
  digitalWrite(nuc, LOW);
  digitalWrite(com, LOW);
  digitalWrite(rer, HIGH);
  digitalWrite(rel, LOW);
  delay(dl);

  digitalWrite(mit, LOW);
  digitalWrite(clo, LOW);
  digitalWrite(per, LOW);
  digitalWrite(vac, LOW);
  digitalWrite(nuc, LOW);
  digitalWrite(com, LOW);
  digitalWrite(rer, LOW);
  digitalWrite(rel, HIGH);
  delay(dl);
}
