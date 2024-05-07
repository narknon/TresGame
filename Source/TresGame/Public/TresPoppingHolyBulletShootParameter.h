#pragma once
#include "CoreMinimal.h"
#include "TresUInt8_Range.h"
#include "TresFloat32_RangeDegree.h"
#include "TresPoppingHolyProjectileOverrideParameters.h"
#include "TresPoppingHolyBulletShootParameter.generated.h"

USTRUCT(BlueprintType)
struct FTresPoppingHolyBulletShootParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresUInt8_Range m_HolyBulletShootNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresFloat32_RangeDegree m_HolyBulletSpreadRangeAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fHolyBulletShootYawAngleRandomOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsIgnoreKeyBladePitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresFloat32_RangeDegree m_HolyBulletShootRandomPitchRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsOverrideHolyProjectileParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresPoppingHolyProjectileOverrideParameters> m_HolyProjectileOverrideParameterList;
    
    TRESGAME_API FTresPoppingHolyBulletShootParameter();
};

