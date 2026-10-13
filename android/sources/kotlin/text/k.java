package kotlin.text;

import java.util.Iterator;
import java.util.NoSuchElementException;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.markers.KMappedMarker;

/* loaded from: classes3.dex */
public final class k implements Iterator, KMappedMarker {

    /* renamed from: d, reason: collision with root package name */
    public final CharSequence f13577d;

    /* renamed from: e, reason: collision with root package name */
    public int f13578e;

    /* renamed from: i, reason: collision with root package name */
    public int f13579i;

    /* renamed from: v, reason: collision with root package name */
    public int f13580v;

    /* renamed from: w, reason: collision with root package name */
    public int f13581w;

    public k(CharSequence string) {
        Intrinsics.checkNotNullParameter(string, "string");
        this.f13577d = string;
    }

    @Override // java.util.Iterator
    public final boolean hasNext() {
        int i5;
        int i6;
        int i10 = this.f13578e;
        if (i10 != 0) {
            return i10 == 1;
        }
        if (this.f13581w < 0) {
            this.f13578e = 2;
            return false;
        }
        CharSequence charSequence = this.f13577d;
        int length = charSequence.length();
        int length2 = charSequence.length();
        for (int i11 = this.f13579i; i11 < length2; i11++) {
            char charAt = charSequence.charAt(i11);
            if (charAt == '\n' || charAt == '\r') {
                i5 = (charAt == '\r' && (i6 = i11 + 1) < charSequence.length() && charSequence.charAt(i6) == '\n') ? 2 : 1;
                length = i11;
                this.f13578e = 1;
                this.f13581w = i5;
                this.f13580v = length;
                return true;
            }
        }
        i5 = -1;
        this.f13578e = 1;
        this.f13581w = i5;
        this.f13580v = length;
        return true;
    }

    @Override // java.util.Iterator
    public final Object next() {
        if (!hasNext()) {
            throw new NoSuchElementException();
        }
        this.f13578e = 0;
        int i5 = this.f13580v;
        int i6 = this.f13579i;
        this.f13579i = this.f13581w + i5;
        return this.f13577d.subSequence(i6, i5).toString();
    }

    @Override // java.util.Iterator
    public final void remove() {
        throw new UnsupportedOperationException("Operation is not supported for read-only collection");
    }
}
