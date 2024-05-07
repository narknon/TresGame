#pragma once
#include "CoreMinimal.h"
#include "SQEX_AttachEffectNotifyDataToDataAsset.h"
#include "SQEX_AttachEffectNotifyDataToMetaAttachData.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SQEX_AttachEffectNotifyDataToMetaAttachData -FallbackName=SQEX_AttachEffectNotifyDataToMetaAttachData
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SQEX_AttachEffectNotifyDataToDataAsset -FallbackName=SQEX_AttachEffectNotifyDataToDataAsset
#include "TresAnimNotifyState_AttachEffect.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI)
class UTresAnimNotifyState_AttachEffect : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSQEX_AttachEffectNotifyDataToMetaAttachData> MetaAttachDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSQEX_AttachEffectNotifyDataToDataAsset> AttachDataList;
    
    UTresAnimNotifyState_AttachEffect();
};

