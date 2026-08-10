---
name: framework-repo-is-home-for-all-notes
description: "Every skill, memory and experiment note goes in the Azureal_XR_Framework_UE5.8 repo - never in TNB, Westport or any other test project"
metadata: 
  node_type: memory
  type: feedback
  originSessionId: 476fe6fc-eae3-4d83-89c0-c52b396e6559
  modified: 2026-08-10T03:52:00.772Z
---

`C:\GitHub\Azureal_XR_Framework_UE5.8` is the **main development framework** and the single home for
every skill, memory file and experiment write-up. Put them there **always**, regardless of whether the
work was implemented — an unimplemented experiment is still worth recording, because it may be
confirmed for production later.

Other projects — `TNB-Module2-Version3`, Westport, Mechadium, any future module — are **temporary test
beds**. Code experiments may live and run there, but **never store skills or notes in them.**

**Why:** stated directly on 2026-08-10. The framework is the product; the module projects are
disposable copies used to try things out. Notes left in a test project vanish with it.

**How to apply:**
- Skills → `.claude/skills/<name>/SKILL.md` in the framework repo (git-tracked, survives migration).
- Memory → the live memory folder, and mirror into `.claude/memory-backup/` in the framework repo,
  since the live folder sits outside git and is keyed to the repo's path on disk.
- Record an experiment even when it is parked or unimplemented, and say plainly **where the code
  actually lives** — e.g. [[azr-explain-text-reveal]] and [[azr-savegame-experiment]] both run in the
  TNB sandbox while their notes live here. That pointer is the whole value; a test project can be
  wiped or reverted without warning, as the framework copy of the Explain work already was.
- Do not raise the "this repo is client-facing" concern again for notes of this kind. It was raised on
  2026-08-10 and overruled: this is the intended home for them. See
  [[no-claude-attribution-in-repo]], which still applies to commits, code and product docs.
