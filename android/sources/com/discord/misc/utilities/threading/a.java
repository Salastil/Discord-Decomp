package com.discord.misc.utilities.threading;

import java.util.concurrent.Executor;

/* loaded from: classes.dex */
public final /* synthetic */ class a implements Executor {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4282d;

    public /* synthetic */ a(int i5) {
        this.f4282d = i5;
    }

    @Override // java.util.concurrent.Executor
    public final void execute(Runnable runnable) {
        switch (this.f4282d) {
            case 0:
                ThreadUtilsKt.uiExecutor$lambda$1(runnable);
                break;
            case 1:
                runnable.run();
                break;
            default:
                o.a.U().f15703t.f15705u.execute(runnable);
                break;
        }
    }
}
