#pragma once
#include "CoreMinimal.h"
#include "TresGimmickSkeletalBase.h"
#include "TresGimmickDitherFadeInterface.h"
#include "TresGimmickPrizeGimmickSkeletalBase.generated.h"

UCLASS(Abstract, Blueprintable, Config=Game)
class ATresGimmickPrizeGimmickSkeletalBase : public ATresGimmickSkeletalBase, public ITresGimmickDitherFadeInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_GimmickClipDitherParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsGimmickClipDitherParamInvert;
    
    ATresGimmickPrizeGimmickSkeletalBase(const FObjectInitializer& ObjectInitializer);
    
    // Fix for true pure virtual functions not being implemented
};

