#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "TresSequentialExecDataTable.h"
#include "Engine/DataTable.h"
#include "TresSequentialTaskLogInterface.generated.h"

class AActor;

UINTERFACE(Blueprintable)
class UTresSequentialTaskLogInterface : public UInterface {
    GENERATED_BODY()
};

class ITresSequentialTaskLogInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool LogOutputTaskFinished(const FTresSequentialExecDataTable DataTable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool LogOutputSequenceFinished(const FTresSequentialExecDataTable DataTable, const FDataTableRowHandle RowData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool LogOutputQueryFinished(const FTresSequentialExecDataTable DataTable, const FDataTableRowHandle RowData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool LogOutputProcessFinished(const FTresSequentialExecDataTable DataTable, const FDataTableRowHandle RowData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool LogOutputExecuteSequence(const FTresSequentialExecDataTable DataTable, const FDataTableRowHandle RowData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool LogOutputDecoratorSuccess(const AActor* MyPawn, const FTresSequentialExecDataTable DataTable, const FDataTableRowHandle RowData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool LogOutputDecoratorFailed(const AActor* MyPawn, const FTresSequentialExecDataTable DataTable, const FDataTableRowHandle RowData);
    
};

