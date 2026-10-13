package kotlin.text;

import java.util.Iterator;
import java.util.NoSuchElementException;
import kotlin.Pair;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.markers.KMappedMarker;
import kotlin.ranges.IntRange;

/* loaded from: classes3.dex */
public final class b implements Iterator, KMappedMarker {

    /* renamed from: d, reason: collision with root package name */
    public int f13561d = -1;

    /* renamed from: e, reason: collision with root package name */
    public int f13562e;

    /* renamed from: i, reason: collision with root package name */
    public int f13563i;

    /* renamed from: v, reason: collision with root package name */
    public IntRange f13564v;

    /* renamed from: w, reason: collision with root package name */
    public int f13565w;

    /* renamed from: x, reason: collision with root package name */
    public final /* synthetic */ c f13566x;

    public b(c cVar) {
        this.f13566x = cVar;
        int d6 = yo.j.d(0, 0, cVar.a.length());
        this.f13562e = d6;
        this.f13563i = d6;
    }

    /* JADX WARN: Code restructure failed: missing block: B:9:0x0018, code lost:
    
        if (r6 < r3) goto L10;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void a() {
        int i5 = this.f13563i;
        if (i5 < 0) {
            this.f13561d = 0;
            this.f13564v = null;
            return;
        }
        c cVar = this.f13566x;
        int i6 = cVar.f13567b;
        if (i6 > 0) {
            int i10 = this.f13565w + 1;
            this.f13565w = i10;
        }
        if (i5 <= cVar.a.length()) {
            Pair pair = (Pair) cVar.f13568c.invoke(cVar.a, Integer.valueOf(this.f13563i));
            if (pair == null) {
                this.f13564v = new IntRange(this.f13562e, StringsKt.H(cVar.a), 1);
                this.f13563i = -1;
            } else {
                int intValue = ((Number) pair.f13474d).intValue();
                int intValue2 = ((Number) pair.f13475e).intValue();
                this.f13564v = yo.j.i(this.f13562e, intValue);
                int i11 = intValue + intValue2;
                this.f13562e = i11;
                this.f13563i = i11 + (intValue2 == 0 ? 1 : 0);
            }
            this.f13561d = 1;
        }
        this.f13564v = new IntRange(this.f13562e, StringsKt.H(cVar.a), 1);
        this.f13563i = -1;
        this.f13561d = 1;
    }

    @Override // java.util.Iterator
    public final boolean hasNext() {
        if (this.f13561d == -1) {
            a();
        }
        return this.f13561d == 1;
    }

    @Override // java.util.Iterator
    public final Object next() {
        if (this.f13561d == -1) {
            a();
        }
        if (this.f13561d == 0) {
            throw new NoSuchElementException();
        }
        IntRange intRange = this.f13564v;
        Intrinsics.checkNotNull(intRange, "null cannot be cast to non-null type kotlin.ranges.IntRange");
        this.f13564v = null;
        this.f13561d = -1;
        return intRange;
    }

    @Override // java.util.Iterator
    public final void remove() {
        throw new UnsupportedOperationException("Operation is not supported for read-only collection");
    }
}
