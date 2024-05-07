#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackVisibility.h"
#include "TresInterpTrackVisibility.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class TRESGAME_API UTresInterpTrackVisibility : public UInterpTrackVisibility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_ComponentTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IncludeChildActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_UseHiddenInGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_DisableRestore;
    
    UTresInterpTrackVisibility();
};

