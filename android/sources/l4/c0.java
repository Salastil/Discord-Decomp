package l4;

import android.os.Handler;
import android.os.Looper;
import io.sentry.android.core.h1;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.LinkedHashSet;
import java.util.concurrent.Callable;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;

/* loaded from: classes.dex */
public final class c0 {

    /* renamed from: e, reason: collision with root package name */
    public static final ExecutorService f13708e = Executors.newCachedThreadPool(new x4.d());
    public final LinkedHashSet a = new LinkedHashSet(1);

    /* renamed from: b, reason: collision with root package name */
    public final LinkedHashSet f13709b = new LinkedHashSet(1);

    /* renamed from: c, reason: collision with root package name */
    public final Handler f13710c = new Handler(Looper.getMainLooper());

    /* renamed from: d, reason: collision with root package name */
    public volatile a0 f13711d = null;

    public c0(i iVar) {
        d(new a0(iVar));
    }

    public final synchronized void a(y yVar) {
        Throwable th2;
        try {
            a0 a0Var = this.f13711d;
            if (a0Var != null && (th2 = a0Var.f13705b) != null) {
                yVar.onResult(th2);
            }
            this.f13709b.add(yVar);
        } catch (Throwable th3) {
            throw th3;
        }
    }

    public final synchronized void b(y yVar) {
        i iVar;
        try {
            a0 a0Var = this.f13711d;
            if (a0Var != null && (iVar = a0Var.a) != null) {
                yVar.onResult(iVar);
            }
            this.a.add(yVar);
        } catch (Throwable th2) {
            throw th2;
        }
    }

    public final void c() {
        a0 a0Var = this.f13711d;
        if (a0Var == null) {
            return;
        }
        i iVar = a0Var.a;
        if (iVar != null) {
            synchronized (this) {
                Iterator it = new ArrayList(this.a).iterator();
                while (it.hasNext()) {
                    ((y) it.next()).onResult(iVar);
                }
            }
            return;
        }
        Throwable th2 = a0Var.f13705b;
        synchronized (this) {
            ArrayList arrayList = new ArrayList(this.f13709b);
            if (arrayList.isEmpty()) {
                x4.c.c("Lottie encountered an error but no failure listener was added:", th2);
                return;
            }
            Iterator it2 = arrayList.iterator();
            while (it2.hasNext()) {
                ((y) it2.next()).onResult(th2);
            }
        }
    }

    public final void d(a0 a0Var) {
        if (this.f13711d != null) {
            throw new IllegalStateException("A task may only be set once.");
        }
        this.f13711d = a0Var;
        if (Looper.myLooper() == Looper.getMainLooper()) {
            c();
        } else {
            this.f13710c.post(new h1(20, this));
        }
    }

    public c0(Callable callable, boolean z5) {
        if (z5) {
            try {
                d((a0) callable.call());
                return;
            } catch (Throwable th2) {
                d(new a0(th2));
                return;
            }
        }
        ExecutorService executorService = f13708e;
        b0 b0Var = new b0(callable);
        b0Var.f13707e = this;
        executorService.execute(b0Var);
    }
}
