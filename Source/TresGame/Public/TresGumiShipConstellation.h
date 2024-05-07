#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipGimmickActorBase.h"
#include "TresGumiShipConstellation.generated.h"

class UTresGumiShipConstellationMarkerComponent;
class USceneComponent;

UCLASS(Abstract, Blueprintable)
class ATresGumiShipConstellation : public ATresGumiShipGimmickActorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresGumiShipConstellationMarkerComponent* Marker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* OutLinesRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* StarsRoot;
    
    ATresGumiShipConstellation(const FObjectInitializer& ObjectInitializer);
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMarkerChanged(bool flg);
    
};

