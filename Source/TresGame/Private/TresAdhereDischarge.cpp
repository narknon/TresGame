#include "TresAdhereDischarge.h"

ATresAdhereDischarge::ATresAdhereDischarge(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_pDataTableSet = NULL;
    this->m_CheckRange = 150.00f;
    this->m_GenerateClass = NULL;
}

