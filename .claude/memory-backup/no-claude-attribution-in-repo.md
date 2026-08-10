---
name: no-claude-attribution-in-repo
description: Never put Claude/Anthropic attribution in this repo — no Co-Authored-By trailers, no "Generated with Claude Code", no AI mentions in commits, code or docs
metadata:
  node_type: memory
  type: feedback
  originSessionId: a1abb5c2-2ea6-458c-b89c-14fa5a41670e
  modified: 2026-07-28T12:52:29.661Z
---

**Never add Claude/Anthropic attribution to anything in this repo.** No `Co-Authored-By: Claude ... <noreply@anthropic.com>` trailer on commits, no "🤖 Generated with [Claude Code]" in commit bodies or PR descriptions, and no Claude/AI mentions in code comments, docs or asset names. Write commit messages as the user's own work. This overrides the default Claude Code commit/PR trailer conventions.

**Why:** stated directly on 2026-07-28 — "please remove the Co-Authored-By ... from my repo. from now on i dont want anything claude or anthropic mention in my repo." This is a client-facing commercial product (Virtual X Sdn Bhd's Azureal XR Framework), so authorship signals matter to them.

**How to apply:** when committing, omit the trailer entirely. Already-enforced retroactively: on 2026-07-28 all 10 commits were rewritten with `git filter-branch --msg-filter` to strip the trailer and force-pushed (`--force-with-lease`) to `origin/main`; file contents were unchanged (verified by an empty tree diff). If a trailer ever reappears, strip it the same way. Note two Claude-named things deliberately LEFT in place because removing them would break tooling — `CLAUDE.md` (the repo rulebook, name is the Claude Code convention) and the third-party `Plugins/UnrealClaude/` MCP plugin + `.mcp.json`; the user was told about these and can decide separately. Related: [[azurealxr-editor-tooling]].
