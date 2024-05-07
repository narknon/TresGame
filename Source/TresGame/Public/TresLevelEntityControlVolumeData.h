#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresLevelEntityControlVolumeData.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class TRESGAME_API UTresLevelEntityControlVolumeData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_Tag;
    
    UTresLevelEntityControlVolumeData();
};

