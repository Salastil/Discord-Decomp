package h4;

import android.os.Handler;
import android.os.Looper;
import f4.l;
import java.util.concurrent.ExecutorService;
import kotlinx.coroutines.CoroutineDispatcher;
import nr.x;

/* loaded from: classes.dex */
public final class b {
    public final l a;

    /* renamed from: b, reason: collision with root package name */
    public final CoroutineDispatcher f9516b;

    /* renamed from: c, reason: collision with root package name */
    public final Handler f9517c = new Handler(Looper.getMainLooper());

    /* renamed from: d, reason: collision with root package name */
    public final a f9518d = new a(0, this);

    public b(ExecutorService executorService) {
        l lVar = new l(executorService);
        this.a = lVar;
        this.f9516b = x.m(lVar);
    }

    public final void a(Runnable runnable) {
        this.a.execute(runnable);
    }
}
