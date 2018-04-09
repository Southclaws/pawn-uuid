#define RUN_TESTS

#include <a_samp>
#include <YSI\y_testing>

#include "../../uuid.inc"

main() {
    new uuid[UUID_LEN];
    UUID(uuid, UUID_LEN);
    printf("UUID: '%s'", uuid);
}
