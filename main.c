#include <stdio.h>
#include <pico/stdlib.h>

// LEDs
#define PIN_LED1 (23)
#define PIN_LED2 (24)

#define LED_BUILTIN PIN_LED2

int main()
{
  stdio_init_all();
  int i = 0;
  const uint LED_PIN = LED_BUILTIN;
  gpio_init(LED_PIN);
  gpio_set_dir(LED_PIN, GPIO_OUT);

  while (true)
  {

    printf("Hello, world: %d\n", i++);
    sleep_ms(5000);

    gpio_put(LED_PIN, 1);
    sleep_ms(1000);
    gpio_put(LED_PIN, 0);
  }
  return 0;
}
