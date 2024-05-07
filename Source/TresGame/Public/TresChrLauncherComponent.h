#pragma once
#include "CoreMinimal.h"
#include "TresChrLauncherComponentBase.h"
#include "Engine/EngineTypes.h"
#include "TresCollShapeAssetUnit.h"
#include "TresChrLauncherComponent.generated.h"

class UPrimitiveComponent;
class UBodySetup;
class AActor;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresChrLauncherComponent : public UTresChrLauncherComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresCollShapeAssetUnit> m_CollisionShapesSrc;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBodySetup* m_pBodySetup;
    
public:
    UTresChrLauncherComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void OnBodyEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnBodyBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

