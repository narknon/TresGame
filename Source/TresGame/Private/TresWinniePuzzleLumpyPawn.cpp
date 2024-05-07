#include "TresWinniePuzzleLumpyPawn.h"

ATresWinniePuzzleLumpyPawn::ATresWinniePuzzleLumpyPawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DecreaseMoveStartYFromLeft = 0.00f;
    this->DecreaseMoveEndYFromLeft = 0.00f;
    this->DecreaseMoveStartYFromRight = 0.00f;
    this->DecreaseMoveEndYFromRight = 0.00f;
    this->ReadyMoveEndY = 0.00f;
    this->DecreaseMoveSpeed = 0.00f;
}

