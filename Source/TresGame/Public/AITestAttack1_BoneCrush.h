#pragma once
#include "CoreMinimal.h"
#include "AITestAttack_Base.h"
#include "UObject/NoExportTypes.h"
#include "AITestAttack1_BoneCrush.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UAITestAttack1_BoneCrush : public UAITestAttack_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_BombRotPitchMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_BombRotPitchMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> m_BombPos;
    
    UAITestAttack1_BoneCrush();
};

