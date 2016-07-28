

#include <usb_keyboard.h>

// setting up columns, rows, and LEDs
int colOnePin = 12;
int colTwoPin = 11;
int colThreePin = 10;
int colFourPin = 9;

int rowOnePin = 0;
int rowTwoPin = 1;
int rowThreePin = 2;
int rowFourPin = 3;
int rowFivePin = 4;

int ledOnePin = 13;
int ledTwoPin = 14;
int ledThreePin = 15;
int ledFourPin = 16;
int ledFivePin = 17;

// set up modifier keys
boolean acute;
boolean grave;
boolean circumflex;
boolean umlaut;
boolean caps = false;


void setup()
{
  //setup LED states
  pinMode(ledOnePin, OUTPUT);
  digitalWrite(ledOnePin, LOW);
  pinMode(ledTwoPin, OUTPUT);
  digitalWrite(ledTwoPin, LOW);
  pinMode(ledThreePin, OUTPUT);
  digitalWrite(ledThreePin, LOW);
  pinMode(ledFourPin, OUTPUT);
  digitalWrite(ledFourPin, LOW);
  pinMode(ledFivePin, OUTPUT);
  digitalWrite(ledFivePin, LOW);
  //setup rows/ columns
  pinMode(colOnePin, INPUT_PULLDOWN);
  pinMode(colTwoPin, INPUT_PULLDOWN);
  pinMode(colThreePin, INPUT_PULLDOWN);
  pinMode(colFourPin, INPUT_PULLDOWN);

  pinMode(rowOnePin, INPUT_PULLDOWN);
  pinMode(rowTwoPin, INPUT_PULLDOWN);
  pinMode(rowThreePin, INPUT_PULLDOWN);
  pinMode(rowFourPin, INPUT_PULLDOWN);
  pinMode(rowFivePin, INPUT_PULLDOWN);

}

