#pragma once
#include "CoreMinimal.h"
#include "TresLevelEntityActorData.h"
#include "TresLevelEntityActorData_Tags.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TRESGAME_API UTresLevelEntityActorData_Tags : public UTresLevelEntityActorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_KeepRuntimeValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_Tags;
    
    UTresLevelEntityActorData_Tags();
};

