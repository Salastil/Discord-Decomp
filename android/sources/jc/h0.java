package jc;

import android.os.Handler;
import java.util.concurrent.Executor;

/* loaded from: classes3.dex */
public final /* synthetic */ class h0 implements Executor {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ Handler f12527d;

    @Override // java.util.concurrent.Executor
    public final void execute(Runnable runnable) {
        this.f12527d.post(runnable);
    }
}
