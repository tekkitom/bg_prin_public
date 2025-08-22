#include "association.h"

Association::Association() {
    for (int i = 0; i < maxCountMembersPatches; ++i) {
        members[i] = nullptr;
        patches[i] = nullptr;
    }
}
