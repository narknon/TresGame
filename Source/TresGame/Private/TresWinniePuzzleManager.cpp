#include "TresWinniePuzzleManager.h"

class ATresWinniePuzzleWallVolume;
class ATresWinniePuzzleBase;
class ATresWinniePlayerController;

void ATresWinniePuzzleManager::StoreWallVolume(TArray<ATresWinniePuzzleWallVolume*> volumes) {
}

WinniePuzzleType ATresWinniePuzzleManager::GetPuzzleType() const {
    return WinniePuzzleType::Vegetable;
}

ATresWinniePuzzleBase* ATresWinniePuzzleManager::GetPuzzle() const {
    return NULL;
}

ATresWinniePlayerController* ATresWinniePuzzleManager::GetController() const {
    return NULL;
}

ATresWinniePuzzleManager::ATresWinniePuzzleManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DataRef = NULL;
    this->m_pPuzzle = NULL;
}

