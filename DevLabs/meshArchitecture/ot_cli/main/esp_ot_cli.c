#include <stdio.h>
#include "esp_openthread.h"
#include "esp_openthread_cli.h"
#include "esp_openthread_lock.h"
#include "esp_openthread_netif_glue.h"
#include "esp_openthread_types.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "nvs_flash.h" // Importante para guardar credenciales de red

void app_main(void)
{
    // 1. Inicializar almacenamiento no volátil (NVS)
    // Esto es vital en Mesh para que el nodo recuerde la red si se reinicia.
    esp_err_t ret = nvs_flash_init();
    if (ret == ESP_ERR_NVS_NO_FREE_PAGES || ret == ESP_ERR_NVS_NEW_VERSION_FOUND) {
        ESP_ERROR_CHECK(nvs_flash_erase());
        ret = nvs_flash_init();
    }
    ESP_ERROR_CHECK(ret);

    // 2. Configuración de la plataforma OpenThread (Radio 802.15.4)
    esp_openthread_platform_config_t config = {
        .radio_config = ESP_OPENTHREAD_DEFAULT_RADIO_CONFIG(),
        .host_config = ESP_OPENTHREAD_DEFAULT_HOST_CONFIG(),
        .port_config = ESP_OPENTHREAD_DEFAULT_PORT_CONFIG(),
    };

    // 3. Inicializar el stack de OpenThread
    ESP_ERROR_CHECK(esp_openthread_init(&config));

    // 4. Inicializar la interfaz de red (Netif) para que el SO entienda los paquetes
    esp_netif_config_t netif_config = ESP_NETIF_DEFAULT_OPENTHREAD();
    esp_netif_t *openthread_netif = esp_netif_new(&netif_config);
    esp_openthread_netif_glue_init(openthread_netif);

    // 5. Lanzar el bucle principal de OpenThread (Launch)
    // Esto habilita la CLI (Línea de comandos) para que controlemos la malla.
    esp_openthread_cli_create();
    esp_openthread_cli_init();

    // Loop principal de ejecución
    esp_openthread_launch_mainloop();

    // Limpieza (nunca se llega aquí en este ejemplo infinito)
    esp_openthread_netif_glue_deinit();
    esp_netif_destroy(openthread_netif);
    vTaskDelete(NULL);
}