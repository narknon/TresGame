#pragma once
#include "CoreMinimal.h"
#include "ETresEnemyEx721HandID.h"
#include "TresThornWavingDummyMeshAttachInfo.generated.h"

USTRUCT(BlueprintType)
struct FTresThornWavingDummyMeshAttachInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresEnemyEx721HandID m_HandID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_AttachName;
    
    TRESGAME_API FTresThornWavingDummyMeshAttachInfo();
};

