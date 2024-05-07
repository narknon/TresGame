#pragma once
#include "CoreMinimal.h"
#include "TresLevelEntitySequenceAction.h"
#include "TresLevelEntitySequenceAction_LevelEvent.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TRESGAME_API UTresLevelEntitySequenceAction_LevelEvent : public UTresLevelEntitySequenceAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_EventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_EntityTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Param;
    
    UTresLevelEntitySequenceAction_LevelEvent();
};

