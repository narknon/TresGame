#pragma once
#include "CoreMinimal.h"
#include "MoveSlashTypes_e_ex367.h"
#include "UObject/NoExportTypes.h"
#include "TresE_EX367AvaterSlashParam.generated.h"

USTRUCT(BlueprintType)
struct FTresE_EX367AvaterSlashParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_IntervalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<MoveSlashTypes_e_ex367> m_MoveSlashType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MoveRot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_PopOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_UseOwnerLocation;
    
    TRESGAME_API FTresE_EX367AvaterSlashParam();
};

