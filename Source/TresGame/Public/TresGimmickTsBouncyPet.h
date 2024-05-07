#pragma once
#include "CoreMinimal.h"
#include "TresGimmickLauncher.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "TresGimmickTsBouncyPet.generated.h"

class USphereComponent;
class UStaticMeshComponent;
class USceneComponent;
class UTresHopComponent;
class UPrimitiveComponent;
class AActor;

UCLASS(Blueprintable)
class ATresGimmickTsBouncyPet : public ATresGimmickLauncher {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* SideCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* SphereBlockWorldUnique;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* CancelComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* EnableSensor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresHopComponent* TresHop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableSideCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SimulatePhysics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableHop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AreaEnableOutside;
    
public:
    ATresGimmickTsBouncyPet(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetBouncyVisible(bool Visible);
    
    UFUNCTION(BlueprintCallable)
    void SetBouncyEnable(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void SetActingBouncy(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void ReplaceBouncy();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSensorEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnSensorBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInvisibleBouncy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAreaTimeOut() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetSensorLocation() const;
    
};

