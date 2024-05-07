#pragma once
#include "CoreMinimal.h"
#include "ETresSoundAliasUnit.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "ETresSoundAliasLabel_WeaponSwing.h"
#include "TresAnimNotify_PlayWeaponSwingSE.generated.h"

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UTresAnimNotify_PlayWeaponSwingSE : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresSoundAliasLabel_WeaponSwing::Type> m_SoundAliasID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresSoundAliasUnit::Type> m_SoundAliasUnit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_VolumeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_PitchMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_SocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bFollow: 1;
    
public:
    UTresAnimNotify_PlayWeaponSwingSE();
};

