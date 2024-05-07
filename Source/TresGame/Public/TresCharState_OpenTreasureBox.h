#pragma once
#include "CoreMinimal.h"
#include "TresStateBase.h"
#include "TresCharState_OpenTreasureBox.generated.h"

class ATresTreasureBox;
class ATresCameraAnim;

UCLASS(Blueprintable)
class UTresCharState_OpenTreasureBox : public UTresStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresTreasureBox* m_pTreasureBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresCameraAnim* m_Camera;
    
    UTresCharState_OpenTreasureBox();
};

