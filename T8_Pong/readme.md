BP_Ball: 继承StaticMeshActor。所有碰撞处理，都在这里完成。

BP_Wall: 继承StaticMeshActor。充当边界，与BP_Ball发生碰撞检测。

BP_TriggerWall: 充当边界，当与BP_Ball发生碰撞事件时，说明有玩家得分了。

BP_Paddle: 继承Pawn。唯一能由玩家控制的东西，把球反弹回去。只实现一个MoveUp函数，被BP_PaddleController调用。

BP_PaddleController: 继承PlayerController，PlayController只能同时控制一个Pawn，所以对于不同的输入，BP_PaddleController需要不断地Posses对应的BP_Paddle，就是来回切换控制的BP_Paddle。BP_PaddleController只负责处理Posses哪个BP_Paddle对象，具体的移动逻辑在BP_Paddle的MoveUp中实现。

BP_PongGameModeBase: 创建HUD，并负责倒计时逻辑。

BP_PongGameStateBase: 记录玩家得分数据。

BP_HUD: HUD。

Level Blueprint: 一开始很多逻辑都在这写，发现还是分配到其他类比较好，而且其他地方貌似不能直接引用Level Blueprint，只能通过自定义事件或者事件调度器才能通信，这就有点方便了。