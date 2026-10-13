package androidx.lifecycle;

/* loaded from: classes.dex */
public abstract class a0 {

    /* renamed from: d, reason: collision with root package name */
    public final Observer f2166d;

    /* renamed from: e, reason: collision with root package name */
    public boolean f2167e;

    /* renamed from: i, reason: collision with root package name */
    public int f2168i = -1;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ LiveData f2169v;

    public a0(LiveData liveData, Observer observer) {
        this.f2169v = liveData;
        this.f2166d = observer;
    }

    public final void a(boolean z5) {
        if (z5 == this.f2167e) {
            return;
        }
        this.f2167e = z5;
        int i5 = z5 ? 1 : -1;
        LiveData liveData = this.f2169v;
        int i6 = liveData.f2152c;
        liveData.f2152c = i5 + i6;
        if (!liveData.f2153d) {
            liveData.f2153d = true;
            while (true) {
                try {
                    int i10 = liveData.f2152c;
                    if (i6 == i10) {
                        break;
                    }
                    boolean z6 = i6 == 0 && i10 > 0;
                    boolean z7 = i6 > 0 && i10 == 0;
                    if (z6) {
                        liveData.e();
                    } else if (z7) {
                        liveData.f();
                    }
                    i6 = i10;
                } catch (Throwable th2) {
                    liveData.f2153d = false;
                    throw th2;
                }
            }
            liveData.f2153d = false;
        }
        if (this.f2167e) {
            liveData.c(this);
        }
    }

    public void b() {
    }

    public boolean d(LifecycleOwner lifecycleOwner) {
        return false;
    }

    public abstract boolean e();
}
