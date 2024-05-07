#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresE_EX781_GunShotMarkerPatternParam.h"
#include "GameFramework/Actor.h"
#include "TresGenerator_e_ex781_GunShotMarker.generated.h"

class ATresPawnBase;
class ATresProjectileBase;
class ATresEnemyPawn_e_ex781_GunShotMarker;

UCLASS(Blueprintable)
class ATresGenerator_e_ex781_GunShotMarker : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresE_EX781_GunShotMarkerPatternParam> m_GunShotMarkerPatternParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresPawnBase> m_GunShotMarkerObjectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectileBase> m_BulletProjectile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresPawnBase> m_GunShotMarkerEXObjectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectileBase> m_BulletEXProjectile;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TWeakObjectPtr<AActor> m_MyTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresEnemyPawn_e_ex781_GunShotMarker* m_EndBeam;
    
public:
    ATresGenerator_e_ex781_GunShotMarker(const FObjectInitializer& ObjectInitializer);
};

