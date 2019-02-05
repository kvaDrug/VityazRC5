#include <IRLibRecv.h>
#include <IRLibDecodeBase.h>
#include <IRLib_P03_RC5.h>

IRrecv receiver(/*pin*/2);
IRdecodeRC5 decoder;

const uint32_t commandStart = 0x000020; // 6th bit from the end
const uint32_t commandMask = 0x00003f; // the last 6 bits

void setup() {
  Serial.begin(9600);
  receiver.enableIRIn();
}

void loop() {
  if (receiver.getResults()) {
    decoder.decode();
    Serial.print(decoder.value, BIN);
    Serial.print(F(" command: "));

    uint32_t command = decoder.value & commandMask;

    // Print command in a fancy way with padding zeroes
    for (uint32_t mask = commandStart; mask >= 1; mask >>= 1) {
      uint32_t bitVal = command & mask;
      Serial.print(bitVal > 0 ? '1' : '0');
    }
    Serial.print('\t');

    Serial.print(command, HEX);
    Serial.print('\t');
    Serial.print(command, DEC);
    Serial.println();
    receiver.enableIRIn(); 
  }
}
