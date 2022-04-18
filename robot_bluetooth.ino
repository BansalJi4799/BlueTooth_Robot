int motorNo1 = 9;
int motorNo2 = 10;
int motorNo3 = 11;
int motorNo4 = 12;

char input;

void setup() 
{  
    pinMode(motorNo1, OUTPUT);  
    pinMode(motorNo2, OUTPUT); 
    pinMode(motorNo3, OUTPUT);  
    pinMode(motorNo4, OUTPUT);  
    Serial.begin(9600);
}

void loop()
{
    while (Serial.available() > 0)
    {
        input = Serial.read();
        Serial.println(input);
    }

    if (input == 'F') 
    {
        digitalWrite(motorNo1, HIGH);
        digitalWrite(motorNo2, LOW);
        digitalWrite(motorNo3, HIGH);
        digitalWrite(motorNo4, LOW);  
    }
    else if (input == 'B') 
    {
        digitalWrite(motorNo1, LOW);
        digitalWrite(motorNo2, HIGH);
        digitalWrite(motorNo3, LOW);
        digitalWrite(motorNo4, HIGH); 
    }
    else if (input == 'R') 
    {
        digitalWrite(motorNo1, HIGH);
        digitalWrite(motorNo2, LOW);
        digitalWrite(motorNo3, LOW);
        digitalWrite(motorNo4, LOW); 
    } 
    else if (input == 'L')
    {
        digitalWrite(motorNo1, LOW);
        digitalWrite(motorNo2, LOW);
        digitalWrite(motorNo3, HIGH);
        digitalWrite(motorNo4, LOW);
    } 
    else if (input == 'S') 
    {
        digitalWrite(motorNo1, LOW);
        digitalWrite(motorNo2, LOW);
        digitalWrite(motorNo3, LOW);
        digitalWrite(motorNo4, LOW); 
    }
    else if (input == 'J')
    {
        digitalWrite(motorNo1, LOW);
        digitalWrite(motorNo2, HIGH);
        digitalWrite(motorNo3, LOW);
        digitalWrite(motorNo4, LOW);
    }
    else if (input == 'I') 
    {
        digitalWrite(motorNo1, HIGH);
        digitalWrite(motorNo2, LOW);
        digitalWrite(motorNo3, LOW);
        digitalWrite(motorNo4, LOW);
    }
    else if (input == 'H') 
    {
        digitalWrite(motorNo1, LOW);
        digitalWrite(motorNo2, LOW);
        digitalWrite(motorNo3, LOW);
        digitalWrite(motorNo4, HIGH); 
    }
    else if (input == 'G') 
    {
        digitalWrite(motorNo1, LOW);
        digitalWrite(motorNo2, LOW);
        digitalWrite(motorNo3, HIGH);     
        digitalWrite(motorNo4, LOW);
    }
}
