#include <stdio.h>
#include "esp_log.h"

void app_main() {
    // mejor ponemos cosas ue se entiendad
    int readBytes = 10;
    ESP_LOGD("INFO", "readBytes=%d", readBytes);
    //Pero mejor cambiamos el tipo de log
    readBytes++;
    ESP_LOGD("POSTINFO", "readBytes=%d", readBytes);


}