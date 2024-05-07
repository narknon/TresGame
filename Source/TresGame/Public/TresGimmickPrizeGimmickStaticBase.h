#pragma once
#include "CoreMinimal.h"
#include "TresGimmickStaticBase.h"
#include "TresGimmickDitherFadeInterface.h"
#include "TresGimmickPrizeGimmickStaticBase.generated.h"

UCLASS(Abstract, Blueprintable, Config=Game)
class ATresGimmickPrizeGimmickStaticBase : public ATresGimmickStaticBase, public ITresGimmickDitherFadeInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_GimmickClipDitherParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsGimmickClipDitherParamInvert;
    
    ATresGimmickPrizeGimmickStaticBase(const FObjectInitializer& ObjectInitializer);
    
    // Fix for true pure virtual functions not being implemented
};

