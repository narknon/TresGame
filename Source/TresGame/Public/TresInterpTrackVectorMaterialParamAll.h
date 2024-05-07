#pragma once
#include "CoreMinimal.h"
#include "TresInterpTrackVectorMaterialParam.h"
#include "TresInterpTrackVectorMaterialParamAll.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class TRESGAME_API UTresInterpTrackVectorMaterialParamAll : public UTresInterpTrackVectorMaterialParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_ComponentTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_IgnoreComponentTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IncludeChildActors;
    
    UTresInterpTrackVectorMaterialParamAll();
};

