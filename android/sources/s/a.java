package s;

import java.util.Iterator;
import java.util.NoSuchElementException;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.markers.KMutableIterator;

/* loaded from: classes.dex */
public final class a implements Iterator, KMutableIterator {

    /* renamed from: d, reason: collision with root package name */
    public int f17660d;

    /* renamed from: e, reason: collision with root package name */
    public int f17661e;

    /* renamed from: i, reason: collision with root package name */
    public boolean f17662i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ int f17663v;

    /* renamed from: w, reason: collision with root package name */
    public final /* synthetic */ Object f17664w;

    public a(int i5) {
        this.f17660d = i5;
    }

    @Override // java.util.Iterator
    public final boolean hasNext() {
        return this.f17661e < this.f17660d;
    }

    @Override // java.util.Iterator
    public final Object next() {
        Object f2;
        if (!hasNext()) {
            throw new NoSuchElementException();
        }
        int i5 = this.f17661e;
        switch (this.f17663v) {
            case 0:
                f2 = ((e) this.f17664w).f(i5);
                break;
            case 1:
                f2 = ((e) this.f17664w).i(i5);
                break;
            default:
                f2 = ((f) this.f17664w).f17675e[i5];
                break;
        }
        this.f17661e++;
        this.f17662i = true;
        return f2;
    }

    @Override // java.util.Iterator
    public final void remove() {
        if (!this.f17662i) {
            Intrinsics.checkNotNullParameter("Call next() before removing an element.", "message");
            throw new IllegalStateException("Call next() before removing an element.");
        }
        int i5 = this.f17661e - 1;
        this.f17661e = i5;
        switch (this.f17663v) {
            case 0:
                ((e) this.f17664w).g(i5);
                break;
            case 1:
                ((e) this.f17664w).g(i5);
                break;
            default:
                ((f) this.f17664w).a(i5);
                break;
        }
        this.f17660d--;
        this.f17662i = false;
    }

    /* JADX WARN: 'this' call moved to the top of the method (can break code semantics) */
    public a(f fVar) {
        this(fVar.f17676i);
        this.f17663v = 2;
        this.f17664w = fVar;
    }

    /* JADX WARN: 'this' call moved to the top of the method (can break code semantics) */
    public a(e eVar, int i5) {
        this(eVar.f1208i);
        this.f17663v = i5;
        switch (i5) {
            case 1:
                this.f17664w = eVar;
                this(eVar.f1208i);
                break;
            default:
                this.f17664w = eVar;
                break;
        }
    }
}
