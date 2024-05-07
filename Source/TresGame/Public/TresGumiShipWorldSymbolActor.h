#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipGimmickActorBase.h"
#include "ETresWorldCode.h"
#include "ETresGumiShipWorldSymbolID.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "TresGumiShipWorldSymbolActor.generated.h"

class UStaticMeshComponent;
class USphereComponent;
class UPrimitiveComponent;
class UCameraComponent;
class AActor;

UCLASS(Blueprintable)
class ATresGumiShipWorldSymbolActor : public ATresGumiShipGimmickActorBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresGumiShipWorldSymbolID WorldMapID;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresWorldCode> WorldCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CameraOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* ApproachCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IconRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MistRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* Camera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsLocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsLockedByBoss;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* WorldIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* WorldMist;
    
    ATresGumiShipWorldSymbolActor(const FObjectInitializer& ObjectInitializer);
private:
    UFUNCTION(BlueprintCallable)
    void OnLeaveGoalVolume(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnHitGoalVolume(UPrimitiveComponent* pHitComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, FVector vNormalImpulse, const FHitResult& rHit);
    
    UFUNCTION(BlueprintCallable)
    void OnEnterGoalVolume(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnCancel();
    
public:
    UFUNCTION(BlueprintCallable)
    void LockWorldByBoss(bool LockEnable);
    
private:
    UFUNCTION(BlueprintCallable)
    void LockWorld(bool Locked);
    
public:
    UFUNCTION(BlueprintCallable)
    ETresGumiShipWorldSymbolID GetWorldMapID();
    
private:
    UFUNCTION(BlueprintCallable)
    bool CheckLanding();
    
};

