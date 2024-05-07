#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresSpawnHandParam_e_ex702.h"
#include "TresAction1_e_ex702_SpawnTarHand.generated.h"

class UAnimSequenceBase;

UCLASS(Blueprintable, HideDropdown)
class UTresAction1_e_ex702_SpawnTarHand : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* m_AnimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresSpawnHandParam_e_ex702 m_HandSpawnParam;
    
public:
    UTresAction1_e_ex702_SpawnTarHand();
};

