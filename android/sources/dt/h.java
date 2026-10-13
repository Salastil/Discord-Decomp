package dt;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class h {
    public final boolean a;

    /* renamed from: b, reason: collision with root package name */
    public final Integer f7792b;

    /* renamed from: c, reason: collision with root package name */
    public final boolean f7793c;

    /* renamed from: d, reason: collision with root package name */
    public final Integer f7794d;

    /* renamed from: e, reason: collision with root package name */
    public final boolean f7795e;

    /* renamed from: f, reason: collision with root package name */
    public final boolean f7796f;

    public h(boolean z5, Integer num, boolean z6, Integer num2, boolean z7, boolean z8) {
        this.a = z5;
        this.f7792b = num;
        this.f7793c = z6;
        this.f7794d = num2;
        this.f7795e = z7;
        this.f7796f = z8;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof h)) {
            return false;
        }
        h hVar = (h) obj;
        return this.a == hVar.a && Intrinsics.areEqual(this.f7792b, hVar.f7792b) && this.f7793c == hVar.f7793c && Intrinsics.areEqual(this.f7794d, hVar.f7794d) && this.f7795e == hVar.f7795e && this.f7796f == hVar.f7796f;
    }

    /* JADX WARN: Multi-variable type inference failed */
    public final int hashCode() {
        boolean z5 = this.a;
        int i5 = z5;
        if (z5 != 0) {
            i5 = 1;
        }
        int i6 = i5 * 31;
        Integer num = this.f7792b;
        int hashCode = (i6 + (num == null ? 0 : num.hashCode())) * 31;
        boolean z6 = this.f7793c;
        int i10 = z6;
        if (z6 != 0) {
            i10 = 1;
        }
        int i11 = (hashCode + i10) * 31;
        Integer num2 = this.f7794d;
        int hashCode2 = (i11 + (num2 != null ? num2.hashCode() : 0)) * 31;
        boolean z7 = this.f7795e;
        int i12 = z7;
        if (z7 != 0) {
            i12 = 1;
        }
        int i13 = (hashCode2 + i12) * 31;
        boolean z8 = this.f7796f;
        return i13 + (z8 ? 1 : z8 ? 1 : 0);
    }

    public final String toString() {
        return "WebSocketExtensions(perMessageDeflate=" + this.a + ", clientMaxWindowBits=" + this.f7792b + ", clientNoContextTakeover=" + this.f7793c + ", serverMaxWindowBits=" + this.f7794d + ", serverNoContextTakeover=" + this.f7795e + ", unknownValues=" + this.f7796f + ')';
    }
}
