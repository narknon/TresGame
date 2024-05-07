#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackFloatBase.h"
#include "TresInterpTrackWindScaleOfAllBonamikWindActors.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class TRESGAME_API UTresInterpTrackWindScaleOfAllBonamikWindActors : public UInterpTrackFloatBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_IgnoreComponentTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_Restore;
    
    UTresInterpTrackWindScaleOfAllBonamikWindActors();
};

