#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EBigTornadoProjPos.h"
#include "BigTornadoProjInfo.generated.h"

class ATresProjectileBase;

USTRUCT(BlueprintType)
struct FBigTornadoProjInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<EBigTornadoProjPos> m_ProjPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fProjPosRadiusDeviation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fProjAngleDeviation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ATresProjectileBase>> m_ProjectileClassArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iMaxShotCount;
    
    TRESGAME_API FBigTornadoProjInfo();
};

