#include <device.h>
#include <toolchain.h>

/* 1 : /soc/peripheral@50000000/clock@5000:
 * Direct Dependencies:
 *   - (/soc/interrupt-controller@e000e100)
 *   - (/soc/peripheral@50000000)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_peripheral_50000000_S_clock_5000[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 2 : /soc/peripheral@50000000/gpio@842500:
 * Direct Dependencies:
 *   - (/soc/peripheral@50000000)
 * Supported:
 *   - (/npm1100_force_pwm_mode)
 *   - /regulator-3v3-ctrl
 *   - /sensor-pwr-ctrl
 *   - (/vbatt)
 *   - (/nrf-gpio-forwarder/fem-gpio-if)
 *   - /soc/peripheral@50000000/spi@c000
 *   - (/soc/peripheral@50000000/spi@c000/spi-dev-adxl362@0)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_peripheral_50000000_S_gpio_842500[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, 7, 8, 6, DEVICE_HANDLE_ENDS };

/* 3 : /soc/peripheral@50000000/gpio@842800:
 * Direct Dependencies:
 *   - (/soc/peripheral@50000000)
 * Supported:
 *   - (/buttons/button_0)
 *   - (/buttons/button_1)
 *   - (/leds/led_1)
 *   - (/leds/led_2)
 *   - (/leds/led_3)
 *   - (/nrf-gpio-forwarder/fem-gpio-if)
 *   - /soc/peripheral@50000000/spi@c000
 *   - (/soc/peripheral@50000000/i2c@9000/bh1749@38)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_peripheral_50000000_S_gpio_842800[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, 6, DEVICE_HANDLE_ENDS };

/* 4 : /soc/peripheral@50000000/uart@8000:
 * Direct Dependencies:
 *   - (/pin-controller/uart0_default)
 *   - (/pin-controller/uart0_sleep)
 *   - (/soc/interrupt-controller@e000e100)
 *   - (/soc/peripheral@50000000)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_peripheral_50000000_S_uart_8000[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 5 : /soc/peripheral@50000000/i2c@9000:
 * Direct Dependencies:
 *   - (/pin-controller/i2c1_default)
 *   - (/pin-controller/i2c1_sleep)
 *   - (/soc/interrupt-controller@e000e100)
 *   - (/soc/peripheral@50000000)
 * Supported:
 *   - (/soc/peripheral@50000000/i2c@9000/bh1749@38)
 *   - (/soc/peripheral@50000000/i2c@9000/bmm150@10)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_peripheral_50000000_S_i2c_9000[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 6 : /soc/peripheral@50000000/spi@c000:
 * Direct Dependencies:
 *   - (/pin-controller/spi3_default)
 *   - (/pin-controller/spi3_sleep)
 *   - (/soc/interrupt-controller@e000e100)
 *   - (/soc/peripheral@50000000)
 *   - /soc/peripheral@50000000/gpio@842500
 *   - /soc/peripheral@50000000/gpio@842800
 * Supported:
 *   - (/soc/peripheral@50000000/spi@c000/fem_spi@2)
 *   - (/soc/peripheral@50000000/spi@c000/spi-dev-adxl362@0)
 *   - (/soc/peripheral@50000000/spi@c000/spi-dev-bmi270@1)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_peripheral_50000000_S_spi_c000[] = { 3, 2, DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 7 : /sensor-pwr-ctrl:
 * Direct Dependencies:
 *   - (/)
 *   - /soc/peripheral@50000000/gpio@842500
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_sensor_pwr_ctrl[] = { 2, DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 8 : /regulator-3v3-ctrl:
 * Direct Dependencies:
 *   - (/)
 *   - /soc/peripheral@50000000/gpio@842500
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_regulator_3v3_ctrl[] = { 2, DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };
