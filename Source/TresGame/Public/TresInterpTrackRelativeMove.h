#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackMove.h"
#include "TresInterpTrackRelativeMove.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class TRESGAME_API UTresInterpTrackRelativeMove : public UInterpTrackMove {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_ParentGroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_BoneSocketName;
    
    UTresInterpTrackRelativeMove();
};

