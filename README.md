# Ejemplo de Conexión WiFi y Cliente MQTT con ESP32 (Arduino)

Este repositorio contiene un ejemplo de código para ESP32 utilizando Arduino, cuyo objetivo principal es:

1. Conectarse a una red WiFi local usando un SSID y contraseña definidos.
2. Una vez conectado, se llama a una función para iniciar un cliente MQTT (por ahora es una función de ejemplo).
3. Parpadea un LED como actividad principal dentro del `loop()`.

---

## 📡 Conexión a WiFi

El código utiliza la biblioteca `WiFi.h` para conectarse como estación (`WIFI_STA`) a una red inalámbrica. Por defecto, el SSID y la contraseña están definidos como:

```cpp
#define WIFI_SSID   "esp322025"
#define WIFI_PASS   "esp322025"
