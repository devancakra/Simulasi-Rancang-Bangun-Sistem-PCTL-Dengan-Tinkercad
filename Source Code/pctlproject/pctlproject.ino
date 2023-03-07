const int PB = 3; // Letak Pin Push Button: D3
const int Buzz = 4; // Letak Pin Buzzer: D4
const int TLR = 5; // Letak Pin LED Red: D5
const int TLY = 6; // Letak Pin LED Yellow: D6
const int TLG = 7; // Letak Pin LED Green: D7
#define DO_LOW 262 // HZ untuk Not Angka: DO Rendah
#define RE 294 // HZ untuk Not Angka: RE
#define MI 330 // HZ untuk Not Angka: MI
#define FA 349 // HZ untuk Not Angka: FA
#define SOL 392 // HZ untuk Not Angka: SOL
#define LA 440 // HZ untuk Not Angka: LA
#define SI 494 // HZ untuk Not Angka: SI
#define DO_HIGH 523 // HZ untuk Not Angka: DO Tinggi
#define RE_HIGH 698 // HZ untuk Not Angka: RE Tinggi

void setup() {
  pinMode(PB, INPUT); // Push Button sebagai INPUT
  pinMode(TLR, OUTPUT); // Traffic Light: Red sebagai OUTPUT
  pinMode(TLY, OUTPUT); // Traffic Light: Yellow sebagai OUTPUT
  pinMode(TLG, OUTPUT); // Traffic Light: Green sebagai OUTPUT
  pinMode(Buzz, OUTPUT); // Buzzer sebagai OUTPUT
}

void loop() {
  int buttonState = digitalRead(PB); // Pembacaan status push button
  if(buttonState == 1){
    // Jika tombol penyeberangan ditekan maka :
    digitalWrite(TLG, LOW); // Warna lampu hijau: OFF
    digitalWrite(TLR, HIGH); // Warna lampu merah: ON
    delay(1000); // Jeda 1 detik
    LaguDaerahON(); // Ada pemutaran suara
    digitalWrite(TLR, LOW); // Warna lampu merah: OFF
  } 
  if(buttonState == 0){
    // Jika tombol penyeberangan tidak ditekan maka :
    digitalWrite(TLR, LOW); // Warna lampu merah: OFF
    digitalWrite(TLY, HIGH); // Warna lampu kuning: ON
    digitalWrite(TLY, LOW); // Warna lampu kuning: OFF
    digitalWrite(TLG, HIGH); // Default Warna lampu hijau: ON
  }
}

void LaguDaerahON() {
  // Instrumen Lagu Daerah: 
  // Padhang Wulan Menyala
  
  // Baris 1
  tone(Buzz, SOL, 50); 
  delay(400);
  tone(Buzz, SOL, 50); 
  delay(400);
  tone(Buzz, FA, 100);
  delay(800);
  tone(Buzz, MI, 500);
  delay(800);
  tone(Buzz, SOL, 50);
  delay(400);
  tone(Buzz, DO_LOW, 50);
  delay(400);
  tone(Buzz, MI, 50);
  delay(400);
  tone(Buzz, RE, 50);
  delay(400);
  tone(Buzz, FA, 50);
  delay(400);
  tone(Buzz, SI, 50);
  delay(400);
  tone(Buzz, RE, 100);
  delay(800);
  tone(Buzz, DO_LOW, 500);
  delay(800);
  noTone(Buzz);
  
  // Baris 2
  tone(Buzz, SOL, 50); 
  delay(400);
  tone(Buzz, LA, 50); 
  delay(400);
  tone(Buzz, SI, 100); 
  delay(700);
  tone(Buzz, DO_HIGH, 500); 
  delay(800);
  tone(Buzz, SI, 50); 
  delay(400);
  tone(Buzz, DO_HIGH, 500); 
  delay(800);
  tone(Buzz, RE_HIGH, 100); 
  delay(600);
  tone(Buzz, DO_HIGH, 500); 
  delay(800);
  tone(Buzz, SI, 250); 
  delay(700);
  tone(Buzz, LA, 250); 
  delay(800);
  tone(Buzz, SOL, 250); 
  delay(800);
  noTone(Buzz);
  
  // Baris 3
  tone(Buzz, SOL, 50); 
  delay(400);
  tone(Buzz, LA, 50); 
  delay(400);
  tone(Buzz, SI, 100); 
  delay(700);
  tone(Buzz, DO_HIGH, 500); 
  delay(800);
  tone(Buzz, SI, 50); 
  delay(400);
  tone(Buzz, DO_HIGH, 500); 
  delay(800);
  tone(Buzz, DO_HIGH, 50); 
  delay(400);
  tone(Buzz, SI, 250); 
  delay(700);
  tone(Buzz, LA, 250); 
  delay(800);
  tone(Buzz, SOL, 500); 
  delay(800);
  tone(Buzz, LA, 50); 
  delay(400);
  tone(Buzz, FA, 50); 
  delay(400);
  noTone(Buzz);
  
  //Baris 4
  tone(Buzz, DO_HIGH, 500); 
  delay(800);
  tone(Buzz, SI, 500); 
  delay(800);
  tone(Buzz, LA, 500); 
  delay(800);
  tone(Buzz, SOL, 500); 
  delay(800);
  tone(Buzz, SOL, 100); 
  delay(400);
  tone(Buzz, RE, 100); 
  delay(400);
  tone(Buzz, FA, 100); 
  delay(400);
  tone(Buzz, MI, 100); 
  delay(400);
  tone(Buzz, MI, 100); 
  delay(400);
  tone(Buzz, RE, 100); 
  delay(400);
  tone(Buzz, RE, 100); 
  delay(400);
  tone(Buzz, DO_LOW, 100); 
  delay(400);
  noTone(Buzz);
}