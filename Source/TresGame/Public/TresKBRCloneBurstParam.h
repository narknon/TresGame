#pragma once
#include "CoreMinimal.h"
#include "KBRCloneBurstTypes_e_ex360.h"
#include "UObject/NoExportTypes.h"
#include "TresKBRCloneBurstParam.generated.h"

USTRUCT(BlueprintType)
struct FTresKBRCloneBurstParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ShotTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ShotDirYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ShotDirPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ShadowMoveDirYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<KBRCloneBurstTypes_e_ex360> m_AttackType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_IntervalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_ShotDist;
    
    TRESGAME_API FTresKBRCloneBurstParam();
};

