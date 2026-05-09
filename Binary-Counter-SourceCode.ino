int pin_1=2;
int pin_2=3;
int pin_3=4;
int pin_4=5;

int main_delay=1500;

int middle_delay=500;

void setup(){
    pinMode(pin_1,OUTPUT);
    pinMode(pin_2,OUTPUT);
    pinMode(pin_3,OUTPUT);
    pinMode(pin_4,OUTPUT);
}

void loop(){
    digitalWrite(pin_1,LOW);
    digitalWrite(pin_2,LOW);
    digitalWrite(pin_3,LOW);
    digitalWrite(pin_4,LOW);
    
    delay(middle_delay);
    
    digitalWrite(pin_1,LOW);
    digitalWrite(pin_2,LOW);
    digitalWrite(pin_3,LOW);
    digitalWrite(pin_4,HIGH);
    
    delay(middle_delay);
    
    digitalWrite(pin_1,LOW);
    digitalWrite(pin_2,LOW);
    digitalWrite(pin_3,HIGH);
    digitalWrite(pin_4,LOW);
    
    delay(middle_delay);
    
    digitalWrite(pin_1,LOW);
    digitalWrite(pin_2,LOW);
    digitalWrite(pin_3,HIGH);
    digitalWrite(pin_4,HIGH);
    
    delay(middle_delay);
    
    digitalWrite(pin_1,LOW);
    digitalWrite(pin_2,HIGH);
    digitalWrite(pin_3,LOW);
    digitalWrite(pin_4,LOW);
    
    delay(middle_delay);
    
    digitalWrite(pin_1,LOW);
    digitalWrite(pin_2,HIGH);
    digitalWrite(pin_3,LOW);
    digitalWrite(pin_4,HIGH);
    
    delay(middle_delay);
    
    digitalWrite(pin_1,LOW);
    digitalWrite(pin_2,HIGH);
    digitalWrite(pin_3,HIGH);
    digitalWrite(pin_4,LOW);
    
    delay(middle_delay);
    
    digitalWrite(pin_1,LOW);
    digitalWrite(pin_2,HIGH);
    digitalWrite(pin_3,HIGH);
    digitalWrite(pin_4,HIGH);
    
    delay(middle_delay);
    
    digitalWrite(pin_1,HIGH);
    digitalWrite(pin_2,LOW);
    digitalWrite(pin_3,LOW);
    digitalWrite(pin_4,LOW);
    
    delay(middle_delay);
    
    digitalWrite(pin_1,HIGH);
    digitalWrite(pin_2,LOW);
    digitalWrite(pin_3,LOW);
    digitalWrite(pin_4,HIGH);
    
    delay(middle_delay);
    
    digitalWrite(pin_1,HIGH);
    digitalWrite(pin_2,LOW);
    digitalWrite(pin_3,HIGH);
    digitalWrite(pin_4,LOW);
    
    delay(middle_delay);
    
    digitalWrite(pin_1,HIGH);
    digitalWrite(pin_2,LOW);
    digitalWrite(pin_3,HIGH);
    digitalWrite(pin_4,HIGH);
    
    delay(middle_delay);
    
    digitalWrite(pin_1,HIGH);
    digitalWrite(pin_2,HIGH);
    digitalWrite(pin_3,LOW);
    digitalWrite(pin_4,LOW);
    
    delay(middle_delay);
    
    
    digitalWrite(pin_1,HIGH);
    digitalWrite(pin_2,HIGH);
    digitalWrite(pin_3,LOW);
    digitalWrite(pin_4,HIGH);
    
    delay(middle_delay);
    
    digitalWrite(pin_1,HIGH);
    digitalWrite(pin_2,HIGH);
    digitalWrite(pin_3,HIGH);
    digitalWrite(pin_4,LOW);
    
    delay(middle_delay);
    
    
    digitalWrite(pin_1,HIGH);
    digitalWrite(pin_2,HIGH);
    digitalWrite(pin_3,HIGH);
    digitalWrite(pin_4,HIGH);
    
    delay(main_delay);
    
    
}
