#pragma once
#include "CoreMinimal.h"
#include "TresGimmickSkeletalBase.h"
#include "TresGimmickHeWorkShop.generated.h"

class UTresTaskExecuterBase;
class UTresInputTask;

UCLASS(Abstract, Blueprintable)
class ATresGimmickHeWorkShop : public ATresGimmickSkeletalBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresInputTask* InputTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresTaskExecuterBase* m_pTaskExecuter;
    
public:
    ATresGimmickHeWorkShop(const FObjectInitializer& ObjectInitializer);
};

