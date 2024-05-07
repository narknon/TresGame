#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresPhilharmonicController.generated.h"

class UTresUIManager;
class UTresUIP_Philharmonic;
class UDataTable;

UCLASS(Blueprintable)
class UTresPhilharmonicController : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIManager* m_UIManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIP_Philharmonic* m_Philharmonic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* m_PhilharmonicData;
    
public:
    UTresPhilharmonicController();
};

