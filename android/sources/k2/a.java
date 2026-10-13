package k2;

import java.util.concurrent.ThreadFactory;

/* loaded from: classes.dex */
public final /* synthetic */ class a implements ThreadFactory {
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ String f13118b;

    public /* synthetic */ a(String str, int i5) {
        this.a = i5;
        this.f13118b = str;
    }

    @Override // java.util.concurrent.ThreadFactory
    public final Thread newThread(Runnable runnable) {
        switch (this.a) {
            case 0:
                Thread thread = new Thread(runnable, this.f13118b);
                thread.setPriority(10);
                return thread;
            default:
                return new Thread(runnable, this.f13118b);
        }
    }
}
