#pragma once
#include "CoreMinimal.h"
#include "ETresLevelEntityDisappearMode.h"
#include "TresLevelEntitySequenceAction.h"
#include "TresLevelEntitySequenceAction_Destroy.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TRESGAME_API UTresLevelEntitySequenceAction_Destroy : public UTresLevelEntitySequenceAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresLevelEntityDisappearMode> m_DisappearMode;
    
    UTresLevelEntitySequenceAction_Destroy();
};

