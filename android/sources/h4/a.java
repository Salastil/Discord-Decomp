package h4;

import android.os.Looper;
import java.util.concurrent.Executor;

/* loaded from: classes.dex */
public final class a implements Executor {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f9514d;

    /* renamed from: e, reason: collision with root package name */
    public Object f9515e;

    public /* synthetic */ a(int i5, Object obj) {
        this.f9514d = i5;
        this.f9515e = obj;
    }

    public void a() {
        ThreadLocal threadLocal = (ThreadLocal) this.f9515e;
        Integer num = (Integer) threadLocal.get();
        if (num == null) {
            num = 0;
        }
        int intValue = num.intValue() - 1;
        if (intValue == 0) {
            threadLocal.remove();
        } else {
            threadLocal.set(Integer.valueOf(intValue));
        }
    }

    @Override // java.util.concurrent.Executor
    public final void execute(Runnable runnable) {
        switch (this.f9514d) {
            case 0:
                ((b) this.f9515e).f9517c.post(runnable);
                return;
            case 1:
                ThreadLocal threadLocal = (ThreadLocal) this.f9515e;
                Integer num = (Integer) threadLocal.get();
                if (num == null) {
                    num = 0;
                }
                int intValue = num.intValue() + 1;
                threadLocal.set(Integer.valueOf(intValue));
                try {
                    if (intValue <= 15) {
                        runnable.run();
                    } else {
                        j4.b.f12411c.a.execute(runnable);
                    }
                    a();
                    return;
                } catch (Throwable th2) {
                    a();
                    throw th2;
                }
            case 2:
                ((fg.a) this.f9515e).post(runnable);
                return;
            default:
                ((Executor) this.f9515e).execute(new hf.a(2, runnable));
                return;
        }
    }

    public a(int i5) {
        this.f9514d = i5;
        switch (i5) {
            case 2:
                fg.a aVar = new fg.a(Looper.getMainLooper());
                Looper.getMainLooper();
                this.f9515e = aVar;
                break;
        }
    }
}
