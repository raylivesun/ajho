#include <string.h>
#include <stdio.h>

#if 0

typedef enum {
    OMS_SUCCESS = 0,
    OMS_ERROR_INVALID_INPUT = 1,
    OMS_ERROR_MEMORY_ALLOCATION = 2,
    OMS_ERROR_INTERNAL = 3,
    OMS_ERROR_INVALID_CONFIG = 4,
    OMS_ERROR_INVALID_COMMAND = 5,
    OMS_ERROR_INVALID_FILE = 6,
    OMS_ERROR_INVALID_FORMAT = 7,
    OMS_ERROR_INVALID_VERSION = 8,
    OMS_ERROR_INVALID_DATA = 9,
    OMS_ERROR_INVALID_INDEX = 10,
    OMS_ERROR_INVALID_RANGE = 11,
    OMS_ERROR_INVALID_TYPE = 12,
    OMS_ERROR_INVALID_VALUE = 13,
    OMS_ERROR_INVALID_SUBCOMMAND = 14,
};

/// @brief 
/// @param filename 
/// @return 
void oms_status_enu_t oms_RunFile(const char* filename){
    return void oms_status_enu_t();
}
void ms_status_enu_t oms_activateVariant(const char* crefA, const char* crefB);
void oms_status_enu_t oms_addBus(const char* cref);

void oms_status_enu_t oms_RunFile(const char *filename)
{
    return void oms_status_enu_t();
}


void oms_status_enu_t oms_activateVariant(const char *crefA, const char *crefB)
{
    return void oms_status_enu_t();
}


void oms_status_enu_t oms_addBus(const char *cref) {
    return void oms_status_enu_t();
}

int main() {
    oms_status_enu_t result = oms_RunFile("config.oms");
    printf("oms_RunFile returned %d\n", result);

    oms_activateVariant("variantA", "variantB");
    result = oms_RunFile("config.oms");
    printf("oms_RunFile returned %d\n", result);

    oms_addBus("busA");
    result = oms_RunFile("config.oms");
    printf("oms_RunFile returned %d\n", result);

    return 0;
}
#endif
