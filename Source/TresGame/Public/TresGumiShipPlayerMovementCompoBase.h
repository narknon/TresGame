#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipAnimMovementCompoBase.h"
#include "TresGMInputResult.h"
#include "TresGumiShipPlayerMovementCompoBase.generated.h"

class ATresGumiShipPlayerPawnBase;
class ATresGumiShipPlayerControllerDefault;
class ATresGumiShipPlayerControllerBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipPlayerMovementCompoBase : public UTresGumiShipAnimMovementCompoBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresGumiShipPlayerPawnBase* m_pPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresGumiShipPlayerControllerDefault* m_pController;
    
public:
    UTresGumiShipPlayerMovementCompoBase();
protected:
    UFUNCTION(BlueprintCallable)
    void _ReceiveInputRStick(float fX, float fY, const ATresGumiShipPlayerControllerBase* pController);
    
    UFUNCTION(BlueprintCallable)
    void _ReceiveInputLStickV2(const FTresGMInputResult& rResult, const ATresGumiShipPlayerControllerBase* pController);
    
    UFUNCTION(BlueprintCallable)
    void _ReceiveInputLStick(float fX, float fY, const ATresGumiShipPlayerControllerBase* pController);
    
};

