#pragma once
#include "CoreMinimal.h"
#include "TresEventPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "TresMimicryPawnBase.generated.h"

UCLASS(Abstract, Blueprintable)
class TRESGAME_API ATresMimicryPawnBase : public ATresEventPawnBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_OffsetLocation;
    
public:
    ATresMimicryPawnBase(const FObjectInitializer& ObjectInitializer);
};

