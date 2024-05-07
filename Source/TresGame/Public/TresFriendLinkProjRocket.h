#pragma once
#include "CoreMinimal.h"
#include "TresProjectileSkeletalMeshBase.h"
#include "TresFriendLinkProjRocket.generated.h"

class UParticleSystem;
class AActor;

UCLASS(Abstract, Blueprintable)
class ATresFriendLinkProjRocket : public ATresProjectileSkeletalMeshBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fFadeOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_FadeOutEffData;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TWeakObjectPtr<AActor> m_pTargetPawn;
    
public:
    ATresFriendLinkProjRocket(const FObjectInitializer& ObjectInitializer);
};

