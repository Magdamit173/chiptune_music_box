int OUT_PIN = 2;
int LED_OUT = 3;
bool isLit = false;

int C1 = 32;
int C1S = 34;  // C#1
int D1 = 36;
int D1S = 38;  // D#1
int E1 = 41;
int F1 = 43;  
int F1S = 46;  // F#1
int G1 = 49;
int G1S = 52;  // G#1
int A_1 = 55;
int A1S = 58;  // A#1
int B_1 = 62;

int C2 = 65;
int C2S = 69;  // C#2
int D2 = 73;
int D2S = 78;  // D#2
int E2 = 82;
int F2 = 87;  
int F2S = 93;  // F#2
int G2 = 98;
int G2S = 104; // G#2
int A_2 = 110;
int A2S = 117; // A#2
int B2 = 123;

int C3 = 131;
int C3S = 139; // C#3
int D_3 = 147;
int D3S = 156; // D#3
int E3 = 165;
int F3 = 175;  
int F3S = 185; // F#3
int G3 = 196;
int G3S = 208; // G#3
int A_3 = 220;
int A3S = 233; // A#3
int B3 = 247;

int C4 = 261;
int C4S = 277; // C#4
int D4 = 294;
int D4S = 311; // D#4
int E4 = 329;
int F4 = 349;  
int F4S = 370; // F#4
int G4 = 392;
int G4S = 415; // G#4
int A_4 = 440;
int A4S = 466; // A#4
int B4 = 494;

int C5 = 523;
int C5S = 554; // C#5
int D5 = 587;
int D5S = 622; // D#5
int E5 = 659;
int F5 = 698;  
int F5S = 740; // F#5
int G5 = 784;
int G5S = 831; // G#5
int A_5 = 880;
int A5S = 932; // A#5
int B5 = 988;

int C6 = 1047;
int C6S = 1109; // C#6
int D6 = 1175;
int D6S = 1245; // D#6
int E6 = 1319;
int F6 = 1397;  
int F6S = 1480; // F#6
int G6 = 1568;
int G6S = 1661; // G#6
int A_6 = 1760;
int A6S = 1865; // A#6
int B6 = 1976;

int C7 = 2093;
int C7S = 2217; // C#7
int D7 = 2349;
int D7S = 2489; // D#7
int E7 = 2637;
int F7 = 2794;  
int F7S = 2960; // F#7
int G7 = 3136;
int G7S = 3322; // G#7
int A_7 = 3520;
int A7S = 3729; // A#7
int B7 = 3951;

int C8 = 4186;
int C8S = 4435; // C#8
int D8 = 4699;
int D8S = 4978; // D#8
int E8 = 5274;
int F8 = 5588;  
int F8S = 5920; // F#8
int G8 = 6272;
int G8S = 6645; // G#8
int A8 = 7040;
int A8S = 7459; // A#8
int B8 = 7902;

int C9 = 8372;
int REST = 0;

int BPM = 82;
int WHOLE = (60000 / BPM) * 4;
int HALF = (60000 / BPM) * 2;
int QUARTER = (60000 / BPM) * 1;
int EIGHT = (60000 / BPM) * 0.5;
int SIXTEEN = (60000 / BPM) * 0.25;

int melodies[][2] = {
  {C6, EIGHT},
  {G5S, EIGHT},
  {D7S, EIGHT},
  {D6S, EIGHT},
  {A6S, EIGHT},
  {G5S, EIGHT},
  {G6S, EIGHT},
  {C6, EIGHT},
  {G6S, EIGHT},
  {A6S, EIGHT},
  {C7, EIGHT},
  {E6, EIGHT},
  {F6S, EIGHT},
  {D6S, EIGHT},
  {G6S, EIGHT},
  {A6S, EIGHT},
  {C7, EIGHT},
  {F6, EIGHT},
  {G5S, EIGHT},
  {F6, EIGHT},
  {E6, EIGHT},
  {G6, EIGHT},
  {C7S, EIGHT},
  {G6, EIGHT},
  {A6S, EIGHT},
  {G6S, EIGHT},
  {F5, EIGHT},
  {G6S, EIGHT},
  {F7, EIGHT},
  {D7S, EIGHT},
  {C7, EIGHT},
  {D7S, EIGHT},
  {D6S, EIGHT},
  {C6, EIGHT},
  {G6S, EIGHT},
  {F5, EIGHT},
  {G6, EIGHT},
  {G5S, EIGHT},
  {E6, EIGHT},
  {A5S, EIGHT},
  {G6S, EIGHT},
  {REST, SIXTEEN},
  {A6S, EIGHT},
  {REST, SIXTEEN},
  {C6, EIGHT},
  {F6, EIGHT},
  {REST, EIGHT},
  {D7S, EIGHT},
  {REST, EIGHT},
  {A6S, EIGHT},
  {G5S, SIXTEEN},
  {G6S, EIGHT},
  {REST, SIXTEEN},
  {C6S, EIGHT},
  {A5S, EIGHT},
  {C7S, EIGHT},
  {C7, EIGHT},
  {G6, EIGHT},
  {G6S, EIGHT},
  {D6S, EIGHT},
  {A6S, EIGHT},
  {G5, EIGHT},
  {C7S, EIGHT},
  {A5S, EIGHT},
  {G6, EIGHT},
  {D6S, EIGHT},
  {G5S, EIGHT},
  {D6S, EIGHT},
  {A6S, EIGHT},
  {C7S, EIGHT},
  {C7, EIGHT},
  {A6S, EIGHT},
  {G6S, EIGHT},               
  {G6, EIGHT},
  {G6S, EIGHT},
  {D6S, EIGHT},
  {G5S, EIGHT},
  {A_5, EIGHT},
  {G6S, EIGHT},
  {A5S, EIGHT},
  {REST, QUARTER},
  {G6, EIGHT}
};

int length = sizeof(melodies) / sizeof(melodies[0]);

void setup() {
  Serial.begin(9600);
  pinMode(OUT_PIN, OUTPUT);
  pinMode(LED_OUT, OUTPUT);
}

void loop() {
  for (int i = 0; i < length; i++) {
    isLit = !isLit;
    digitalWrite(LED_OUT, isLit);
    tone(OUT_PIN, melodies[i][0], melodies[i][1]);
    delay(melodies[i][1]);
    Serial.println(melodies[i][0]);
  }
  delay(2000); 
}
