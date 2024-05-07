#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackFloatBase.h"
#include "SQEXSEADInterpTrackCategoryVolumeFade.generated.h"

UCLASS(CollapseCategories)
class SQEXSEAD_API USQEXSEADInterpTrackCategoryVolumeFade : public UInterpTrackFloatBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    FName CategoryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TArray<FName> ExtendCategoryNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    float OnMatineeEndSetCategoryVolume;
    
    USQEXSEADInterpTrackCategoryVolumeFade();
};

