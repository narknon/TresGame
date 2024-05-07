#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "Engine/EngineTypes.h"
#include "TresGumiShipMapsetVolume.generated.h"

class UPrimitiveComponent;
class UTresMapSet;
class AActor;

UCLASS(Blueprintable)
class TRESGAME_API ATresGumiShipMapsetVolume : public AVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresMapSet* MapSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName commandName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlockLoad;
    
public:
    ATresGumiShipMapsetVolume(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void _OnEnterActivateVolume(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

