#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "TresChangeMeshMaterialParamData.h"
#include "TresAnimNotifyState_ChangeMeshMaterialParam.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI)
class UTresAnimNotifyState_ChangeMeshMaterialParam : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresChangeMeshMaterialParamData> m_Params;
    
public:
    UTresAnimNotifyState_ChangeMeshMaterialParam();
};

