#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresTheaterController.generated.h"

class UTresTheaterData;
class UTresUIManager;
class UTresUIP_Theater;

UCLASS(Blueprintable)
class UTresTheaterController : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIManager* m_UIManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIP_Theater* m_Theater;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresTheaterData* m_TheaterData;
    
public:
    UTresTheaterController();
};

