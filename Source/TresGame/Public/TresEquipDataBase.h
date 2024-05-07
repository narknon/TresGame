#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresEquipDataBase.generated.h"

class USQEX_ParticleAttachDataAsset;

UCLASS(Abstract, Blueprintable, NotPlaceable)
class TRESGAME_API UTresEquipDataBase : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEX_ParticleAttachDataAsset* m_CmnFormChangeChargeEffect;
    
public:
    UTresEquipDataBase();
};

