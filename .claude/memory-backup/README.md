# Memory backup

Version-controlled copy of this project's assistant memory.

## Why this exists

The live memory sits outside the repo, at:

```
C:\Users\<user>\.claude\projects\C--GitHub-Azureal-XR-Framework-UE5-8\memory\
```

That folder name is derived from **this repo's location on disk**, and none of it is in git. So the
memory is lost by any of: switching account, moving to another machine, or **renaming or moving this
directory** — the last one being the quiet failure, because the repo still works and only the memory
silently detaches.

These copies travel with the repo instead.

## Restoring

Run this once from the repo root:

```
powershell -ExecutionPolicy Bypass -File .\.claude\restore-memory.ps1
```

It works out the destination from wherever the repo now sits, creates it, and copies the files in. Add
`-WhatIfOnly` to preview, or `-Force` to overwrite memories already there.

To do it by hand instead, copy every `.md` here — **including `MEMORY.md`**, which is the index loaded
at the start of each session; without it the individual memories are never found — into the live path
above.

The folder name is the repo's full path with `:`, `\`, `_` **and** `.` all replaced by `-`. So
`C:\Work\Azureal_XR_Framework_UE5.8` becomes `C--Work-Azureal-XR-Framework-UE5-8`. Getting the
underscores or the dot wrong produces a folder that is never read, with no error.

## Keeping it current

This is a snapshot, not a live mirror — only as fresh as the last copy. Re-copy after any session that
adds or changes memories, and before any migration.

## What is NOT backed up here

Skills. They are not part of the memory folder and are not readable from disk at all — see
`.claude/skills/README.md` for what still needs rescuing.
