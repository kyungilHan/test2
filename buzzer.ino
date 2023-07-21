//좋아요 기능
#define C 262 // 도 
#define D 294 // 레 
#define E 330 // 미 
#define F 349 // 파 
#define G 392 // 솔 
#define A 440 // 라 
#define B 494 // 시 

#define wholeNote 800 // 온음표

#define wn wholeNote/1
#define hn wholeNote/2 //  반음 halfNote
#define qn wholeNote/4 //QuaterNote
#define en wholeNote/8 //EightNote
#define sn wholeNote/16 //sixteenNote
int piezoPin = 8; 
//int tempo = 200; // duration 옵션 값 설정 
int notes[25] = { G, G, A, A, G, G, E,  G, G, E, E, D,  G, G, A, A, G, G, E,  G, E, D, E, C }; 
long tempo[25]  ={qn,qn,qn,qn,qn,qn,hn, qn,qn,qn,qn,hn, qn,qn,qn,qn,qn,qn,hn, qn,qn,qn,qn,hn};

void setup() { 
  pinMode (piezoPin, OUTPUT); 
} 

void loop() { 
  for (int i = 0; i < 25; i++) { 
    tone (piezoPin, notes[ i ], tempo[i]); 
    delay ((int)tempo[i]); 
  } 
  delay(3000); // 멜로디 중간에 짧게 멈추는 용도 

}