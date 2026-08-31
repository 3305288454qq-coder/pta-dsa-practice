# 在新对话中继续编程练习

这个项目使用两份文件保存学习习惯和进度：

- 根目录的 `AGENTS.md`：长期有效的教学规则。
- `notes/learning_progress.md`：当前题号、最近文件和未完成事项。

## 新建对话后怎么说

在这个项目中创建新对话后，可以直接发送：

> 请先读取项目里的 AGENTS.md 和 notes/learning_progress.md，告诉我上次练习到哪里，然后按照里面的教学规则继续下一小步。不要直接给我完整答案。

一般情况下，Codex会自动读取项目根目录的 `AGENTS.md`。上面这句话仍然适合作为检查：它能确认新对话也读取了动态变化的学习进度。

## 我们约定的练习方式

1. 我先阅读并理解题目、输入、输出和边界情况。
2. 新题只创建基础文件，不提前写完整答案。
3. 由你先写代码；没有思路时，我逐级增加提示。
4. 你说 `inspect` 后，我读取已保存文件、编译并测试。
5. 我同时检查逻辑、PTA格式、边界、变量名和代码风格。
6. 通常由你根据说明亲自修改，除非你明确要求我直接修改。
7. 题目真正完成后，更新 `notes/learning_progress.md`。

## 对话太长时怎么办

不用依赖旧对话继续增长。完成当前题目后更新进度文件，然后直接在同一个项目中新建对话。新对话通过这几份文件恢复规则和进度。

## Git保存

这些说明也是仓库文件。把它们提交并推送到GitHub后，重新克隆仓库或换电脑时仍会保留：

```powershell
git add AGENTS.md notes/learning_progress.md notes/using_codex_for_practice.md
git commit -m "Add persistent programming practice guidance"
git push
```

- `git add`：把指定文件加入本次准备提交的暂存区。
- `git commit -m`：在本地保存一个带说明的版本。
- `git push`：把本地提交上传到GitHub远程仓库。
