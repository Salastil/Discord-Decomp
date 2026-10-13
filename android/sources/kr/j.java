package kr;

import androidx.core.view.x0;
import java.util.Iterator;
import java.util.NoSuchElementException;
import kotlin.Result;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.CoroutineContext;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.markers.KMappedMarker;

/* loaded from: classes3.dex */
public final class j extends k implements Iterator, Continuation, KMappedMarker {

    /* renamed from: d, reason: collision with root package name */
    public int f13650d;

    /* renamed from: e, reason: collision with root package name */
    public Object f13651e;

    /* renamed from: i, reason: collision with root package name */
    public Iterator f13652i;

    /* renamed from: v, reason: collision with root package name */
    public Continuation f13653v;

    @Override // kr.k
    public final void a(Object obj, lo.g frame) {
        this.f13651e = obj;
        this.f13650d = 3;
        this.f13653v = frame;
        ko.a aVar = ko.a.f13464d;
        Intrinsics.checkNotNullParameter(frame, "frame");
    }

    @Override // kr.k
    public final Object b(Iterator it, x0 frame) {
        if (!it.hasNext()) {
            return Unit.a;
        }
        this.f13652i = it;
        this.f13650d = 2;
        this.f13653v = frame;
        ko.a aVar = ko.a.f13464d;
        Intrinsics.checkNotNullParameter(frame, "frame");
        return aVar;
    }

    public final RuntimeException d() {
        int i5 = this.f13650d;
        if (i5 == 4) {
            return new NoSuchElementException();
        }
        if (i5 == 5) {
            return new IllegalStateException("Iterator has failed.");
        }
        return new IllegalStateException("Unexpected state of the iterator: " + this.f13650d);
    }

    @Override // kotlin.coroutines.Continuation
    public final CoroutineContext getContext() {
        return kotlin.coroutines.g.f13538d;
    }

    @Override // java.util.Iterator
    public final boolean hasNext() {
        while (true) {
            int i5 = this.f13650d;
            if (i5 != 0) {
                if (i5 != 1) {
                    if (i5 == 2 || i5 == 3) {
                        return true;
                    }
                    if (i5 == 4) {
                        return false;
                    }
                    throw d();
                }
                Iterator it = this.f13652i;
                Intrinsics.checkNotNull(it);
                if (it.hasNext()) {
                    this.f13650d = 2;
                    return true;
                }
                this.f13652i = null;
            }
            this.f13650d = 5;
            Continuation continuation = this.f13653v;
            Intrinsics.checkNotNull(continuation);
            this.f13653v = null;
            fo.q qVar = Result.f13476e;
            continuation.resumeWith(Unit.a);
        }
    }

    @Override // java.util.Iterator
    public final Object next() {
        int i5 = this.f13650d;
        if (i5 == 0 || i5 == 1) {
            if (hasNext()) {
                return next();
            }
            throw new NoSuchElementException();
        }
        if (i5 == 2) {
            this.f13650d = 1;
            Iterator it = this.f13652i;
            Intrinsics.checkNotNull(it);
            return it.next();
        }
        if (i5 != 3) {
            throw d();
        }
        this.f13650d = 0;
        Object obj = this.f13651e;
        this.f13651e = null;
        return obj;
    }

    @Override // java.util.Iterator
    public final void remove() {
        throw new UnsupportedOperationException("Operation is not supported for read-only collection");
    }

    @Override // kotlin.coroutines.Continuation
    public final void resumeWith(Object obj) {
        ki.b.R(obj);
        this.f13650d = 4;
    }
}
