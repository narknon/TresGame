#pragma once
#include "CoreMinimal.h"
#include "TresInterpTrackFloatMaterialParam.h"
#include "TresInterpTrackFloatMaterialParamAll.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class TRESGAME_API UTresInterpTrackFloatMaterialParamAll : public UTresInterpTrackFloatMaterialParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_ComponentTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_IgnoreComponentTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IncludeChildActors;
    
    UTresInterpTrackFloatMaterialParamAll();
};

