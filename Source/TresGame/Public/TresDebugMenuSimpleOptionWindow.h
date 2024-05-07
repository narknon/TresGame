#pragma once
#include "CoreMinimal.h"
#include "TresDebugMenuContainer.h"
#include "TresDebugMenuSimpleOptionWindow.generated.h"

class UTresDebugMenuObject;

UCLASS(Blueprintable, NonTransient)
class UTresDebugMenuSimpleOptionWindow : public UTresDebugMenuContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresDebugMenuObject* m_BackGround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_CanCancel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_Message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_FirstOption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Cursor;
    
    UTresDebugMenuSimpleOptionWindow();
};

