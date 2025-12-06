# Copilot 使用说明（仓库级）

目的：帮助 AI 编码代理快速进入此仓库并做出安全、可验证的更改。

仓库快照
- 当前路径：仓库根含目录 `P1/`（当前为空或仅含练习文件）。
- 分支：`main` 已初始化并跟踪 `origin/main`（初始空提交已创建）。

必须的第一步（对任何修改前）
- 列出文件与分支状态：
  ```bash
  git status
  git branch --show-current
  git remote -v
  git ls-files
  ```
- 搜索构建/配置文件（用以判断项目类型）：
  ```bash
  # 查找常见 C++ 构建文件
  find . -maxdepth 3 -type f \( -name CMakeLists.txt -o -name Makefile -o -name "*.cpp" -o -name "*.h" \)
  ```

如何发现“架构/工作流”
- 若存在 `CMakeLists.txt`：按 CMake 项目处理（见下面的构建命令）。
- 若存在 `Makefile`：使用 `make` 和 `make test`（若定义）。
- 若仅为散落的 `.cpp/.h`：按单文件或小型库处理，优先保持现有目录结构（不要自行重构目录，除非得到确认）。

常用构建/运行命令（按检测到的构建系统选择）
- CMake:
  ```bash
  mkdir -p build && cd build
  cmake .. -DCMAKE_BUILD_TYPE=Release
  cmake --build . -- -j$(nproc)
  ```
- Makefile:
  ```bash
  make
  ```
- 直接编译（最小示例）：
  ```bash
  g++ -std=c++17 -I include -O2 -o bin/app src/*.cpp
  ```

Git 与协作约定（本仓库可见规则）
- 在本地仅使用仓库级别的 `git config user.name/email`，不要无需更改全局配置。
- 提交粒度：小且聚焦（单一目的）。提交信息采用英文或中文简短说明即可，例如 `Add chapter1 examples` 或 `修正第2章示例`。
- 初始化空仓库时可使用空提交：
  ```bash
  git commit --allow-empty -m "Initial empty commit"
  git push -u origin main
  ```

针对 AI 代理的具体行为准则
- 首先扫描仓库并报告发现（列出关键文件、构建系统、是否有测试、是否有 CI）。
- 不要擅自添加或启用 CI、webhook、或发布凭据；任何外部集成需先征询仓库拥有者确认。
- 修改前若仓库无测试或构建脚本，先向用户确认合并策略（直接推送 vs PR）。
- 优先做可回滚且小的更改；在修改源码前，可先提交文档或测试补充以证明更改合理性。

示例：处理 `P1/` 目录中的练习文件
- 如果 `P1/` 存在 `.cpp` 文件，编译并运行示例以确认行为；在修改前记录输入/输出样例。

未检测到的项目约定
- 当前仓库未包含明确的编码规范或 CI 配置；若需要遵循风格，请在变更前询问仓库所有者。

反馈与迭代
- 如果此指南有遗漏或需补充（如首选 C++ 标准、目标平台、或特定文件位置），请在 issue 中指出或直接告诉我，我会更新本文件。

---
文件：`.github/copilot-instructions.md`（由代理生成）。
