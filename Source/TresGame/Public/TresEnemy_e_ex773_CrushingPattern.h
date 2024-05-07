#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "TresEnemy_e_ex773_CrushingPattern.generated.h"

USTRUCT(BlueprintType)
struct FTresEnemy_e_ex773_CrushingPattern {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_Comment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey m_Keys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_pro_CrushingParamNoArray;
    
    TRESGAME_API FTresEnemy_e_ex773_CrushingPattern();
};

