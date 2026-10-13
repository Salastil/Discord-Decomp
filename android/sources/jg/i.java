package jg;

import com.google.android.gms.internal.play_billing.v0;
import com.google.android.gms.tasks.Task;
import ii.o;
import java.util.concurrent.Executor;

/* loaded from: classes3.dex */
public final class i implements k, d, c, b {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f12759d;

    /* renamed from: e, reason: collision with root package name */
    public final Executor f12760e;

    /* renamed from: i, reason: collision with root package name */
    public final a f12761i;

    /* renamed from: v, reason: collision with root package name */
    public final l f12762v;

    public /* synthetic */ i(Executor executor, a aVar, l lVar, int i5) {
        this.f12759d = i5;
        this.f12760e = executor;
        this.f12761i = aVar;
        this.f12762v = lVar;
    }

    @Override // jg.b
    public void E() {
        this.f12762v.r();
    }

    @Override // jg.k
    public final void a(Task task) {
        switch (this.f12759d) {
            case 0:
                this.f12760e.execute(new o(this, task, 13, false));
                break;
            default:
                this.f12760e.execute(new v0(this, task, 14, false));
                break;
        }
    }

    @Override // jg.c
    public void onFailure(Exception exc) {
        this.f12762v.p(exc);
    }

    @Override // jg.d
    public void onSuccess(Object obj) {
        this.f12762v.q(obj);
    }
}
