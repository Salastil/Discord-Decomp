package j0;

import android.view.Choreographer;
import fo.q;
import kotlin.Result;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Lambda;
import nr.j;

/* loaded from: classes.dex */
public final class e implements Choreographer.FrameCallback {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ j f12367d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Lambda f12368e;

    /* JADX WARN: Multi-variable type inference failed */
    public e(j jVar, f fVar, Function1 function1) {
        this.f12367d = jVar;
        this.f12368e = (Lambda) function1;
    }

    /* JADX WARN: Type inference failed for: r0v0, types: [kotlin.jvm.functions.Function1, kotlin.jvm.internal.Lambda] */
    @Override // android.view.Choreographer.FrameCallback
    public final void doFrame(long j) {
        Object i5;
        ?? r02 = this.f12368e;
        try {
            q qVar = Result.f13476e;
            i5 = r02.invoke(Long.valueOf(j));
        } catch (Throwable th2) {
            q qVar2 = Result.f13476e;
            i5 = ki.b.i(th2);
        }
        this.f12367d.resumeWith(i5);
    }
}
