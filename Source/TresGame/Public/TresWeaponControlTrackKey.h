#pragma once
#include "CoreMinimal.h"
#include "TresWeaponControlTrackKey.generated.h"

USTRUCT(BlueprintType)
struct FTresWeaponControlTrackKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_Visible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_AppearEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AppearEffectPlayRate;
    
    TRESGAME_API FTresWeaponControlTrackKey();
};

