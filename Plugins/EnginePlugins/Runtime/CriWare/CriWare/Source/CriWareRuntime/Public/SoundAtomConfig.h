#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SoundAtomConfig.generated.h"

UCLASS()
class CRIWARERUNTIME_API USoundAtomConfig : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    FString AcfFilePath;
    
    USoundAtomConfig();
};

