#pragma once
#include "CoreMinimal.h"
#include "TresGimmickCA_TreeBase.h"
#include "ETresDropItemID.h"
#include "UObject/NoExportTypes.h"
#include "TresGimmickCA_TreeA.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresGimmickCA_TreeA : public ATresGimmickCA_TreeBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresDropItemID m_prizeKind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> m_SeedLocations;
    
public:
    ATresGimmickCA_TreeA(const FObjectInitializer& ObjectInitializer);
};

