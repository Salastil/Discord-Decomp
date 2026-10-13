package kotlin.collections;

import java.util.ListIterator;
import java.util.NoSuchElementException;

/* loaded from: classes3.dex */
public final class d extends fo.z implements ListIterator {

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ f f13493v;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public d(f fVar, int i5) {
        super(fVar);
        this.f13493v = fVar;
        c cVar = f.f13497d;
        int a = fVar.a();
        cVar.getClass();
        c.c(i5, a);
        this.f8846e = i5;
    }

    @Override // java.util.ListIterator
    public final void add(Object obj) {
        throw new UnsupportedOperationException("Operation is not supported for read-only collection");
    }

    @Override // java.util.ListIterator
    public final boolean hasPrevious() {
        return this.f8846e > 0;
    }

    @Override // java.util.ListIterator
    public final int nextIndex() {
        return this.f8846e;
    }

    @Override // java.util.ListIterator
    public final Object previous() {
        if (!hasPrevious()) {
            throw new NoSuchElementException();
        }
        int i5 = this.f8846e - 1;
        this.f8846e = i5;
        return this.f13493v.get(i5);
    }

    @Override // java.util.ListIterator
    public final int previousIndex() {
        return this.f8846e - 1;
    }

    @Override // java.util.ListIterator
    public final void set(Object obj) {
        throw new UnsupportedOperationException("Operation is not supported for read-only collection");
    }
}
