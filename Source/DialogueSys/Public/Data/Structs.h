#pragma once

#include "CoreMinimal.h"
#include "Structs.generated.h"


USTRUCT(BlueprintType)
struct FDialogueReply : public FTableRowBase
{
    GENERATED_BODY()

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FText Text;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FName NextDialogueRow;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool EndsDialogue;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool TriggersEvent;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FName EventActorTag;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FName EventID;

    // Constructor 
    FDialogueReply() : 
        Text(FText::GetEmpty()),
        NextDialogueRow(NAME_None),
        EndsDialogue(false),
        TriggersEvent(false),
        EventActorTag(NAME_None),
        EventID(NAME_None)
    {
    }

    FDialogueReply(FText Text, FName NextDialogueRow, bool EndsDialogue, bool TriggersEvent, FName EventActorTag, FName EventID) :
        Text(Text),
        NextDialogueRow(NextDialogueRow),
        EndsDialogue(EndsDialogue),
        TriggersEvent(TriggersEvent),
        EventActorTag(EventActorTag),
        EventID(EventID)
    {
    }
};

USTRUCT(BlueprintType)
struct FDialogue : public FTableRowBase
{
    GENERATED_BODY()

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FText Text;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FName NextDialogueRow;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool EndsDialogue;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FDialogueReply> Replies;

    // Constructor 
    FDialogue() :
        Text(FText::GetEmpty()),
        NextDialogueRow(NAME_None),
        EndsDialogue(false),
        Replies()
    {
    }

    FDialogue(FText Text, FName NextDialogueRow, bool EndsDialogue, TArray<FDialogueReply> Replies) :
        Text(Text),
        NextDialogueRow(NextDialogueRow),
        EndsDialogue(EndsDialogue),
        Replies(Replies)
    {
    }
};