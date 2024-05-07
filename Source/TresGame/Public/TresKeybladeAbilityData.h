#pragma once
#include "CoreMinimal.h"
#include "ETresTextAbilityKind.h"
#include "ETresCharWearForm.h"
#include "ETresWeaponForm.h"
#include "TresKeybladeFormAbilityData.h"
#include "TresKeybladeAbilityData.generated.h"

USTRUCT(BlueprintType)
struct FTresKeybladeAbilityData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ETresTextAbilityKind> m_ShootflowAbilitys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ETresCharWearForm> m_WearForms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ETresWeaponForm, FTresKeybladeFormAbilityData> m_FormAbilityMap;
    
    TRESGAME_API FTresKeybladeAbilityData();
};

