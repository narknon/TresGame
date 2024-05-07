#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresSoKcKeyHoleConnectNode.h"
#include "TresSoKcKeyHoleGimmickActor.generated.h"

class UTresBodyCollPrimitive;
class USceneComponent;
class UParticleSystem;
class UTresBodyCollComponent;

UCLASS(Abstract, Blueprintable)
class ATresSoKcKeyHoleGimmickActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* KeyHoleRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* KeyHoleBeamAttachPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresBodyCollPrimitive* KeyHoleBodyCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresBodyCollPrimitive* ChanceMarkerBodyCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresBodyCollComponent* TresBodyCollisionComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pConnectBeamEffectAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pKeyHoleFocusEffectAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pKeyHoleConnectEffectAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pChanceMarkerConnectEffectAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<UParticleSystem*> m_ChanceMarkerEffectAssetList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pBigChanceMarkerEffectAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pBigChanceMarkerConnectEffectAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bExcludeChanceMarkerCandidate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresSoKcKeyHoleConnectNode> m_ConnectableKeyHoleList;
    
public:
    ATresSoKcKeyHoleGimmickActor(const FObjectInitializer& ObjectInitializer);
};

