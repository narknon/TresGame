#include "TresProj_MagicAero.h"

ATresProj_MagicAero::ATresProj_MagicAero(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_SwirlLimit = -1;
    this->m_AfterDamageKind = TRES_DMG_KIND_BLOW;
}

