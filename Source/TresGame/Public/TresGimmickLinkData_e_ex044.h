#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresGimmickLinkData_e_ex044.generated.h"

class AActor;

UCLASS(Blueprintable)
class UTresGimmickLinkData_e_ex044 : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> m_GimmickArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> m_GimmickArray2;
    
    UTresGimmickLinkData_e_ex044();
};

