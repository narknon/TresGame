#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresUICommandInfoBase.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class UTresUICommandInfoBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* m_Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* m_Component;
    
    UTresUICommandInfoBase();
};

