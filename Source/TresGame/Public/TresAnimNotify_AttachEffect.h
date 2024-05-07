#pragma once
#include "CoreMinimal.h"
#include "SQEX_AttachEffectNotifyDataToDataAsset.h"
#include "SQEX_AttachEffectNotifyDataToMetaAttachData.h"
#include "Animation/AnimNotifies/AnimNotify.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SQEX_AttachEffectNotifyDataToMetaAttachData -FallbackName=SQEX_AttachEffectNotifyDataToMetaAttachData
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SQEX_AttachEffectNotifyDataToDataAsset -FallbackName=SQEX_AttachEffectNotifyDataToDataAsset
#include "TresAnimNotify_AttachEffect.generated.h"

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UTresAnimNotify_AttachEffect : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSQEX_AttachEffectNotifyDataToMetaAttachData> MetaAttachDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSQEX_AttachEffectNotifyDataToDataAsset> AttachDataList;
    
    UTresAnimNotify_AttachEffect();
};

