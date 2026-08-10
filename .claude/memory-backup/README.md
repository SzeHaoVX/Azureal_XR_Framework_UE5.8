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

Copy every `.md` here — including `MEMORY.md`, which is the index loaded at the start of each session —
into the live path above, creating it if needed. Then start a session and confirm the memories come
back.

If the repo now sits somewhere else, the folder name changes to match: the full path, with `\` and `:`
replaced by `-`. `C:\Work\Azureal_XR_Framework_UE5.8` becomes `C--Work-Azureal-XR-Framework-UE5-8`.

## Keeping it current

This is a snapshot, not a live mirror — only as fresh as the last copy. Re-copy after any session that
adds or changes memories, and before any migration.

## What is NOT backed up here

Skills. They are not part of the memory folder and are not readable from disk at all — see
`.claude/skills/README.md` for what still needs rescuing.
