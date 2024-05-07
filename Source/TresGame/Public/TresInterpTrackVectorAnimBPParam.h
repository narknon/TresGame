#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Matinee/InterpTrackVectorBase.h"
#include "TresInterpTrackVectorAnimBPParam.generated.h"

class UAnimInstance;

UCLASS(Blueprintable, CollapseCategories)
class TRESGAME_API UTresInterpTrackVectorAnimBPParam : public UInterpTrackVectorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> AnimClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAsRotator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRestoreWhenTerminate;
    
    UTresInterpTrackVectorAnimBPParam();
};

