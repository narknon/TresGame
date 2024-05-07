#pragma once
#include "CoreMinimal.h"
#include "TresCoopDefinitionBase.h"
#include "TresCoop1_e_ex311_CombinationAttack.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresCoop1_e_ex311_CombinationAttack : public UTresCoopDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_EntryRadius;
    
public:
    UTresCoop1_e_ex311_CombinationAttack();
};

