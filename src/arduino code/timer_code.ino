
long int count=0;
int M=15;                                          // timer minutes
int on_off_switch=0;                               // assign pin number to main switch
int led1=1;                                        // assign pin number to led
int led2=2;
int led3=3;
int led4=4;
int led5=5;
int led6=6;
int buzzer=7;                                     // assign pin number to buzzer
int relay=9;                                      // assign pin number to uv relay
int reading;                                     // satus of on_off_switch

//long OnTime = 100;                               // milliseconds of on-time
//long OffTime = 100;                              // milliseconds of off-time



void setup() {
  TCCR1A = 0;                                   // intialisng timer registers
  TCCR1B = 0; 
  bitSet(TCCR1B, CS12);                        // 256 prescaler
  bitSet(TIMSK1, TOIE1);                       // timer overflow interrupt enable  

  pinMode(on_off_switch, INPUT);               // initialize digital pin switch as input.
  pinMode(led1, OUTPUT);                       // initialize digital pin LED as an output.
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(buzzer,OUTPUT);                     // initialize digital pin buzzer as an output.
  pinMode(relay, OUTPUT);                     // initialize digital pin relay as an output.
}



ISR(TIMER1_OVF_vect) { 
  reading = digitalRead(on_off_switch);
  
  count++;
  if(count==59)
  {
  M--;
  count=0;
  }

  if(reading ==HIGH)
  {
  digitalWrite(led6, HIGH);                  // turn the LED6 on
  digitalWrite(relay, HIGH);                // turn the relay for UV on
  
  if((M<=15)&&(M>12))
  digitalWrite(led1, !digitalRead(led1));

  if((M<=12)&&(M>9))
 {
  digitalWrite(led1, HIGH);                 // turn the LED1 is stable on
  digitalWrite(led2, !digitalRead(led2));
 }

  if((M<=9)&&(M>6))
 {
  digitalWrite(led1, HIGH);                 // turn the LED1 is stable on 
  digitalWrite(led2, HIGH);                 // turn the LED2 is stable on
  digitalWrite(led3, !digitalRead(led3)); 
 }

  if((M<=6)&&(M>3))
 {
  digitalWrite(led1, HIGH);                 // turn the LED1 is stable on 
  digitalWrite(led2, HIGH);                 // turn the LED2 is stable on
  digitalWrite(led3, HIGH);                 // turn the LED3 is stable on
  
  digitalWrite(led4, !digitalRead(led4));  
 }

 if((M<=3)&&(M>0))
 {
  digitalWrite(led1, HIGH);                 // turn the LED1 is stable on 
  digitalWrite(led2, HIGH);                 // turn the LED2 is stable on
  digitalWrite(led3, HIGH);                 // turn the LED3 is stable on
  digitalWrite(led4, HIGH);                 // turn the LED4 is stable on
  
  digitalWrite(led5, !digitalRead(led5));
 }

 if(M<=0)
 {
  digitalWrite(led1, HIGH);                 // turn the LED1 is stable on 
  digitalWrite(led2, HIGH);                 // turn the LED2 is stable on
  digitalWrite(led3, HIGH);                 // turn the LED3 is stable on
  digitalWrite(led4, HIGH);                 // turn the LED4 is stable on 
  digitalWrite(led5, HIGH);                 // turn the LED5 is stable on

  digitalWrite(buzzer, HIGH);               // turn the buzzer on
  digitalWrite(relay, LOW);                // turn the relay off

 }
}
else
  {
  digitalWrite(led1, LOW);                 // turn the LED1 OFF 
  digitalWrite(led2, LOW);                 // turn the LED2 OFF
  digitalWrite(led3, LOW);                 // turn the LED3 OFF
  digitalWrite(led4, LOW);                 // turn the LED4 OFF 
  digitalWrite(led5, LOW);                 // turn the LED5 OFF
  digitalWrite(led6, LOW);                 // turn the LED6 OFF
  digitalWrite(buzzer, LOW);               // turn the buzzer OFF
  digitalWrite(relay, LOW);                // turn the relay off
  M=15;
  count=0;
  }

}



void loop() { 
  

  // any other useful works like monitoring temp when UV is ON could be written here
  
  }
