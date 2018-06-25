const int buzzer = 10; //Define pin 10, can use other PWM pins  (5,6 or 9)
                       //Note pins 3 and 11 can't be used when using the tone function in Arduino Uno
const int songspeed = 1.5; //Change to 2 for a slower version of the song, the bigger the number the slower the song
//*****************************************
#define NOTE_B3  246
#define NOTE_C4  262   //Defining note frequency
#define NOTE_CS4  277
#define NOTE_D4  294
#define NOTE_DS4  311
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_FS4  369
#define NOTE_G4  392
#define NOTE_A4  440
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_D5  587
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_G5  784
#define NOTE_A5  880
#define NOTE_B5  988
//*****************************************
int notes[] = {       //Note of the song, 0 is a rest/pulse
   NOTE_D4, NOTE_G4, NOTE_G4, NOTE_FS4, NOTE_FS4, NOTE_E4, NOTE_FS4, // zive naj vsi narodi
   NOTE_FS4, NOTE_D4, NOTE_D4, NOTE_E4, NOTE_E4, NOTE_B3, NOTE_C4, NOTE_D4, // ki hrepene docakat dan
   NOTE_D4, NOTE_G4, NOTE_G4, NOTE_A4, NOTE_B4, NOTE_B4, NOTE_A4, NOTE_G4,   // da koder sonce hodi
   NOTE_FS4, NOTE_FS4, NOTE_E4, NOTE_DS4, NOTE_E4, NOTE_A4, NOTE_G4, NOTE_E4, NOTE_D4, // prepir iz sveta bo pregnan
   NOTE_D4, NOTE_E4, NOTE_C4, NOTE_B4, NOTE_D4, NOTE_G4, // da rojak prost bo vsak
   NOTE_G4, NOTE_FS4, NOTE_FS4, NOTE_E4, NOTE_E4, NOTE_D4, NOTE_CS4, NOTE_D4, // ne vrag le sosed bo mejak
   NOTE_D4, NOTE_E4, NOTE_C4, NOTE_B4, NOTE_D4, NOTE_G4, // da rojak prost bo vsak
   NOTE_G4, NOTE_G4, NOTE_G4, NOTE_G4, NOTE_G4, NOTE_G4, NOTE_FS4, // ne vrag le sosed bo
   NOTE_E4, NOTE_D4, NOTE_C5, NOTE_B4, NOTE_A4, NOTE_D5, NOTE_FS4, NOTE_G4 // ne vrag le sosed bo mejak
};
//*****************************************
int duration[] = {         //duration of each note (in ms) Quarter Note is set to 250 ms
  600, 450, 150, 300, 300, 600, 300, // zive naj vsi narodi
  300, 450, 150, 300, 300, 600, 600, 1800, // ki hrepene docakat dan
  600, 900, 300, 600, 600, 600, 600, 600, 600,  // da koder sonce hodi
  450, 150, 300, 300, 600, 300, 300, 1800, // prepir iz sveta bo pregnan
  600, 600, 1200, 600, 600, 900, // da rojak prost bo vsak
  300, 900, 300, 600, 600, 600, 600, 1200, // ne vrag le sosed bo mejak
  600, 600, 1200, 600, 600, 900, // da rojak prost bo vsak
  300, 600, 600, 600, 600, 1200, 600, // ne vrag le sosed bo
  600, 300, 300, 300, 300, 600, 600, 1800 // ne vrag le sosed bo mejak
};

void setup() {
  for (int i=0;i<67;i++){              //203 is the total number of music notes in the song
  int wait = duration[i] * songspeed;
  tone(buzzer,notes[i],wait);          //tone(pin,frequency,duration)
  delay(wait);}                        //delay is used so it doesn't go to the next loop before tone is finished playing
  //You can click reset on Arduino to replay the song
}

void loop() {

}
