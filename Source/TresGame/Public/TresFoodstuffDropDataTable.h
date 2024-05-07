#pragma once
#include "CoreMinimal.h"
#include "ETresItemDefFoodstuff.h"
#include "Engine/DataTable.h"
#include "ETresFoodstuffDropperID.h"
#include "TresFoodstuffDropDataTable.generated.h"

USTRUCT(BlueprintType)
struct FTresFoodstuffDropDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    int8 m_GenRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresFoodstuffDropperID m_BPType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresItemDefFoodstuff m_Drop1ItemID;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    int8 m_Drop1Num;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    int8 m_Drop1Rate;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    int8 m_Drop1Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresItemDefFoodstuff m_Drop2ItemID;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    int8 m_Drop2Num;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    int8 m_Drop2Rate;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    int8 m_Drop2Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresItemDefFoodstuff m_Drop3ItemID;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    int8 m_Drop3Num;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    int8 m_Drop3Rate;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    int8 m_Drop3Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresItemDefFoodstuff m_Drop4ItemID;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    int8 m_Drop4Num;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    int8 m_Drop4Rate;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    int8 m_Drop4Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresItemDefFoodstuff m_Drop5ItemID;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    int8 m_Drop5Num;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    int8 m_Drop5Rate;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    int8 m_Drop5Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresItemDefFoodstuff m_Drop6ItemID;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    int8 m_Drop6Num;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    int8 m_Drop6Rate;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    int8 m_Drop6Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresItemDefFoodstuff m_Drop7ItemID;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    int8 m_Drop7Num;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    int8 m_Drop7Rate;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    int8 m_Drop7Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresItemDefFoodstuff m_Drop8ItemID;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    int8 m_Drop8Num;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    int8 m_Drop8Rate;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    int8 m_Drop8Level;
    
    TRESGAME_API FTresFoodstuffDropDataTable();
};

