package com.swmansion.worklets;

import ya.a;

@a
/* loaded from: classes3.dex */
public class WorkletsMessageQueueThread extends WorkletsMessageQueueThreadBase {
    @Override // com.facebook.react.bridge.queue.MessageQueueThread
    public final boolean isIdle() {
        return this.a.isIdle();
    }

    @Override // com.facebook.react.bridge.queue.MessageQueueThread
    public final boolean runOnQueue(Runnable runnable) {
        return this.a.runOnQueue(runnable);
    }
}
