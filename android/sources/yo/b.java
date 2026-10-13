package yo;

import java.util.NoSuchElementException;
import kotlin.collections.r0;

/* loaded from: classes3.dex */
public final class b extends r0 {

    /* renamed from: d, reason: collision with root package name */
    public final int f20992d;

    /* renamed from: e, reason: collision with root package name */
    public final int f20993e;

    /* renamed from: i, reason: collision with root package name */
    public boolean f20994i;

    /* renamed from: v, reason: collision with root package name */
    public int f20995v;

    public b(int i5, int i6, int i10) {
        this.f20992d = i10;
        this.f20993e = i6;
        boolean z5 = false;
        if (i10 <= 0 ? i5 >= i6 : i5 <= i6) {
            z5 = true;
        }
        this.f20994i = z5;
        this.f20995v = z5 ? i5 : i6;
    }

    @Override // java.util.Iterator
    public final boolean hasNext() {
        return this.f20994i;
    }

    @Override // kotlin.collections.r0
    public final int nextInt() {
        int i5 = this.f20995v;
        if (i5 != this.f20993e) {
            this.f20995v = this.f20992d + i5;
            return i5;
        }
        if (!this.f20994i) {
            throw new NoSuchElementException();
        }
        this.f20994i = false;
        return i5;
    }
}
