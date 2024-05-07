#pragma once
#include "CoreMinimal.h"
#include "TresDamageInfo.h"
#include "GameFramework/Actor.h"
#include "TresAdhereObjBase.generated.h"

class UTresRootComponent;
class ATresCharPawnBase;
class UTresChrBaseParam;
class UTresChrDataTableSet;

UCLASS(Abstract, Blueprintable, HideDropdown, NotPlaceable)
class ATresAdhereObjBase : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresRootComponent* MyRoot;
    
protected:
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresCharPawnBase* m_pAttachPawn;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* m_pCauserActor;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* m_pCauserOwner;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTresChrBaseParam* m_pCauserBaseParam;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresChrDataTableSet* m_pCauserDataTableSet;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTresDamageInfo m_CauserDamageInfo;
    
public:
    ATresAdhereObjBase(const FObjectInitializer& ObjectInitializer);
};

