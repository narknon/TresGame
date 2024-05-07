#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ETresEnemyEx761_Location.h"
#include "TresHomeLocationActor_e_ex761.generated.h"

UCLASS(Blueprintable)
class ATresHomeLocationActor_e_ex761 : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresEnemyEx761_Location::Type> m_LocationType;
    
public:
    ATresHomeLocationActor_e_ex761(const FObjectInitializer& ObjectInitializer);
};

