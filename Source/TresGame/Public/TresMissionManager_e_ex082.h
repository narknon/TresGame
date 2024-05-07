#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresMissionManager_e_ex082.generated.h"

class UTresMissionManagerParam_e_ex082;

UCLASS(Blueprintable)
class ATresMissionManager_e_ex082 : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresMissionManagerParam_e_ex082* m_Param;
    
public:
    ATresMissionManager_e_ex082(const FObjectInitializer& ObjectInitializer);
};

