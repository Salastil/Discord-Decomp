package com.swmansion.worklets;

import com.facebook.react.bridge.queue.MessageQueueThread;
import com.facebook.react.bridge.queue.MessageQueueThreadImpl;
import com.facebook.react.bridge.queue.MessageQueueThreadPerfStats;
import com.facebook.react.bridge.queue.MessageQueueThreadSpec;
import java.lang.reflect.Field;
import java.util.concurrent.Callable;
import java.util.concurrent.Future;
import n1.k;
import ya.a;

@a
/* loaded from: classes3.dex */
public abstract class WorkletsMessageQueueThreadBase implements MessageQueueThread {
    public final MessageQueueThreadImpl a = MessageQueueThreadImpl.create(MessageQueueThreadSpec.mainThreadSpec(), new k(27));

    @Override // com.facebook.react.bridge.queue.MessageQueueThread
    public final void assertIsOnThread() {
        this.a.assertIsOnThread();
    }

    @Override // com.facebook.react.bridge.queue.MessageQueueThread
    public final Future callOnQueue(Callable callable) {
        return this.a.callOnQueue(callable);
    }

    @Override // com.facebook.react.bridge.queue.MessageQueueThread
    public final MessageQueueThreadPerfStats getPerfStats() {
        return this.a.getPerfStats();
    }

    @Override // com.facebook.react.bridge.queue.MessageQueueThread
    public final boolean isOnThread() {
        return this.a.isOnThread();
    }

    @Override // com.facebook.react.bridge.queue.MessageQueueThread
    public final void quitSynchronous() {
        MessageQueueThreadImpl messageQueueThreadImpl = this.a;
        try {
            Field declaredField = messageQueueThreadImpl.getClass().getDeclaredField("mIsFinished");
            declaredField.setAccessible(true);
            declaredField.set(messageQueueThreadImpl, Boolean.TRUE);
            declaredField.setAccessible(false);
        } catch (IllegalAccessException | NoSuchFieldException e9) {
            e9.printStackTrace();
        }
    }

    @Override // com.facebook.react.bridge.queue.MessageQueueThread
    public final void resetPerfStats() {
        this.a.resetPerfStats();
    }

    @Override // com.facebook.react.bridge.queue.MessageQueueThread
    public final void assertIsOnThread(String str) {
        this.a.assertIsOnThread(str);
    }
}