void loop()
{
  //set pin combos for keys
  boolean acuteSwitch = pinCheck(rowOnePin, colOnePin);
  boolean graveSwitch = pinCheck(rowTwoPin, colOnePin);
  boolean circumSwitch = pinCheck(rowThreePin, colOnePin);
  boolean umlautSwitch = pinCheck(rowFourPin, colOnePin);
  boolean capsSwitch = pinCheck(rowFivePin, colOnePin);
  boolean aKey = pinCheck(rowOnePin, colTwoPin);
  boolean eKey = pinCheck(rowTwoPin, colTwoPin);
  boolean iKey = pinCheck(rowThreePin, colTwoPin);
  boolean oKey = pinCheck(rowFourPin, colTwoPin);
  boolean uKey = pinCheck(rowFivePin, colTwoPin);
  boolean quKey = pinCheck(rowOnePin, colThreePin);
  boolean exKey = pinCheck(rowTwoPin, colThreePin);
  boolean cdKey = pinCheck(rowThreePin, colThreePin);
  boolean neKey = pinCheck(rowFourPin, colThreePin);
  boolean bsKey = pinCheck(rowFivePin, colThreePin);
  boolean euKey = pinCheck(rowOnePin, colFourPin);
  boolean aeKey = pinCheck(rowTwoPin, colFourPin);
  boolean oeKey = pinCheck(rowThreePin, colFourPin);
  boolean aoKey = pinCheck(rowFourPin, colFourPin);
  boolean acKey = pinCheck(rowFivePin, colFourPin);
  /* boolean testKey = pinCheck(rowFourPin, colFourPin); */
  // boolean m = pinCheck(bluePin, whitePin);
  /*  if(testKey == true){
      keySeq(0,2,2,5);

      } */
  if (acuteSwitch == true) {
    pinsOff();
    acute = true;
    digitalWrite(ledOnePin, HIGH);
  }
  if (graveSwitch == true) {
    pinsOff();
    grave = true;
    digitalWrite(ledTwoPin, HIGH);
  }
  if (circumSwitch == true) {
    pinsOff();
    circumflex = true;
    digitalWrite(ledThreePin, HIGH);
  }
  if (umlautSwitch == true) {
    pinsOff();
    umlaut = true;
    digitalWrite(ledFourPin, HIGH);
  }
  if (capsSwitch == true) {
  delay(200);
    caps = caps ? false : true;
  }
  if (caps == true) {
    
    digitalWrite(ledFivePin, HIGH);
  } else {
    
    digitalWrite(ledFivePin, LOW);
  }



  
  if (caps == false) {
    if (acute == true)
    {
      if (aKey == true) {
        keySeq(0, 2, 2, 5);
      }
      if (eKey == true) {
        keySeq(0, 2, 3, 3);
      }
      if (iKey == true) {
        keySeq(0, 2, 3, 7);
      }
      if (oKey == true) {
        keySeq(0, 2, 4, 3);
      }
      if (uKey == true) {
        keySeq(0, 2, 5, 0);
      }
    }

    if (grave == true)
    {
      if (aKey == true) {
        keySeq(0, 2, 2, 4);
      }
      if (eKey == true) {
        keySeq(0, 2, 3, 2);
      }
      if (iKey == true) {
        keySeq(0, 2, 3, 6);
      }
      if (oKey == true) {
        keySeq(0, 2, 4, 2);
      }
      if (uKey == true) {
        keySeq(0, 2, 4, 9);
      }

    }
    if (circumflex == true)
    {
      if (aKey == true) {
        keySeq(0, 2, 2, 6);
      }
      if (eKey == true) {
        keySeq(0, 2, 3, 4);
      }
      if (iKey == true) {
        keySeq(0, 2, 3, 8);
      }
      if (oKey == true) {
        keySeq(0, 2, 4, 4);
      }
      if (uKey == true) {
        keySeq(0, 2, 5, 1);
      }

    }
    if (umlaut == true)
    {
      if (aKey == true) {
        keySeq(0, 2, 2, 8);
      }
      if (eKey == true) {
        keySeq(0, 2, 3, 5);
      }
      if (iKey == true) {
        keySeq(0, 2, 3, 9);
      }
      if (oKey == true) {
        keySeq(0, 2, 4, 6);
      }
      if (uKey == true) {
        keySeq(0, 2, 5, 2);
      }
    }
    if (neKey == true) {
      keySeq(0, 2, 4, 1);
    }

    if (aeKey == true) {
      keySeq(0, 2, 3, 0);
    }
    if (oeKey == true) {
      keySeq(0, 1, 5, 6);
    }

    if (cdKey == true) {
      keySeq(0, 2, 3, 1);
    }

    if (bsKey == true) {
      keySeq(0, 2, 2, 3);
    }
    if (quKey == true) {
      keySeq(0, 1, 9, 1);
    }
    if (exKey == true) {
      keySeq(0, 1, 6, 1);
    }
    if (aoKey == true) {
      keySeq(0, 1, 3, 9);
    }
    if (acKey == true) {
      keySeq(0, 1, 5, 5);
    }
    if (euKey == true){
      keySeq(0,1,2,8);
      }
  }


  
  if(caps ==true){
    if (acute == true)
    {
      if (aKey == true) {
        keySeq(0, 1, 9, 3);
      }
      if (eKey == true) {
        keySeq(0, 2, 0, 1);
      }
      if (iKey == true) {
        keySeq(0, 2, 0, 5);
      }
      if (oKey == true) {
        keySeq(0, 2, 1, 1);
      }
      if (uKey == true) {
        keySeq(0, 2, 1, 8);
      }
    }

    if (grave == true)
    {
      if (aKey == true) {
        keySeq(0, 1, 9, 2);
      }
      if (eKey == true) {
        keySeq(0, 2, 0, 0);
      }
      if (iKey == true) {
        keySeq(0, 2, 0, 4);
      }
      if (oKey == true) {
        keySeq(0, 2, 1, 0);
      }
      if (uKey == true) {
        keySeq(0, 2, 1, 7);
      }

    }
    if (circumflex == true)
    {
      if (aKey == true) {
        keySeq(0, 1, 9, 4);
      }
      if (eKey == true) {
        keySeq(0, 2, 0, 2);
      }
      if (iKey == true) {
        keySeq(0, 2, 0, 6);
      }
      if (oKey == true) {
        keySeq(0, 2, 1, 2);
      }
      if (uKey == true) {
        keySeq(0, 2, 1, 9);
      }

    }
    if (umlaut == true)
    {
      if (aKey == true) {
        keySeq(0, 1, 9, 6);
      }
      if (eKey == true) {
        keySeq(0, 2, 0, 3);
      }
      if (iKey == true) {
        keySeq(0, 2, 0, 7);
      }
      if (oKey == true) {
        keySeq(0, 2, 1, 4);
      }
      if (uKey == true) {
        keySeq(0, 2, 2, 0);
      }
    }
    if (neKey == true) {
      keySeq(0, 2, 0, 9);
    }

    if (aeKey == true) {
      keySeq(0, 1, 9, 8);
    }
    if (oeKey == true) {
      keySeq(0, 1, 4, 0);
    }

    if (cdKey == true) {
      keySeq(0, 1, 9, 9);
    }

    if (bsKey == true) {
      keySeq(0, 2, 2, 3);
    }
    if (quKey == true) {
      keySeq(0, 1, 9, 1);
    }
    if (exKey == true) {
      keySeq(0, 1, 6, 1);
    }
    if (aoKey == true) {
      keySeq(0, 1, 7, 1);
    }
    if (acKey == true) {
      keySeq(0, 1, 8, 7);
    }
    if (euKey == true){
      keySeq(0,1,2,8);
      }
    
    }
}

