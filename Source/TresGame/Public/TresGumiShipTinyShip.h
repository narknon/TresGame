#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipCharaPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "ETresGumiShipTinyShipFormation.h"
#include "TresGMInputResult.h"
#include "TresGumiShipTinyShip.generated.h"

class ATresGumiShipPlayerControllerBase;

UCLASS(Blueprintable)
class ATresGumiShipTinyShip : public ATresGumiShipCharaPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RollSpeedRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SideOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> OptionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAccel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxBrake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxNAccel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxNBrake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NearRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NearVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ResetDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ResetVelocity;
    
    ATresGumiShipTinyShip(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetFormations(ETresGumiShipTinyShipFormation Up, ETresGumiShipTinyShipFormation Right, ETresGumiShipTinyShipFormation Down, ETresGumiShipTinyShipFormation Left);
    
    UFUNCTION(BlueprintCallable)
    void ResetLocation();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPressLeftRight(const FTresGMInputResult& rResult, const ATresGumiShipPlayerControllerBase* pController);
    
    UFUNCTION(BlueprintCallable)
    void OnInputLStick(const FTresGMInputResult& rResult, const ATresGumiShipPlayerControllerBase* pController);
    
};

