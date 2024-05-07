#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrack.h"
#include "SQEXSEADAutoSeControlTrackKey.h"
#include "SQEXSEADInterpTrackAutoSeControl.generated.h"

UCLASS(CollapseCategories)
class SQEXSEAD_API USQEXSEADInterpTrackAutoSeControl : public UInterpTrack {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<FSQEXSEADAutoSeControlTrackKey> Keys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    FName OverrideGroupName;
    
    USQEXSEADInterpTrackAutoSeControl();
};

