#pragma once
#include "CoreMinimal.h"
#include "EEX355_RushAwayTurnType.h"
#include "EEX355_RushAwayTurnDir.h"
#include "EX355_RushAwayTurnInfo.generated.h"

USTRUCT(BlueprintType)
struct FEX355_RushAwayTurnInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 iNotifyID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Comment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fTurnVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<EEX355_RushAwayTurnType> m_TurnType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<EEX355_RushAwayTurnDir> m_TurnDir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fTurnOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fTurnDirDivideAngle;
    
    TRESGAME_API FEX355_RushAwayTurnInfo();
};

