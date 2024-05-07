#pragma once
#include "CoreMinimal.h"
#include "TresWeaponBase.h"
#include "TresWeaponKeybladeBase.generated.h"

UCLASS(Blueprintable)
class ATresWeaponKeybladeBase : public ATresWeaponBase {
    GENERATED_BODY()
public:
    ATresWeaponKeybladeBase(const FObjectInitializer& ObjectInitializer);
};

