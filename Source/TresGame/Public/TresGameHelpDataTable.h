#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETresUIDataVersion.h"
#include "ETresGameHelp.h"
#include "ETresGameHelpCategory.h"
#include "GameHelpItemPage.h"
#include "TresGameHelpDataTable.generated.h"

USTRUCT(BlueprintType)
struct FTresGameHelpDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresGameHelp ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresGameHelpCategory Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameHelpItemPage> Pages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UIPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TitleNamespaceKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresUIDataVersion Version;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool WinImageUseKeyboardMouse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool WinKeyboardHighlights;
    
    TRESGAME_API FTresGameHelpDataTable();
};

