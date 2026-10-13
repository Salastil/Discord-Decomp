package dc;

import androidx.recyclerview.widget.h0;

/* loaded from: classes3.dex */
public final class a {

    /* renamed from: f, reason: collision with root package name */
    public static final a f7466f = new a(h0.DEFAULT_DRAG_ANIMATION_DURATION, 10000, 81920, 10485760, 604800000);
    public final long a;

    /* renamed from: b, reason: collision with root package name */
    public final int f7467b;

    /* renamed from: c, reason: collision with root package name */
    public final int f7468c;

    /* renamed from: d, reason: collision with root package name */
    public final long f7469d;

    /* renamed from: e, reason: collision with root package name */
    public final int f7470e;

    public a(int i5, int i6, int i10, long j, long j5) {
        this.a = j;
        this.f7467b = i5;
        this.f7468c = i6;
        this.f7469d = j5;
        this.f7470e = i10;
    }

    public final boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (obj instanceof a) {
            a aVar = (a) obj;
            if (this.a == aVar.a && this.f7467b == aVar.f7467b && this.f7468c == aVar.f7468c && this.f7469d == aVar.f7469d && this.f7470e == aVar.f7470e) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        long j = this.a;
        int i5 = (((((((int) (j ^ (j >>> 32))) ^ 1000003) * 1000003) ^ this.f7467b) * 1000003) ^ this.f7468c) * 1000003;
        long j5 = this.f7469d;
        return ((i5 ^ ((int) ((j5 >>> 32) ^ j5))) * 1000003) ^ this.f7470e;
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder("EventStoreConfig{maxStorageSizeInBytes=");
        sb2.append(this.a);
        sb2.append(", loadBatchSize=");
        sb2.append(this.f7467b);
        sb2.append(", criticalSectionEnterTimeoutMs=");
        sb2.append(this.f7468c);
        sb2.append(", eventCleanUpAge=");
        sb2.append(this.f7469d);
        sb2.append(", maxBlobByteSizePerRow=");
        return k0.d.m(sb2, this.f7470e, "}");
    }
}
