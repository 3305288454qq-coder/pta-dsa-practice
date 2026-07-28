# Git Workflow Notes

## The Four Places

```text
Working folder -> Staging area -> Local repository -> GitHub
     git add        git commit         git push
```

- **Working folder:** The files currently stored on the computer.
- **Staging area:** The changes selected for the next commit.
- **Local repository:** The commit history stored in the hidden `.git` folder.
- **GitHub:** The remote copy of the repository.

`Ctrl + S` only saves a file to the working folder. It does not create a Git
commit or upload anything to GitHub.

## One-Time Setup

Run this only once when creating a new repository:

```powershell
git init
```

`git init` creates the hidden `.git` directory. Do not run it every time code
is changed. Running it repeatedly in the same repository usually does not
delete anything, but it is unnecessary.

To check the GitHub remote:

```powershell
git remote -v
```

The usual remote name is `origin`.

## Normal Saving Workflow

### 1. Inspect the changes

```powershell
git status
```

This shows modified, untracked, and staged files.

### 2. Stage specific files

```powershell
git add programming-problems/prog03_reverse_three_digit.cpp
```

Using a specific path gives better control over what will be committed.

To stage every change under the current folder:

```powershell
git add .
```

Use `git add .` carefully because it can stage files that are unrelated to the
current exercise.

### 3. Check the staging area

```powershell
git status
git diff --cached --name-only
```

Every staged file will be included in the next commit.

### 4. Create a local commit

```powershell
git commit -m "Solve PTA programming problem 7-3"
```

- `commit` records the staged version locally.
- `-m` means that the commit message follows.
- The message should briefly describe the changes.

### 5. Upload the commit to GitHub

```powershell
git push
```

After the first successful `git push -u origin main`, plain `git push` is
normally enough.

### 6. Confirm the result

```powershell
git status
git log --oneline
```

A clean repository displays:

```text
nothing to commit, working tree clean
```

## Correcting a Staging Mistake

To remove a file from the staging area without deleting or changing the file:

```powershell
git restore --staged path/to/file.cpp
```

Then run `git status` again.

## Common Messages

### Nothing specified, nothing added

```powershell
git add
```

This command is incomplete because no path was supplied. Use a filename or:

```powershell
git add .
```

### LF will be replaced by CRLF

This is a Windows line-ending warning, not a compilation or Git failure. It
normally does not damage the code.

### Reinitialized existing Git repository

This means `git init` was run inside an existing repository. The history was
not saved again; Git only initialized the same repository again.

## Short Version

```powershell
git status
git add <file>
git status
git commit -m "Describe the change"
git push
```

Always inspect `git status` before `git commit`.
