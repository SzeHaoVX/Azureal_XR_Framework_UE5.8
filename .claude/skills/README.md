# Project skills

**Every Azureal skill belongs in this folder.** This is the main repo, so anything here is version
controlled and travels with a `git clone` — to a new machine, a new account, or a new team member.

A skill kept only in the app is invisible to git. It cannot be reviewed, cannot be rolled back, and is
lost if the account changes. That is what this folder exists to prevent.

## Layout

One folder per skill, each containing a `SKILL.md`:

```
.claude/skills/
  azurealxr-interactables/
    SKILL.md
  <next-skill>/
    SKILL.md
```

## SKILL.md shape

```markdown
---
name: azurealxr-interactables
description: >
  When to reach for this skill. Written so it can be matched against a request -
  name the concrete triggers (asset types, task phrasing, tools involved), not just the topic.
---

<the instructions>
```

## Still to migrate

`azurealxr-interactables` is **not yet in this folder**. It currently lives outside the repo, so it is
the one piece of project knowledge that a migration would drop. To rescue it: open the skill in an
editor session, copy its full body, and save it as `azurealxr-interactables/SKILL.md` here.

Its description on record:

> Use for ANY AzurealXR interaction or chapter-authoring work — building interactables (Azr_Grab /
> Grab-Attach / Grab-Remove / Grab-Trigger / Azr_Latch / Azr_Touch / Azr_Gaze / Azr_Explain /
> Azr_Action / Azr_Label), setting up the Azureal_CSM curriculum (Module / DA_Chapter / BP_CSM /
> WBP_MainMenu), or turning an instruction sheet from the writer into built blueprints. Covers the
> Azr_Interactable component pattern, InteractID linking, Enable/Disable events, the sheet token
> vocabulary, and driving the editor live through the UnrealClaude MCP. All 11 flows validated
> end-to-end.

Note that this description still says "Westport UE 5.7 project". This repo is the UE 5.8 framework and
is now the main one, so that line wants updating when the skill is saved here.
