package bb;

import com.facebook.react.jstasks.HeadlessJsTaskContext;

/* loaded from: classes3.dex */
public final /* synthetic */ class b implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f2765d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ HeadlessJsTaskContext f2766e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ int f2767i;

    public /* synthetic */ b(HeadlessJsTaskContext headlessJsTaskContext, int i5, int i6) {
        this.f2765d = i6;
        this.f2766e = headlessJsTaskContext;
        this.f2767i = i5;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f2765d) {
            case 0:
                this.f2766e.finishTask(this.f2767i);
                break;
            default:
                HeadlessJsTaskContext.finishTask$lambda$4(this.f2766e, this.f2767i);
                break;
        }
    }
}
