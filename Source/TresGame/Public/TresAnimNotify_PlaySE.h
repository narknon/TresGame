#pragma once
#include "CoreMinimal.h"
#include "ETresSoundAliasUnitID.h"
#include "ETresSoundAliasLabel.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "TresAnimNotify_PlaySE.generated.h"

class USoundBase;

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UTresAnimNotify_PlaySE : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* m_SoundAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresSoundAliasLabel> m_SoundAliasID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresSoundAliasUnitID m_SoundAliasUnit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_VolumeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_PitchMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_SocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bFollow: 1;
    
public:
    UTresAnimNotify_PlaySE();
};

