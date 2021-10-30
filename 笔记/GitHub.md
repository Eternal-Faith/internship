# Github 笔记 
     
 	• 一定记得先cd muxi然后在推文件  
    • 文件在本地仓库里才能推上去
    • git clone     https://github.com/haojinjieniubi/muxi.git
    • token:        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
    • fatal:         不是 git 仓库（或者直至挂载点 / 的任何父目录） :git init （初始化）
    • git clone 出现访问出错，显示无权限或找不到（链接不到）仓库
      fatal: 无法读取远程仓库。
	  请确认您有正确的访问权限并且仓库存在。
	  解决方法：
	  **git config --global http.sslverify false**
    • 位于分支 master 您的分支和 'origin/master' 出现了偏离,并且分别有 2 和 1 处不同的提交(使用 "git pull" 来合并远程分支)问题解决: 删了重克隆一遍
      
