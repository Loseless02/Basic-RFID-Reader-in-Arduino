#include <Servo.h>                //Servo kütüphanemizi ekliyoruz.

int pirPin = 8;                   //Sensörü takacağımız pin
int servoPin = 9;                 //Servoyu takacağımız pin
int hareket;                      //Sensörden aldığımız veri
int yesilisik = 2;
int kirmiziisik = 3;
Servo motor;                      //Servo motor değişkeni


void setup() {
  motor.attach(servoPin);         //Servomuzu 9. pin ile ilişkilendiriyoruz.
  pinMode(pirPin, INPUT);         //Sensör pinimizi giriş olarak ayarlyoruz.

}

void loop() {
  hareket = digitalRead(pirPin);  //Sensörden okuma yapıyoruz.
  
  if(hareket == LOW){                           //Hareketlilik yok ise içerideki komutlar uygulanır.
    pinMode(kirmiziisik, HIGH); 
  }

  if(hareket != HIGH){            //Hareketlilik var ise içerideki komutlar uygulanır.
    pinMode(yesilisik, HIGH);
    if(hareket != HIGH){                           //Hareketlilik yok ise içerideki komutlar uygulanır.
      pinMode(kirmiziisik, HIGH); 
  }
  }
  if(hareket != HIGH){                           //Hareketlilik yok ise içerideki komutlar uygulanır.
    pinMode(kirmiziisik, HIGH); 
  }
}


