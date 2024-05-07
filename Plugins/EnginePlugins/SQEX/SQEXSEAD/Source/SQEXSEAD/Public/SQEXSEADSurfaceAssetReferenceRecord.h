#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=StringAssetReference -FallbackName=StringAssetReference
#include "SQEXSEADSurfaceAssetReferenceRecord.generated.h"

USTRUCT(BlueprintType)
struct SQEXSEAD_API FSQEXSEADSurfaceAssetReferenceRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    FName Name;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    FStringAssetReference AssetRefs[63];
    
    FSQEXSEADSurfaceAssetReferenceRecord();
};

