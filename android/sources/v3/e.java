package v3;

import java.util.Set;
import kotlin.collections.o0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class e {

    /* renamed from: i, reason: collision with root package name */
    public static final e f19193i;
    public final q a;

    /* renamed from: b, reason: collision with root package name */
    public final boolean f19194b;

    /* renamed from: c, reason: collision with root package name */
    public final boolean f19195c;

    /* renamed from: d, reason: collision with root package name */
    public final boolean f19196d;

    /* renamed from: e, reason: collision with root package name */
    public final boolean f19197e;

    /* renamed from: f, reason: collision with root package name */
    public final long f19198f;

    /* renamed from: g, reason: collision with root package name */
    public final long f19199g;

    /* renamed from: h, reason: collision with root package name */
    public final Set f19200h;

    static {
        q requiredNetworkType = q.f19212d;
        Intrinsics.checkNotNullParameter(requiredNetworkType, "requiredNetworkType");
        Intrinsics.checkNotNullParameter(requiredNetworkType, "requiredNetworkType");
        f19193i = new e(requiredNetworkType, false, false, false, false, -1L, -1L, o0.f13515d);
    }

    public e(q requiredNetworkType, boolean z5, boolean z6, boolean z7, boolean z8, long j, long j5, Set contentUriTriggers) {
        Intrinsics.checkNotNullParameter(requiredNetworkType, "requiredNetworkType");
        Intrinsics.checkNotNullParameter(contentUriTriggers, "contentUriTriggers");
        this.a = requiredNetworkType;
        this.f19194b = z5;
        this.f19195c = z6;
        this.f19196d = z7;
        this.f19197e = z8;
        this.f19198f = j;
        this.f19199g = j5;
        this.f19200h = contentUriTriggers;
    }

    public final boolean a() {
        return !this.f19200h.isEmpty();
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || !Intrinsics.areEqual(e.class, obj.getClass())) {
            return false;
        }
        e eVar = (e) obj;
        if (this.f19194b == eVar.f19194b && this.f19195c == eVar.f19195c && this.f19196d == eVar.f19196d && this.f19197e == eVar.f19197e && this.f19198f == eVar.f19198f && this.f19199g == eVar.f19199g && this.a == eVar.a) {
            return Intrinsics.areEqual(this.f19200h, eVar.f19200h);
        }
        return false;
    }

    public final int hashCode() {
        int hashCode = ((((((((this.a.hashCode() * 31) + (this.f19194b ? 1 : 0)) * 31) + (this.f19195c ? 1 : 0)) * 31) + (this.f19196d ? 1 : 0)) * 31) + (this.f19197e ? 1 : 0)) * 31;
        long j = this.f19198f;
        int i5 = (hashCode + ((int) (j ^ (j >>> 32)))) * 31;
        long j5 = this.f19199g;
        return this.f19200h.hashCode() + ((i5 + ((int) (j5 ^ (j5 >>> 32)))) * 31);
    }

    public final String toString() {
        return "Constraints{requiredNetworkType=" + this.a + ", requiresCharging=" + this.f19194b + ", requiresDeviceIdle=" + this.f19195c + ", requiresBatteryNotLow=" + this.f19196d + ", requiresStorageNotLow=" + this.f19197e + ", contentTriggerUpdateDelayMillis=" + this.f19198f + ", contentTriggerMaxDelayMillis=" + this.f19199g + ", contentUriTriggers=" + this.f19200h + ", }";
    }

    public e(e other) {
        Intrinsics.checkNotNullParameter(other, "other");
        this.f19194b = other.f19194b;
        this.f19195c = other.f19195c;
        this.a = other.a;
        this.f19196d = other.f19196d;
        this.f19197e = other.f19197e;
        this.f19200h = other.f19200h;
        this.f19198f = other.f19198f;
        this.f19199g = other.f19199g;
    }
}