boolean pinCheck(int row, int col)
{

  pinMode(col, OUTPUT);
  digitalWrite(col, HIGH);
  boolean result;
  if (digitalRead(row) == HIGH)
  {
    result = true;
  }
  else
  {
    result = false;
  }


  pinMode(col, INPUT_PULLDOWN);
  return result;
}
void pinsOff() {
  grave = false;
  acute = false;
  circumflex = false;
  umlaut = false;
  digitalWrite(ledOnePin, LOW);
  digitalWrite(ledTwoPin, LOW);
  digitalWrite(ledThreePin, LOW);
  digitalWrite(ledFourPin, LOW);
  digitalWrite(ledFivePin, LOW);


}
void keySeq(int a, int b, int c, int d) {
  uint8_t one;
  if (a == 0)
  {
    one = KEYPAD_0;
  }
  if (a == 1)
  {
    one = KEYPAD_1;
  }
  if (a == 2)
  {
    one = KEYPAD_2;
  }
  if (a == 3)
  {
    one = KEYPAD_3;
  }
  if (a == 4)
  {
    one = KEYPAD_4;
  }
  if (a == 5)
  {
    one = KEYPAD_5;
  }
  if (a == 6)
  {
    one = KEYPAD_6;
  }
  if (a == 7)
  {
    one = KEYPAD_7;
  }
  if (a == 8)
  {
    one = KEYPAD_8;
  }
  if (a == 9)
  {
    one = KEYPAD_9;
  }
   uint8_t two;
   if (b == 0)
  {
    two = KEYPAD_0;
  }
  if (b == 1)
  {
    two = KEYPAD_1;
  }
  if (b == 2)
  {
    two = KEYPAD_2;
  }
  if (b == 3)
  {
    two = KEYPAD_3;
  }
  if (b == 4)
  {
    two = KEYPAD_4;
  }
  if (b == 5)
  {
    two = KEYPAD_5;
  }
  if (b == 6)
  {
    two = KEYPAD_6;
  }
  if (b == 7)
  {
    two = KEYPAD_7;
  }
  if (b == 8)
  {
    two = KEYPAD_8;
  }
  if (b == 9)
  {
    two = KEYPAD_9;
  }
  uint8_t three;
  if (c == 0)
  {
    three = KEYPAD_0;
  }
  if (c == 1)
  {
    three = KEYPAD_1;
  }
  if (c == 2)
  {
    three = KEYPAD_2;
  }
  if (c == 3)
  {
    three = KEYPAD_3;
  }
  if (c == 4)
  {
    three = KEYPAD_4;
  }
  if (c == 5)
  {
    three = KEYPAD_5;
  }
  if (c == 6)
  {
    three = KEYPAD_6;
  }
  if (c == 7)
  {
    three = KEYPAD_7;
  }
  if (c == 8)
  {
    three = KEYPAD_8;
  }
  if (c == 9)
  {
    three = KEYPAD_9;
  }
  uint8_t four;
   if (d == 0)
  {
    four = KEYPAD_0;
  }
  if (d == 1)
  {
    four = KEYPAD_1;
  }
  if (d == 2)
  {
    four = KEYPAD_2;
  }
  if (d == 3)
  {
    four = KEYPAD_3;
  }
  if (d == 4)
  {
    four = KEYPAD_4;
  }
  if (d == 5)
  {
    four = KEYPAD_5;
  }
  if (d == 6)
  {
    four = KEYPAD_6;
  }
  if (d == 7)
  {
    four = KEYPAD_7;
  }
  if (d == 8)
  {
    four = KEYPAD_8;
  }
  if (d == 9)
  {
    four = KEYPAD_9;
  }
 /* uint8_t one = keyChoice(a);

  uint8_t two = keyChoice(b);

  uint8_t three = keyChoice(c);

  uint8_t four = keyChoice(d);
*/
  delay(200);
  Keyboard.set_modifier(MODIFIERKEY_ALT);
  Keyboard.send_now();

  Keyboard.set_key1(one);
  Keyboard.send_now();
  Keyboard.set_key1(0);
  Keyboard.send_now();
  Keyboard.set_key1(two);
  Keyboard.send_now();
  Keyboard.set_key1(0);
  Keyboard.send_now();
  Keyboard.set_key1(three);
  Keyboard.send_now();
  Keyboard.set_key1(0);
  Keyboard.send_now();
  Keyboard.set_key1(four);
  Keyboard.send_now();
  Keyboard.set_modifier(0);
  Keyboard.set_key1(0);
  Keyboard.send_now();


}
uint8_t keyChoice(int digit) {
  uint8_t choice;
  if (digit == 0)
  {
    choice = KEYPAD_0;
  }
  if (digit == 1)
  {
    choice = KEYPAD_1;
  }
  if (digit == 2)
  {
    choice = KEYPAD_2;
  }
  if (digit == 3)
  {
    choice = KEYPAD_3;
  }
  if (digit == 4)
  {
    choice = KEYPAD_4;
  }
  if (digit == 5)
  {
    choice = KEYPAD_5;
  }
  if (digit == 6)
  {
    choice = KEYPAD_6;
  }
  if (digit == 7)
  {
    choice = KEYPAD_7;
  }
  if (digit == 8)
  {
    choice = KEYPAD_8;
  }
  if (digit == 9)
  {
    choice = KEYPAD_9;
  }
}

