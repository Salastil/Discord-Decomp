package xe;

import java.util.concurrent.Executor;

/* loaded from: classes3.dex */
public final /* synthetic */ class g implements Executor {

    /* renamed from: e, reason: collision with root package name */
    public static final /* synthetic */ g f20404e = new g(0);

    /* renamed from: i, reason: collision with root package name */
    public static final /* synthetic */ g f20405i = new g(1);

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f20406d;

    public /* synthetic */ g(int i5) {
        this.f20406d = i5;
    }

    @Override // java.util.concurrent.Executor
    public final void execute(Runnable runnable) {
        switch (this.f20406d) {
            case 0:
                runnable.run();
                break;
            default:
                runnable.run();
                break;
        }
    }
}
