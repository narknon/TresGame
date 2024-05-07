#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpGroupInst.h"
#include "TresInterpGroupInstUpdateSettings.h"
#include "TresInterpGroupInst.generated.h"

UCLASS(Blueprintable)
class TRESGAME_API UTresInterpGroupInst : public UInterpGroupInst {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresInterpGroupInstUpdateSettings> m_UpdateSettings;
    
    UTresInterpGroupInst();
};

