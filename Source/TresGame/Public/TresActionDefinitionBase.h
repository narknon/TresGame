#pragma once
#include "CoreMinimal.h"
#include "TresStateBase.h"
#include "UObject/NoExportTypes.h"
#include "ETresStateID.h"
#include "TresActionDefinitionBase.generated.h"

class AActor;
class USceneComponent;

UCLASS(Blueprintable, NotPlaceable)
class UTresActionDefinitionBase : public UTresStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TWeakObjectPtr<AActor> m_Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_Destination;
    
    UPROPERTY(EditAnywhere, Export)
    TWeakObjectPtr<USceneComponent> m_LockonTarget;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TArray<TEnumAsByte<ETresStateID>> m_ViableStates;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_bActionAbortPermission: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_SubStep;
    
public:
    UTresActionDefinitionBase();
};

