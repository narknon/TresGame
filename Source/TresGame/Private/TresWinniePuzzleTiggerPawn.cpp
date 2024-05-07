#include "TresWinniePuzzleTiggerPawn.h"

ATresWinniePuzzleTiggerPawn::ATresWinniePuzzleTiggerPawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EntryJumpMoveSpeed = 0.00f;
    this->EntryJumpHeight = 0.00f;
    this->ReadyLandingRotateRate = 0.00f;
    this->SuperJumpStartRotateRate = 0.00f;
    this->SuperJumpMoveSpeed = 0.00f;
    this->UnitsMoveStartJudgementDistance = 0.00f;
    this->PlayBoundAnimationJudgementDistance = 0.00f;
}

