#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "TresHitActor_e_he90x_Setup.h"
#include "TresHitActor_e_he90x.generated.h"

class UTresStaticMeshComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable, HideDropdown)
class ATresHitActor_e_he90x : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresStaticMeshComponent* m_MyCollMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* m_MyOverlapMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresHitActor_e_he90x_Setup m_CollisionSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bEnablePlayerTickCheck;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bDebugCollDisabled;
    
public:
    ATresHitActor_e_he90x(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCollSize(float InRadius, float inHeight);
    
    UFUNCTION(BlueprintCallable)
    void SetCollisionEnabled(bool inSet, float inHeight, float InRadius, FVector inCenterOffset);
    
    UFUNCTION(BlueprintCallable)
    void OnEndOverlap(AActor* inOtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlap(AActor* inOtherActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCollisionEnabled() const;
    
};

