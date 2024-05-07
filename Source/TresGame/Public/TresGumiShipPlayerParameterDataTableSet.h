#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/DataAsset.h"
#include "TresGumiShipPlayerParameterDataTableSet.generated.h"

class UDataTable;
class UTresPlayerStateEvent;
class ATresCameraHoldCamera;
class UForceFeedbackEffect;

UCLASS(Blueprintable)
class UTresGumiShipPlayerParameterDataTableSet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_pBaseParameterDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_pStrikeGumiDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UTresPlayerStateEvent>> m_PlayerStateEventCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresCameraHoldCamera> m_SmartphoneCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* m_pForceFeedBackForGameOver;
    
    UTresGumiShipPlayerParameterDataTableSet();
};

