#pragma once
#include "CoreMinimal.h"
#include "EX354_ArtemaWarpShotSequence_ProjectileInfo.h"
#include "UObject/NoExportTypes.h"
#include "EX354_ArtemaWarpShotSequenceInfo.generated.h"

class AActor;
class ATresCharPawnBase;
class UCurveVector;

USTRUCT(BlueprintType)
struct FEX354_ArtemaWarpShotSequenceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEX354_ArtemaWarpShotSequence_ProjectileInfo> m_ProjectileInfoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fShotWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_vSpawnLoc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* m_SpawnLocCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_vAimLoc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* m_AimLocCurve;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresCharPawnBase* m_Owner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_Target;
    
public:
    TRESGAME_API FEX354_ArtemaWarpShotSequenceInfo();
};

