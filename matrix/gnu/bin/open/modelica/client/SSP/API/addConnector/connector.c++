#include <string.h>
#include <stdlib.h>

#if 0

typedef enum {
    OMS_STATUS_SUCCESS = 0,
    OMS_STATUS_ERROR = 1,
    OMS_STATUS_NOT_FOUND = 2,
    OMS_STATUS_INVALID_PARAMS = 3
} oms_status_enu_t;

typedef enum {
    OMS_CAUSALITY_SEND = 0,
    OMS_CAUSALITY_RECEIVE = 1
} oms_causality_enu_t;


typedef enum {
    OMS_SIGNAL_TYPE_EVENT = 0,
    OMS_SIGNAL_TYPE_COMMAND = 1
} oms_signal_type_enu_t;


typedef struct {
    const char* cref;
    oms_causality_enu_t causality;
    oms_signal_type_enu_t type;
} oms_connector_t;


oms_status_enu_t oms_initialize();


oms_status_enu_t oms_finalize();

void oms_status_enu_t oms_addConnector(const char* cref, oms_causality_enu_t causality,
oms_signal_type_enu_t type);


oms_status_enu_t oms_removeConnector(const char* cref);


oms_status_enu_t oms_updateConnector(const char* cref, oms_causality_enu_t causality,
oms_signal_type_enu_t type);


oms_status_enu_t oms_getConnector(const char* cref, oms_causality_enu_t* causality,
oms_signal_type_enu_t* type);


oms_status_enu_t oms_getConnectorsByCausality(oms_causality_enu_t causality,
oms_signal_type_enu_t type, oms_connector_t** connectors, size_t* count);


oms_status_enu_t oms_getConnectorsBySignalType(oms_signal_type_enu_t type,
oms_causality_enu_t causality, oms_connector_t** connectors, size_t* count);


oms_status_enu_t oms_getConnectorsByReference(const char* cref,
oms_connector_t** connectors, size_t* count);


oms_status_enu_t oms_getConnectorsByTarget(const char* target,
oms_connector_t** connectors, size_t* count);


oms_status_enu_t oms_getConnectorsBySource(const char* source,
oms_connector_t** connectors, size_t* count);


oms_status_enu_t oms_getConnectorsByProperty(const char* property,
oms_connector_t** connectors, size_t* count);


oms_status_enu_t oms_getConnectorsByKind(const char* kind,
oms_connector_t** connectors, size_t* count);


oms_status_enu_t oms_getConnectorsByKindAndRole(const char* kind, const char* role,
oms_connector_t** connectors, size_t* count);


oms_status_enu_t oms_getConnectorsByKindAndProperty(const char* kind,
const char* property, oms_connector_t** connectors, size_t* count);


oms_status_enu_t oms_getConnectorsByKindAndKindAndRole(const char* kind1,
const char* kind2, const char* role, oms_connector_t** connectors, size_t* count);


oms_status_enu_t oms_getConnectorsByKindAndKindAndProperty(const char* kind1,
const char* kind2, const char* property, oms_connector_t** connectors,
size_t* count);


oms_status_enu_t oms_getConnectorsByKindAndKindAndKindAndRole(const char* kind1,
const char* kind2, const char* kind3, const char* role,
oms_connector_t** connectors, size_t* count);


oms_status_enu_t oms_getConnectorsByKindAndKindAndKindAndProperty(const char* kind1,
const char* kind2, const char* kind3, const char* property,
oms_connector_t** connectors, size_t* count);


void main() {
    oms_connector_t* connectors = NULL;
    size_t count = 0;

    oms_addConnector("ref1", OMS_CAUSALITY_SEND, OMS_SIGNAL_TYPE_EVENT);
    oms_addConnector("ref2", OMS_CAUSALITY_RECEIVE, OMS_SIGNAL_TYPE_EVENT);
    oms_addConnector("ref3", OMS_CAUSALITY_SEND, OMS_SIGNAL_TYPE_MESSAGE);

    oms_getConnectorsByCausality(OMS_CAUSALITY_SEND, OMS_SIGNAL_TYPE_EVENT, &connectors, &count);
    printf("Connectors by causality and signal type:\n");
    for (size_t i = 0; i < count; ++i) {
        printf("%s\n", connectors[i].reference);
    }

    oms_getConnectorsBy    
}

#endif