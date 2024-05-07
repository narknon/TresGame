#include "TresWinnieGameMode.h"

class ATresWinniePuzzleManager;

ATresWinniePuzzleManager* ATresWinnieGameMode::GetPuzzleManager() const {
    return NULL;
}

ATresWinnieGameMode::ATresWinnieGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PuzzleManagerRef = NULL;
    this->PuzzleGameRef = NULL;
    this->PlayerPawnRef = NULL;
    this->m_pPuzzleManager = NULL;
    this->m_pPlayerPawn = NULL;
}

