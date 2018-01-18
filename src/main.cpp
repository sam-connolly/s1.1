#include <mbed.h>

DigitalOut red(PTB22);
DigitalOut blue(PTB21);
DigitalOut green(PTE26);

void on()
{
  red.write(1);
  blue.write(1);
  green.write(1);
}

void off()
{
  red.write(0);
  blue.write(0);
  green.write(0);
}

int main() {

    while(1) {
      off();
      wait(0.5);

      on();
      wait(0.5);
    }
  }
