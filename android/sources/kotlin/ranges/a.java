package kotlin.ranges;

import java.util.Iterator;
import kotlin.jvm.internal.markers.KMappedMarker;
import no.c;
import org.jetbrains.annotations.NotNull;
import yo.b;

/* loaded from: classes3.dex */
public class a implements Iterable, KMappedMarker {

    /* renamed from: v, reason: collision with root package name */
    @NotNull
    public static final yo.a f13544v = new yo.a(null);

    /* renamed from: d, reason: collision with root package name */
    public final int f13545d;

    /* renamed from: e, reason: collision with root package name */
    public final int f13546e;

    /* renamed from: i, reason: collision with root package name */
    public final int f13547i;

    public a(int i5, int i6, int i10) {
        if (i10 == 0) {
            throw new IllegalArgumentException("Step must be non-zero.");
        }
        if (i10 == Integer.MIN_VALUE) {
            throw new IllegalArgumentException("Step must be greater than Int.MIN_VALUE to avoid overflow on negation.");
        }
        this.f13545d = i5;
        this.f13546e = c.a(i5, i6, i10);
        this.f13547i = i10;
    }

    public boolean equals(Object obj) {
        if (!(obj instanceof a)) {
            return false;
        }
        if (isEmpty() && ((a) obj).isEmpty()) {
            return true;
        }
        a aVar = (a) obj;
        return this.f13545d == aVar.f13545d && this.f13546e == aVar.f13546e && this.f13547i == aVar.f13547i;
    }

    public int hashCode() {
        if (isEmpty()) {
            return -1;
        }
        return (((this.f13545d * 31) + this.f13546e) * 31) + this.f13547i;
    }

    public boolean isEmpty() {
        int i5 = this.f13547i;
        int i6 = this.f13546e;
        int i10 = this.f13545d;
        return i5 > 0 ? i10 > i6 : i10 < i6;
    }

    @Override // java.lang.Iterable
    public final Iterator iterator() {
        return new b(this.f13545d, this.f13546e, this.f13547i);
    }

    public String toString() {
        StringBuilder sb2;
        int i5 = this.f13546e;
        int i6 = this.f13545d;
        int i10 = this.f13547i;
        if (i10 > 0) {
            sb2 = new StringBuilder();
            sb2.append(i6);
            sb2.append("..");
            sb2.append(i5);
            sb2.append(" step ");
            sb2.append(i10);
        } else {
            sb2 = new StringBuilder();
            sb2.append(i6);
            sb2.append(" downTo ");
            sb2.append(i5);
            sb2.append(" step ");
            sb2.append(-i10);
        }
        return sb2.toString();
    }
}
