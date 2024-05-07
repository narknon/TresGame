#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "SQEX_BonamikChangingParameter.h"
#include "TresAnimNotify_Bonamik_ChangeGroupParams.generated.h"

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UTresAnimNotify_Bonamik_ChangeGroupParams : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSQEX_BonamikChangingParameter> m_GroupParams;
    
    UTresAnimNotify_Bonamik_ChangeGroupParams();
};

