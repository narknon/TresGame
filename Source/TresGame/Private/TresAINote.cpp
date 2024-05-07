#include "TresAINote.h"

ATresAINote::ATresAINote(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_ActionType = ETresAIAction::Move;
    this->m_Action = NULL;
    this->m_bAction = false;
}

