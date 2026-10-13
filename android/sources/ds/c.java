package ds;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class c implements CharSequence {

    /* renamed from: d, reason: collision with root package name */
    public final char[] f7709d;

    /* renamed from: e, reason: collision with root package name */
    public int f7710e;

    public c(char[] buffer) {
        Intrinsics.checkNotNullParameter(buffer, "buffer");
        this.f7709d = buffer;
        this.f7710e = buffer.length;
    }

    @Override // java.lang.CharSequence
    public final char charAt(int i5) {
        return this.f7709d[i5];
    }

    @Override // java.lang.CharSequence
    public final int length() {
        return this.f7710e;
    }

    @Override // java.lang.CharSequence
    public final CharSequence subSequence(int i5, int i6) {
        return kotlin.text.x.f(this.f7709d, i5, Math.min(i6, this.f7710e));
    }

    @Override // java.lang.CharSequence
    public final String toString() {
        int i5 = this.f7710e;
        return kotlin.text.x.f(this.f7709d, 0, Math.min(i5, i5));
    }
}
