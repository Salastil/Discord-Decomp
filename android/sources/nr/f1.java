package nr;

import kotlin.Result;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.CoroutineContext;
import kotlin.jvm.functions.Function2;

/* loaded from: classes3.dex */
public final class f1 extends l1 {

    /* renamed from: v, reason: collision with root package name */
    public final Continuation f15619v;

    public f1(CoroutineContext coroutineContext, Function2 function2) {
        super(coroutineContext, false);
        this.f15619v = ko.f.a(this, this, function2);
    }

    @Override // nr.e1
    public final void c0() {
        try {
            Continuation b10 = ko.f.b(this.f15619v);
            fo.q qVar = Result.f13476e;
            sr.h.f(Unit.a, b10);
        } catch (Throwable th2) {
            th = th2;
            if (th instanceof c0) {
                th = ((c0) th).f15600d;
            }
            fo.q qVar2 = Result.f13476e;
            resumeWith(ki.b.i(th));
            throw th;
        }
    }
}
