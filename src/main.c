#include <zephyr/kernel.h>

#include <zephyr/logging/log.h>
LOG_MODULE_REGISTER(main, CONFIG_MAIN_LOG_LEVEL);

int main(void)
{
  LOG_INF("Hello, world!");

  return 0;
}
