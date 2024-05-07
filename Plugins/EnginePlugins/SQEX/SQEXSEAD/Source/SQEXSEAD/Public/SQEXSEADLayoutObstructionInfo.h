#pragma once
#include "CoreMinimal.h"
#include "ESQEXSEADLayoutObstructionType.h"
#include "UObject/NoExportTypes.h"
#include "SQEXSEADLayoutObstructionInfo.generated.h"

class AStaticMeshActor;

USTRUCT(BlueprintType)
struct FSQEXSEADLayoutObstructionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ESQEXSEADLayoutObstructionType::Type> ObstructionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TArray<FVector> ObstructionPointLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TArray<AStaticMeshActor*> LinkedMeshActorList;
    
    SQEXSEAD_API FSQEXSEADLayoutObstructionInfo();
};

