package fi;

import java.util.Iterator;
import java.util.NoSuchElementException;

/* loaded from: classes3.dex */
public final class i0 extends e1 {

    /* renamed from: d, reason: collision with root package name */
    public int f8665d;

    /* renamed from: e, reason: collision with root package name */
    public Object f8666e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ int f8667i;

    /* renamed from: v, reason: collision with root package name */
    public final Iterator f8668v;

    /* renamed from: w, reason: collision with root package name */
    public final /* synthetic */ Object f8669w;

    public i0() {
        this.f8665d = 2;
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    @Override // java.util.Iterator
    public final boolean hasNext() {
        Object next;
        int i5 = this.f8665d;
        if (i5 == 4) {
            throw new IllegalStateException();
        }
        int b10 = f0.e.b(i5);
        if (b10 == 0) {
            return true;
        }
        if (b10 == 2) {
            return false;
        }
        this.f8665d = 4;
        switch (this.f8667i) {
            case 0:
                do {
                    Iterator it = this.f8668v;
                    if (!it.hasNext()) {
                        this.f8665d = 3;
                        next = null;
                        break;
                    } else {
                        next = it.next();
                    }
                } while (!((ei.g) this.f8669w).apply(next));
            default:
                do {
                    Iterator it2 = this.f8668v;
                    if (!it2.hasNext()) {
                        this.f8665d = 3;
                        next = null;
                        break;
                    } else {
                        next = it2.next();
                    }
                } while (!((z0) this.f8669w).f8746e.contains(next));
        }
        this.f8666e = next;
        if (this.f8665d == 3) {
            return false;
        }
        this.f8665d = 1;
        return true;
    }

    @Override // java.util.Iterator
    public final Object next() {
        if (!hasNext()) {
            throw new NoSuchElementException();
        }
        this.f8665d = 2;
        Object obj = this.f8666e;
        this.f8666e = null;
        return obj;
    }

    /* JADX WARN: 'this' call moved to the top of the method (can break code semantics) */
    public i0(Iterator it, ei.g gVar) {
        this();
        this.f8667i = 0;
        this.f8668v = it;
        this.f8669w = gVar;
    }

    /* JADX WARN: 'this' call moved to the top of the method (can break code semantics) */
    public i0(z0 z0Var) {
        this();
        this.f8667i = 1;
        this.f8669w = z0Var;
        this.f8668v = z0Var.f8745d.iterator();
    }
}
