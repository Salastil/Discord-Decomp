package com.facebook.react.common;

import k1.b;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000.\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0002\u0010\b\n\u0002\b\u0006\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0010\u0011\n\u0002\b\u0005\b\u0000\u0018\u0000*\b\b\u0000\u0010\u0002*\u00020\u00012\b\u0012\u0004\u0012\u00028\u00000\u0003B\u000f\u0012\u0006\u0010\u0005\u001a\u00020\u0004¢\u0006\u0004\b\u0006\u0010\u0007J\u0011\u0010\b\u001a\u0004\u0018\u00018\u0000H\u0016¢\u0006\u0004\b\b\u0010\tJ\u0017\u0010\f\u001a\u00020\u000b2\u0006\u0010\n\u001a\u00028\u0000H\u0016¢\u0006\u0004\b\f\u0010\rJ\r\u0010\u000f\u001a\u00020\u000e¢\u0006\u0004\b\u000f\u0010\u0010R\u001c\u0010\u0012\u001a\n\u0012\u0006\u0012\u0004\u0018\u00010\u00010\u00118\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b\u0012\u0010\u0013R\u0016\u0010\u0014\u001a\u00020\u00048\u0002@\u0002X\u0082\u000e¢\u0006\u0006\n\u0004\b\u0014\u0010\u0015¨\u0006\u0016"}, d2 = {"Lcom/facebook/react/common/ClearableSynchronizedPool;", "", "T", "Lk1/b;", "", "maxSize", "<init>", "(I)V", "acquire", "()Ljava/lang/Object;", "instance", "", "release", "(Ljava/lang/Object;)Z", "", "clear", "()V", "", "pool", "[Ljava/lang/Object;", "size", "I", "ReactAndroid_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes3.dex */
public final class ClearableSynchronizedPool<T> implements b {

    @NotNull
    private final Object[] pool;
    private int size;

    public ClearableSynchronizedPool(int i5) {
        this.pool = new Object[i5];
    }

    @Override // k1.b
    public synchronized T acquire() {
        int i5 = this.size;
        if (i5 == 0) {
            return null;
        }
        int i6 = i5 - 1;
        this.size = i6;
        T t5 = (T) this.pool[i6];
        Intrinsics.checkNotNull(t5, "null cannot be cast to non-null type T of com.facebook.react.common.ClearableSynchronizedPool");
        this.pool[i6] = null;
        return t5;
    }

    public final synchronized void clear() {
        try {
            int i5 = this.size;
            for (int i6 = 0; i6 < i5; i6++) {
                this.pool[i6] = null;
            }
            this.size = 0;
        } catch (Throwable th2) {
            throw th2;
        }
    }

    @Override // k1.b
    public synchronized boolean release(@NotNull T instance) {
        Intrinsics.checkNotNullParameter(instance, "instance");
        int i5 = this.size;
        Object[] objArr = this.pool;
        if (i5 == objArr.length) {
            return false;
        }
        objArr[i5] = instance;
        this.size = i5 + 1;
        return true;
    }
}
