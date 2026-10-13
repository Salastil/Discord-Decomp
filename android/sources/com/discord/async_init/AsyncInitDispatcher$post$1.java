package com.discord.async_init;

import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;

@Metadata(k = 3, mv = {2, 1, 0}, xi = 176)
/* loaded from: classes.dex */
public final class AsyncInitDispatcher$post$1 implements Function0<Unit> {
    final /* synthetic */ Function0<Unit> $task;

    public AsyncInitDispatcher$post$1(Function0<Unit> function0) {
        this.$task = function0;
    }

    @Override // kotlin.jvm.functions.Function0
    public /* bridge */ /* synthetic */ Object invoke() {
        m251invoke();
        return Unit.a;
    }

    /* renamed from: invoke, reason: collision with other method in class */
    public final void m251invoke() {
        this.$task.invoke();
    }
}
