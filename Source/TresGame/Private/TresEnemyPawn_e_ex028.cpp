#include "TresEnemyPawn_e_ex028.h"

bool ATresEnemyPawn_e_ex028::isBodyColor(TEnumAsByte<ETresEnemy_e_ex028_BodyColor> Color) {
    return false;
}

ATresEnemyPawn_e_ex028::ATresEnemyPawn_e_ex028(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_pro_DefaultBodyColor = ETresEnemy_e_ex028_BodyColor_Rainbow;
}

